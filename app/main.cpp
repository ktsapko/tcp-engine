#include <boost/asio.hpp>
#include <spdlog/spdlog.h>

int main() {
  boost::asio::io_context io_context;

  spdlog::info("TcpEngine started");

  return 0;
}