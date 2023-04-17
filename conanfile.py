from conans import ConanFile, CMake


class Pkg(ConanFile):
    name = "kaikosdk"
    version = "0.0.1"
    license = "MIT Licence"
    author = "hello@kaiko.com"
    url = "github.com/kaikodata/kaiko-cpp-sdk"
    description = "Kaiko C++ SDK"
    topics = ("Kaiko", "SDK", "GRPC")

    settings = "os", "compiler", "arch", "build_type"

    # run "conan info . --graph deps.html" to see dependency graph
    requires = [("grpc/1.50.1"), ("protobuf/3.21.4")]
    # grpc package depends internally on at least protobuf/3.21.4
    build_requires = ("cmake/3.25.1")

    # default grpc package options
    # default_options = {
    #     "grpc:codegen": True,
    #     "grpc:cpp_plugin": True,
    #     "grpc:csharp_ext": False,
    #     "grpc:csharp_plugin": True,
    #     "grpc:fPIC": True,
    #     "grpc:node_plugin": True,
    #     "grpc:objective_c_plugin": True,
    #     "grpc:php_plugin": True,
    #     "grpc:python_plugin": True,
    #     "grpc:ruby_plugin": True,
    # }

    generators = "cmake"
    exports_sources = "src/*"

    def build(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        cmake.build()

    def package(self):
        self.copy("*.h", src="src", dst="include")
        self.copy("*.lib", dst="lib", keep_path=False)
        self.copy("*.a", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = ["kaikosdk"]
