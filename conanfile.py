from conan import ConanFile
from conan.tools.cmake import CMake, cmake_layout
from conan.tools.files import copy
from os.path import join

class Pkg(ConanFile):
    name = "kaikosdk"
    version = "0.0.1"
    license = "MIT Licence"
    author = "hello@kaiko.com"
    url = "github.com/kaikodata/kaiko-cpp-sdk"
    description = "Kaiko C++ SDK"
    topics = ("Kaiko", "SDK", "GRPC")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}

    generators = "CMakeToolchain", "CMakeDeps"
    requires = "grpc/1.54.3", "protobuf/3.21.12"
    tool_requires = "cmake/3.28.1"

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*"

    def layout(self):
        cmake_layout(self)
        self.cpp.source.includedirs = ["src"]

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        local_include_folder = join(self.source_folder, self.cpp.source.includedirs[0])
        copy(self, "*.h", local_include_folder, join(self.package_folder, "include"), keep_path=True)

    def package_info(self):
        self.cpp_info.libs = ["kaikosdk"]