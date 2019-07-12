#include "c_user_list.hpp"
#include <iostream>

namespace AccessControl {
C_User_List::C_User_List() {}

C_User_List::~C_User_List() {}

bool C_User_List::add_user(C_User &new_user) {
  if (my_list[new_user.get_password()]) return false;
  my_list[new_user.get_password()] = new_user.get_id();
  return true;
}

int C_User_List::get_user_id(const std::string &password) {
  if (my_list[password]) return my_list[password];
  return -1;
}

void C_User_List::print_user_list() {
  for (auto iter = my_list.begin(); iter != my_list.end(); iter++) {
    std::cout << "[" << iter->first << "]";
    std::cout << " = " << iter->second << std::endl;
  }
}
}
