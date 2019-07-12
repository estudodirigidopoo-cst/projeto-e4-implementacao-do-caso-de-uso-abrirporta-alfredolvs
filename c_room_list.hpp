#ifndef __C_ROOM_LIST_HPP__
#define __C_ROOM_LIST_HPP__

#include <unordered_map>
#include "c_room.hpp"

namespace AccessControl {
class C_Room_List {
 public:
  C_Room_List();
  virtual ~C_Room_List();
  bool add_room(C_Room &);
  bool get_room(C_Room &);
  void print_room_list();

 private:
  std::unordered_map<std::string, std::string> my_list;
};
}
#endif
