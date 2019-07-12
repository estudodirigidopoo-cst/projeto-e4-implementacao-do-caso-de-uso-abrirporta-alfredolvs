#ifndef __ROOM_HPP__
#define __ROOM_HPP__
#include <string>
namespace AccessControl {
class C_Room {
 public:
  C_Room(const std::string &new_room, const std::string &new_door);
  virtual ~C_Room();
  bool room_id(const std::string &);
  bool door_id(const std::string &);
  std::string get_room_id();
  std::string get_door_id();

 private:
  std::string my_room_id;
  std::string my_door_id;
};
}
#endif  //__room_hpp__
