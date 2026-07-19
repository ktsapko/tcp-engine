# tcp-engine

A modern C++ TCP server built with Boost.Asio to explore asynchronous networking, concurrency, and systems programming.

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

## Development Roadmap

- [x] Project bootstrap
- [ ] Conan integration
- [ ] Logging
- [ ] TCP acceptor
- [ ] Session management
- [ ] Binary protocol
- [ ] Thread Pool
- [ ] Ring Buffer
- [ ] Unit tests

## License

MIT
