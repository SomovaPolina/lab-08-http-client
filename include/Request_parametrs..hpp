//"Copyright [year] <Copyright Owner>"
// Created by polinka on 26.03.2021.
//

#ifndef INCLUDE_REQUEST_PARAMETRS__HPP_
#define INCLUDE_REQUEST_PARAMETRS__HPP_
#include <string>
struct Request_parametrs {
  std::string url;
  std::string host;
  std::string port;
  std::string target;
  std::string request_body;
  int version;
};
#endif  // INCLUDE_REQUEST_PARAMETRS__HPP_
