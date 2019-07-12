#include "c_room.hpp"

namespace AccessControl {
C_Room::C_Room(const std::string &new_room, const std::string &new_door) {
  my_room_id = new_room;
  my_door_id = new_door;
}

C_Room::~C_Room() {}

bool C_Room::room_id(const std::string &new_room_id) {
  if (new_room_id == "") return false;
  my_room_id = new_room_id;
  return true;
}

bool C_Room::door_id(const std::string &new_door_id) {
  if (new_door_id == "") return false;
  my_door_id = new_door_id;
  return true;
}

std::string C_Room::get_room_id() { return my_room_id; }

std::string C_Room::get_door_id() { return my_door_id; }
}
