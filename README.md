<p align="center">
  <img src="logo.png" alt="Kaiko" width="300">
</p>

# kaiko-cpp-sdk

C++ client library for the Kaiko gRPC API. This SDK provides auto-generated gRPC stubs for streaming cryptocurrency market data.

## Requirements

- C++17 or later
- CMake 3.23+
- gRPC 1.54+
- Protobuf 3.21+
- A valid Kaiko API key

## Installation

### Using CMake FetchContent

```cmake
include(FetchContent)

FetchContent_Declare(
    kaikosdk
    GIT_REPOSITORY "https://github.com/kaikodata/kaiko-cpp-sdk"
    GIT_TAG "v1.34.0"
)

FetchContent_MakeAvailable(kaikosdk)
target_link_libraries(your_target PRIVATE kaikosdk)
```

### Using Conan

```bash
conan create .
```

The Conan recipe will automatically pull the required `grpc` and `protobuf` dependencies.

## Usage

```cpp
#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "sdk/sdk.grpc.pb.h"
#include "sdk/stream/trades_v1/request.pb.h"
#include "sdk/core/instrument_criteria.pb.h"

int main() {
    auto creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
    auto channel = grpc::CreateChannel("gateway-v0-grpc.kaiko.ovh:443", creds);
    auto stub = kaikosdk::StreamTradesServiceV1::NewStub(channel);

    grpc::ClientContext ctx;
    ctx.AddMetadata("authorization", "Bearer <YOUR_API_KEY>");

    kaikosdk::StreamTradesRequestV1 request;
    auto* criteria = request.mutable_instrument_criteria();
    criteria->set_exchange("cbse");
    criteria->set_instrument_class("spot");
    criteria->set_code("btc-usd");

    auto reader = stub->Subscribe(&ctx, request);

    kaikosdk::StreamTradesResponseV1 response;
    while (reader->Read(&response)) {
        std::cout << "Trade: " << response.DebugString() << std::endl;
    }

    return 0;
}
```

## Available Services

All services expose a `Subscribe` RPC that returns a server-side stream.

- `StreamTradesServiceV1` -- Real-time trades
- `StreamMarketUpdateServiceV1` -- Market updates
- `StreamAggregatedQuoteServiceV2` -- Aggregated quotes
- `StreamAggregatedPriceServiceV1` -- Aggregated prices
- `StreamAggregatedStatePriceServiceV1` -- Aggregated state prices
- `StreamAggregatesOHLCVServiceV1` -- OHLCV aggregates
- `StreamAggregatesVWAPServiceV1` -- VWAP aggregates
- `StreamAggregatesSpotExchangeRateV2ServiceV1` -- Spot exchange rates
- `StreamAggregatesSpotDirectExchangeRateV2ServiceV1` -- Direct exchange rates
- `StreamOrderbookL2ServiceV1` -- Level 2 order book
- `StreamOrderbookL2ReplayServiceV1` -- Level 2 order book replay
- `StreamIndexServiceV1` -- Index values
- `StreamIndexMultiAssetsServiceV1` -- Multi-asset index values
- `StreamIndexForexRateServiceV1` -- Index forex rates
- `StreamCompositeIndicesServiceV1` -- Composite indices
- `StreamConstantDurationIndicesServiceV1` -- Constant duration indices
- `StreamExoticIndicesServiceV1` -- Exotic indices
- `StreamDerivativesInstrumentMetricsServiceV1` -- Derivatives instrument metrics
- `StreamIvSviParametersServiceV1` -- IV SVI parameters

## Examples

For more complete examples, see the [kaiko-sdk-examples](https://github.com/kaikodata/kaiko-sdk-examples) repository.
