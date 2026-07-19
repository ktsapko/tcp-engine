# tcp-engine

A modern C++ TCP server built from scratch to explore asynchronous networking, concurrency, and systems programming.

## Features

- Boost.Asio asynchronous TCP server
- Multiple concurrent clients
- Custom binary protocol
- Thread Pool for message processing
- Ring Buffer message queue
- Structured logging
- Unit tests for protocol parser
- CMake + Conan 2

## Tech Stack

- C++23
- Boost.Asio
- Conan 2
- CMake
- GoogleTest
- spdlog
- fmt

## Build

```bash
conan install . --output-folder=build --build=missing

cmake -B build -DCMAKE_TOOLCHAIN_FILE=build/conan_toolchain.cmake

cmake --build build
```

## Project Structure

```
src/
include/
tests/
docs/
```

## Roadmap

- [ ] TCP acceptor
- [ ] Session management
- [ ] Binary protocol
- [ ] Ring Buffer
- [ ] Thread Pool
- [ ] Logging
- [ ] Graceful shutdown
- [ ] Performance tests

## License

MIT
