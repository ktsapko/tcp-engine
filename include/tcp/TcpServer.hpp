#pragma once

#include <boost/asio/io_context.hpp>

namespace tcp {
class TcpServer {
public:
  explicit TcpServer(boost::asio::io_context &io_context);

  void Start();

private:
  boost::asio::io_context &io_context_;
};
} // namespace tcp
