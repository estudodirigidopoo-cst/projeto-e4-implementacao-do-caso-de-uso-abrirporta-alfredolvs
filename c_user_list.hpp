#ifndef __C_USER_LIST_HPP__
#define __C_USER_LIST_HPP__

#include <unordered_map>
#include "c_user.hpp"

namespace AccessControl {
class C_User_List {
 public:
  C_User_List();
  virtual ~C_User_List();
  bool add_user(C_User &);
  int get_user_id(const std::string &);
  void print_user_list();

 private:
  std::unordered_map<std::string, int> my_list;
};
}
#endif  //__C_USER_LIST_HPP__
