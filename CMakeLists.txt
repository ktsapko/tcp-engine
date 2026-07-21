cmake_minimum_required(VERSION 3.28)
project(
  TcpEngine
  VERSION 0.1.0
  LANGUAGES CXX)

find_package(spdlog REQUIRED)
find_package(Boost REQUIRED)

add_executable(
  tcp_engine
  app/main.cpp
  src/TcpServer.cpp
  )
target_include_directories(
    tcp_engine
    PRIVATE
        include
)

target_compile_features(tcp_engine PRIVATE cxx_std_23)

target_link_libraries(tcp_engine PRIVATE spdlog::spdlog)
target_link_libraries(tcp_engine PRIVATE Boost::boost)
