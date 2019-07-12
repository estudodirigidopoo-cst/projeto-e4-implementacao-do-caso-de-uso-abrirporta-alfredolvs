#include "c_room_list.hpp"
#include <iostream>

namespace AccessControl {

C_Room_List::C_Room_List() {}

C_Room_List::~C_Room_List() {}

bool C_Room_List::add_room(C_Room &new_room) {
  if (my_list.find(new_room.get_room_id()) != my_list.end()) return false;
  my_list[new_room.get_room_id()] = new_room.get_door_id();
  return true;
}

bool C_Room_List::get_room(C_Room &room) {
  if (my_list.find(room.get_room_id()) != my_list.end()) return true;
  return false;
}

void C_Room_List::print_room_list() {
  for (auto it = my_list.begin(); it != my_list.end(); it++) {
    std::cout << "[" << it->first << "]";
    std::cout << " = " << it->second << std::endl;
  }
}
}
