#ifndef __USER_HPP__
#define __USER_HPP__

#include <string>

namespace AccessControl {
class C_User {
 public:
  C_User(const unsigned int &new_id, const std::string &new_password);
  virtual ~C_User();
  bool id(const int &);
  bool password(const std::string &);
  int get_id();
  std::string get_password();

 private:
  int my_id;
  std::string my_password;
};
}  // AccessControl

#endif  //__USER_HPP__
