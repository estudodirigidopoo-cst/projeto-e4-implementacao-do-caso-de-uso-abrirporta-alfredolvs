#include "c_user_room.hpp"
#include <iostream>

namespace AccessControl {
C_User_Room::C_User_Room() {}

C_User_Room::~C_User_Room() {}

bool C_User_Room::allow_access(const std::string &room_id, const int &user_id) {
  for (auto it = my_list.begin(); it != my_list.end(); it++) {
    if (it->first == user_id) {
      if (it->second == room_id) {
        // Assumes that the user always exits the room
        // We can implement a sensor to detect this
        my_list.erase(it);
        return true;
      }
      return false;
    }
  }
  // Assumes that the user always enters the room
  // We can implement a sensor to detect this
  my_list[user_id] = room_id;
  return true;
}

void C_User_Room::print_list() {
  for (auto it = my_list.begin(); it != my_list.end(); it++) {
    std::cout << "[" << it->first << "]";
    std::cout << " = " << it->second << std::endl;
  }
}
}
