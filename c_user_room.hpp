#ifndef __USER_ROOM_HPP__
#define __USER_ROOM_HPP__

#include <string>
#include <unordered_map>
#include "c_user_room.hpp"

namespace AccessControl {
class C_User_Room {
 public:
  C_User_Room();
  virtual ~C_User_Room();
  bool allow_access(const std::string &, const int &);
  void print_list();

 private:
  std::unordered_map<int, std::string> my_list;
};
}
#endif
