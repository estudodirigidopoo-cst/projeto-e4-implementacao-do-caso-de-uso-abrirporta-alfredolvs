#ifndef __ACCESS_CTRL_HPP__
#define __ACCESS_CTRL_HPP__

#include "c_room_list.hpp"
#include "c_user_list.hpp"
#include "c_user_room.hpp"
#include "string"

namespace AccessControl {
class C_Access_Ctrl {
 public:
  C_Access_Ctrl(C_Room_List &room_list, C_User_List &user_list);
  virtual ~C_Access_Ctrl();
  bool open_room_door(const std::string &, C_Room &);
  bool open_room_door(const std::string &, const std::string &,
                      const std::string &);

 private:
  C_Room_List my_room_list;
  C_User_List my_user_list;
  C_User_Room association_list;
};
}

#endif
