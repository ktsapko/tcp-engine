#include <spdlog/spdlog.h>
#include "tcp/TcpServer.hpp"

namespace tcp {

TcpServer::TcpServer(boost::asio::io_context &io_context)
    : io_context_(io_context) {}

void TcpServer::Start() {
  spdlog::info("TcpServer started!");
}

} // namespace tcp