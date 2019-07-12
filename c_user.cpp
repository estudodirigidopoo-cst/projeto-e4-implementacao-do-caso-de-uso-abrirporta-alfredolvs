#include "c_user.hpp"

namespace AccessControl {
C_User::C_User(const unsigned int &new_id, const std::string &new_password) {
  my_id = new_id;
  my_password = new_password;
}

C_User::~C_User() {}

bool C_User::id(const int &new_id) {
  if (new_id < 0) return false;
  my_id = new_id;
  return true;
}

bool C_User::password(const std::string &new_password) {
  if (new_password == "") return false;
  my_password = new_password;
  return true;
}

int C_User::get_id() { return my_id; }

std::string C_User::get_password() { return my_password; }
}
