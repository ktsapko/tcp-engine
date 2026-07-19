from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, cmake_layout


class TcpEngineConan(ConanFile):
    name = "tcp-engine"
    version = "0.1.0"
    package_type = "application"

    settings = "os", "compiler", "build_type", "arch"

    generators = "CMakeDeps"

    exports_sources = (
        "CMakeLists.txt",
        "app/*",
        "src/*",
        "include/*",
        "tests/*",
    )

    def layout(self):
        cmake_layout(self)

    def generate(self):
        toolchain = CMakeToolchain(self)
        toolchain.generate()   
    
    def requirements(self):
        self.requires("spdlog/1.16.0")