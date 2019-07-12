#include "c_access_ctrl.hpp"

namespace AccessControl {

C_Access_Ctrl::C_Access_Ctrl(C_Room_List &room_list, C_User_List &user_list)
    : association_list() {
  my_room_list = room_list;
  my_user_list = user_list;
}

C_Access_Ctrl::~C_Access_Ctrl() {}

bool C_Access_Ctrl::open_room_door(const std::string &password, C_Room &room) {
  if (my_room_list.get_room(room)) {
    int user_id = my_user_list.get_user_id(password);
    if (user_id >= 0) {
      return association_list.allow_access(room.get_room_id(), user_id);
    }
  }
  return false;
}

bool C_Access_Ctrl::open_room_door(const std::string &password,
                                   const std::string &room_id,
                                   const std::string &door_id) {
  C_Room room(room_id, door_id);
  return open_room_door(password, room);
}
}
