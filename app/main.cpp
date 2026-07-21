#include <boost/asio.hpp>

#include "tcp/TcpServer.hpp"

int main() {
  boost::asio::io_context io_context;

  tcp::TcpServer server(io_context);

  server.Start();

  return 0;
}