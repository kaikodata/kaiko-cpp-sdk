// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: sdk/sdk.proto

#include "sdk/sdk.pb.h"
#include "sdk/sdk.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace kaikosdk {

static const char* StreamAggregatedQuoteServiceV2_method_names[] = {
  "/kaikosdk.StreamAggregatedQuoteServiceV2/Subscribe",
};

std::unique_ptr< StreamAggregatedQuoteServiceV2::Stub> StreamAggregatedQuoteServiceV2::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatedQuoteServiceV2::Stub> stub(new StreamAggregatedQuoteServiceV2::Stub(channel, options));
  return stub;
}

StreamAggregatedQuoteServiceV2::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatedQuoteServiceV2_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatedQuoteResponseV2>* StreamAggregatedQuoteServiceV2::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedQuoteRequestV2& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatedQuoteResponseV2>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatedQuoteServiceV2::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedQuoteRequestV2* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatedQuoteResponseV2>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatedQuoteResponseV2>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatedQuoteResponseV2>* StreamAggregatedQuoteServiceV2::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedQuoteRequestV2& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatedQuoteResponseV2>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatedQuoteResponseV2>* StreamAggregatedQuoteServiceV2::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedQuoteRequestV2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatedQuoteResponseV2>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatedQuoteServiceV2::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatedQuoteServiceV2_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatedQuoteServiceV2::Service, ::kaikosdk::StreamAggregatedQuoteRequestV2, ::kaikosdk::StreamAggregatedQuoteResponseV2>(
          [](StreamAggregatedQuoteServiceV2::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatedQuoteRequestV2* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatedQuoteResponseV2>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatedQuoteServiceV2::Service::~Service() {
}

::grpc::Status StreamAggregatedQuoteServiceV2::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatedQuoteRequestV2* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatedQuoteResponseV2>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamAggregatedPriceServiceV1_method_names[] = {
  "/kaikosdk.StreamAggregatedPriceServiceV1/Subscribe",
};

std::unique_ptr< StreamAggregatedPriceServiceV1::Stub> StreamAggregatedPriceServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatedPriceServiceV1::Stub> stub(new StreamAggregatedPriceServiceV1::Stub(channel, options));
  return stub;
}

StreamAggregatedPriceServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatedPriceServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatedPriceResponseV1>* StreamAggregatedPriceServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedPriceRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatedPriceResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatedPriceServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedPriceRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatedPriceResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatedPriceResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatedPriceResponseV1>* StreamAggregatedPriceServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedPriceRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatedPriceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatedPriceResponseV1>* StreamAggregatedPriceServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatedPriceRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatedPriceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatedPriceServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatedPriceServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatedPriceServiceV1::Service, ::kaikosdk::StreamAggregatedPriceRequestV1, ::kaikosdk::StreamAggregatedPriceResponseV1>(
          [](StreamAggregatedPriceServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatedPriceRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatedPriceResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatedPriceServiceV1::Service::~Service() {
}

::grpc::Status StreamAggregatedPriceServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatedPriceRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatedPriceResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamAggregatesOHLCVServiceV1_method_names[] = {
  "/kaikosdk.StreamAggregatesOHLCVServiceV1/Subscribe",
};

std::unique_ptr< StreamAggregatesOHLCVServiceV1::Stub> StreamAggregatesOHLCVServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatesOHLCVServiceV1::Stub> stub(new StreamAggregatesOHLCVServiceV1::Stub(channel, options));
  return stub;
}

StreamAggregatesOHLCVServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatesOHLCVServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatesOHLCVResponseV1>* StreamAggregatesOHLCVServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesOHLCVRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatesOHLCVResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatesOHLCVServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesOHLCVRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatesOHLCVResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatesOHLCVResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesOHLCVResponseV1>* StreamAggregatesOHLCVServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesOHLCVRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesOHLCVResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesOHLCVResponseV1>* StreamAggregatesOHLCVServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesOHLCVRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesOHLCVResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatesOHLCVServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatesOHLCVServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatesOHLCVServiceV1::Service, ::kaikosdk::StreamAggregatesOHLCVRequestV1, ::kaikosdk::StreamAggregatesOHLCVResponseV1>(
          [](StreamAggregatesOHLCVServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatesOHLCVRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatesOHLCVResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatesOHLCVServiceV1::Service::~Service() {
}

::grpc::Status StreamAggregatesOHLCVServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatesOHLCVRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatesOHLCVResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamAggregatesSpotExchangeRateServiceV1_method_names[] = {
  "/kaikosdk.StreamAggregatesSpotExchangeRateServiceV1/Subscribe",
};

std::unique_ptr< StreamAggregatesSpotExchangeRateServiceV1::Stub> StreamAggregatesSpotExchangeRateServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatesSpotExchangeRateServiceV1::Stub> stub(new StreamAggregatesSpotExchangeRateServiceV1::Stub(channel, options));
  return stub;
}

StreamAggregatesSpotExchangeRateServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatesSpotExchangeRateServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* StreamAggregatesSpotExchangeRateServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatesSpotExchangeRateServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* StreamAggregatesSpotExchangeRateServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* StreamAggregatesSpotExchangeRateServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatesSpotExchangeRateServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatesSpotExchangeRateServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatesSpotExchangeRateServiceV1::Service, ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1, ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>(
          [](StreamAggregatesSpotExchangeRateServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatesSpotExchangeRateServiceV1::Service::~Service() {
}

::grpc::Status StreamAggregatesSpotExchangeRateServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatesSpotExchangeRateRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatesSpotExchangeRateResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamAggregatesDirectExchangeRateServiceV1_method_names[] = {
  "/kaikosdk.StreamAggregatesDirectExchangeRateServiceV1/Subscribe",
};

std::unique_ptr< StreamAggregatesDirectExchangeRateServiceV1::Stub> StreamAggregatesDirectExchangeRateServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatesDirectExchangeRateServiceV1::Stub> stub(new StreamAggregatesDirectExchangeRateServiceV1::Stub(channel, options));
  return stub;
}

StreamAggregatesDirectExchangeRateServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatesDirectExchangeRateServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* StreamAggregatesDirectExchangeRateServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatesDirectExchangeRateServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* StreamAggregatesDirectExchangeRateServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* StreamAggregatesDirectExchangeRateServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatesDirectExchangeRateServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatesDirectExchangeRateServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatesDirectExchangeRateServiceV1::Service, ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1, ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>(
          [](StreamAggregatesDirectExchangeRateServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatesDirectExchangeRateServiceV1::Service::~Service() {
}

::grpc::Status StreamAggregatesDirectExchangeRateServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamTradesServiceV1_method_names[] = {
  "/kaikosdk.StreamTradesServiceV1/Subscribe",
};

std::unique_ptr< StreamTradesServiceV1::Stub> StreamTradesServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamTradesServiceV1::Stub> stub(new StreamTradesServiceV1::Stub(channel, options));
  return stub;
}

StreamTradesServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamTradesServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamTradesResponseV1>* StreamTradesServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamTradesRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamTradesResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamTradesServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamTradesRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamTradesResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamTradesResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamTradesResponseV1>* StreamTradesServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamTradesRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamTradesResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamTradesResponseV1>* StreamTradesServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamTradesRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamTradesResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamTradesServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamTradesServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamTradesServiceV1::Service, ::kaikosdk::StreamTradesRequestV1, ::kaikosdk::StreamTradesResponseV1>(
          [](StreamTradesServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamTradesRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamTradesResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamTradesServiceV1::Service::~Service() {
}

::grpc::Status StreamTradesServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamTradesRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamTradesResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamAggregatesVWAPServiceV1_method_names[] = {
  "/kaikosdk.StreamAggregatesVWAPServiceV1/Subscribe",
};

std::unique_ptr< StreamAggregatesVWAPServiceV1::Stub> StreamAggregatesVWAPServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamAggregatesVWAPServiceV1::Stub> stub(new StreamAggregatesVWAPServiceV1::Stub(channel, options));
  return stub;
}

StreamAggregatesVWAPServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamAggregatesVWAPServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamAggregatesVWAPResponseV1>* StreamAggregatesVWAPServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesVWAPRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamAggregatesVWAPResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamAggregatesVWAPServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesVWAPRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamAggregatesVWAPResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamAggregatesVWAPResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesVWAPResponseV1>* StreamAggregatesVWAPServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesVWAPRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesVWAPResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamAggregatesVWAPResponseV1>* StreamAggregatesVWAPServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamAggregatesVWAPRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamAggregatesVWAPResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamAggregatesVWAPServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamAggregatesVWAPServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamAggregatesVWAPServiceV1::Service, ::kaikosdk::StreamAggregatesVWAPRequestV1, ::kaikosdk::StreamAggregatesVWAPResponseV1>(
          [](StreamAggregatesVWAPServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamAggregatesVWAPRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamAggregatesVWAPResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamAggregatesVWAPServiceV1::Service::~Service() {
}

::grpc::Status StreamAggregatesVWAPServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamAggregatesVWAPRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamAggregatesVWAPResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamIndexServiceV1_method_names[] = {
  "/kaikosdk.StreamIndexServiceV1/Subscribe",
};

std::unique_ptr< StreamIndexServiceV1::Stub> StreamIndexServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamIndexServiceV1::Stub> stub(new StreamIndexServiceV1::Stub(channel, options));
  return stub;
}

StreamIndexServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamIndexServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamIndexServiceResponseV1>* StreamIndexServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexServiceRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamIndexServiceResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamIndexServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexServiceRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamIndexServiceResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamIndexServiceResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamIndexServiceResponseV1>* StreamIndexServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexServiceRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamIndexServiceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamIndexServiceResponseV1>* StreamIndexServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexServiceRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamIndexServiceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamIndexServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamIndexServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamIndexServiceV1::Service, ::kaikosdk::StreamIndexServiceRequestV1, ::kaikosdk::StreamIndexServiceResponseV1>(
          [](StreamIndexServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamIndexServiceRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamIndexServiceResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamIndexServiceV1::Service::~Service() {
}

::grpc::Status StreamIndexServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamIndexServiceRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamIndexServiceResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamIndexMultiAssetsServiceV1_method_names[] = {
  "/kaikosdk.StreamIndexMultiAssetsServiceV1/Subscribe",
};

std::unique_ptr< StreamIndexMultiAssetsServiceV1::Stub> StreamIndexMultiAssetsServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamIndexMultiAssetsServiceV1::Stub> stub(new StreamIndexMultiAssetsServiceV1::Stub(channel, options));
  return stub;
}

StreamIndexMultiAssetsServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamIndexMultiAssetsServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* StreamIndexMultiAssetsServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamIndexMultiAssetsServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* StreamIndexMultiAssetsServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* StreamIndexMultiAssetsServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamIndexMultiAssetsServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamIndexMultiAssetsServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamIndexMultiAssetsServiceV1::Service, ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1, ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>(
          [](StreamIndexMultiAssetsServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamIndexMultiAssetsServiceV1::Service::~Service() {
}

::grpc::Status StreamIndexMultiAssetsServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamIndexMultiAssetsServiceResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* StreamMarketUpdateServiceV1_method_names[] = {
  "/kaikosdk.StreamMarketUpdateServiceV1/Subscribe",
};

std::unique_ptr< StreamMarketUpdateServiceV1::Stub> StreamMarketUpdateServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamMarketUpdateServiceV1::Stub> stub(new StreamMarketUpdateServiceV1::Stub(channel, options));
  return stub;
}

StreamMarketUpdateServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Subscribe_(StreamMarketUpdateServiceV1_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::kaikosdk::StreamMarketUpdateResponseV1>* StreamMarketUpdateServiceV1::Stub::SubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamMarketUpdateRequestV1& request) {
  return ::grpc::internal::ClientReaderFactory< ::kaikosdk::StreamMarketUpdateResponseV1>::Create(channel_.get(), rpcmethod_Subscribe_, context, request);
}

void StreamMarketUpdateServiceV1::Stub::async::Subscribe(::grpc::ClientContext* context, const ::kaikosdk::StreamMarketUpdateRequestV1* request, ::grpc::ClientReadReactor< ::kaikosdk::StreamMarketUpdateResponseV1>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::kaikosdk::StreamMarketUpdateResponseV1>::Create(stub_->channel_.get(), stub_->rpcmethod_Subscribe_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamMarketUpdateResponseV1>* StreamMarketUpdateServiceV1::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamMarketUpdateRequestV1& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamMarketUpdateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::kaikosdk::StreamMarketUpdateResponseV1>* StreamMarketUpdateServiceV1::Stub::PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::kaikosdk::StreamMarketUpdateRequestV1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::kaikosdk::StreamMarketUpdateResponseV1>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, request, false, nullptr);
}

StreamMarketUpdateServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamMarketUpdateServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StreamMarketUpdateServiceV1::Service, ::kaikosdk::StreamMarketUpdateRequestV1, ::kaikosdk::StreamMarketUpdateResponseV1>(
          [](StreamMarketUpdateServiceV1::Service* service,
             ::grpc::ServerContext* ctx,
             const ::kaikosdk::StreamMarketUpdateRequestV1* req,
             ::grpc::ServerWriter<::kaikosdk::StreamMarketUpdateResponseV1>* writer) {
               return service->Subscribe(ctx, req, writer);
             }, this)));
}

StreamMarketUpdateServiceV1::Service::~Service() {
}

::grpc::Status StreamMarketUpdateServiceV1::Service::Subscribe(::grpc::ServerContext* context, const ::kaikosdk::StreamMarketUpdateRequestV1* request, ::grpc::ServerWriter< ::kaikosdk::StreamMarketUpdateResponseV1>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace kaikosdk

