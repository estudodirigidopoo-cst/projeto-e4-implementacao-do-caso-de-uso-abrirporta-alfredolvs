#ifndef __DOOR_INTERFACE_HPP__
#define __DOOR_INTERFACE_HPP__

#include <string>
#include "c_access_ctrl.hpp"
namespace AccessControl {
class C_Door_Interface {
 public:
  C_Door_Interface(const std::string &id, const std::string &door,
                   C_Room_List &room_list, C_User_List &user_list);
  virtual ~C_Door_Interface();
  bool open_door(const std::string &);
  std::string get_id();
  std::string get_door();

 private:
  std::string my_id;
  std::string my_door;
  C_Access_Ctrl my_access_ctrl;
};
}
#endif
