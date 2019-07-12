#include "c_door_interface.hpp"

namespace AccessControl {
C_Door_Interface::C_Door_Interface(const std::string &id,
                                   const std::string &door,
                                   C_Room_List &room_list,
                                   C_User_List &user_list)
    : my_access_ctrl(room_list, user_list) {
  my_id = id;
  my_door = door;
}

C_Door_Interface::~C_Door_Interface() {}

bool C_Door_Interface::open_door(const std::string &password) {
  return my_access_ctrl.open_room_door(password, my_id, my_door);
}
std::string C_Door_Interface::get_id() { return my_id; }
std::string C_Door_Interface::get_door() { return my_door; }
}
