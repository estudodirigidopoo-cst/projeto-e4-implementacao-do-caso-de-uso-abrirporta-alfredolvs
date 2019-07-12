#include <iostream>
#include "c_door_interface.hpp"
#include "c_room.hpp"
#include "c_room_list.hpp"
#include "c_user.hpp"
#include "c_user_list.hpp"

using namespace AccessControl;

int main() {
  //-Creating Users-
  C_User user_1(1, "1234");
  C_User user_2(2, "5678");
  C_User user_3(3, "2222");
  C_User user_4(4, "3333");
  //-Creating Rooms-
  C_Room room1("CAD1", "Porta_1");
  C_Room room2("CAD2", "Porta_1");
  C_Room room3("REDES1", "Porta_1");
  C_Room room4("REDES2", "Porta_1");
  //-Creating lists-
  C_User_List user_list_1;
  C_User_List user_list_2;
  C_User_List user_list_3;
  C_User_List user_list_4;
  C_Room_List room_list_1;
  C_Room_List room_list_2;
  C_Room_List room_list_3;
  C_Room_List room_list_4;

  //-Filling user list-
  user_list_1.add_user(user_1);
  user_list_2.add_user(user_2);
  user_list_3.add_user(user_3);
  user_list_4.add_user(user_4);
  //-Filling room list-
  room_list_1.add_room(room1);
  room_list_2.add_room(room2);
  room_list_3.add_room(room3);
  room_list_4.add_room(room4);
  //--------------------------------
  //----------ACTOR-----------------
  //--------------------------------
  //-ACTOR Tries to open PC ROOM-
  C_Door_Interface door_interface1("CAD1", "Porta_1", room_list_1,
                                   user_list_1);
  C_Door_Interface door_interface2("CAD2", "Porta_1", room_list_2,
                                   user_list_2);

  C_Door_Interface door_interface3("REDES1", "Porta_1", room_list_3,
                                   user_list_3);
  C_Door_Interface door_interface4("REDES2", "Porta_1", room_list_4,
                                   user_list_4);
  
  std::cout << "por favor, insira sua senha: ";
  std::string my_password;
  std::cin >> my_password;
  if (door_interface1.open_door(my_password)) {
    std::cout << "Porta: \n" << door_interface1.get_door();
    std::cout << " da sala: \n" << door_interface1.get_id();
    std::cout << " \nLiberada!\n" << std::endl;
  } else {
    std::cout << "Acesso Negado!" << std::endl;
  }
  
  if (door_interface2.open_door(my_password)) {
    std::cout << "Porta: \n" << door_interface2.get_door();
    std::cout << " da sala: \n" << door_interface2.get_id();
    std::cout << " \nLiberada!\n" << std::endl;
  } else {
    std::cout << "Acesso Negado!" << std::endl;
  }
  
  if (door_interface3.open_door(my_password)) {
    std::cout << "Porta: \n" << door_interface3.get_door();
    std::cout << " da sala: \n" << door_interface3.get_id();
    std::cout << " \nLiberada!\n" << std::endl;
  } else {
    std::cout << "Acesso Negado!" << std::endl;
  }
  
  if (door_interface4.open_door(my_password)) {
    std::cout << "Porta: \n" << door_interface4.get_door();
    std::cout << " da sala: \n" << door_interface4.get_id();
    std::cout << " \nLiberada!\n" << std::endl;
  } else {
    std::cout << "Acesso Negado!" << std::endl;
  }
  return 0;
}
