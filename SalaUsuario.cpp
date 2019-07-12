#include "SalaUsuario.h"

	SalaUsuario::SalaUsuario()

{

TabSalaUsuarios.insert(pair <string, string> ("CAD1", "RobertPlantId"));
  TabSalaUsuarios.insert(pair <string, string> ("CAD2", "MickJaegerId"));
  TabSalaUsuarios.insert(pair <string, string> ("REDES1", "NeilyoungId"));
  TabSalaUsuarios.insert(pair <string, string> ("REDES2", "DavidGilmourId"));
}
 
void SalaUsuario::printSalasUsuario()
{
  multimap <string, string> :: iterator itr; 
  for (itr = TabSalaUsuarios.begin(); itr != TabSalaUsuarios.end(); ++itr) 
  { 
        std::cout  <<  '\t' << itr->first <<  '\t' << itr->second << '\n'; 
  } 
}
 
bool SalaUsuario::isInSala(string sala, string nome)
{
  multimap <string, string> :: iterator itr; 
  for (itr = TabSalaUsuarios.find(sala); itr != TabSalaUsuarios.end(); itr++) {
     if (itr->second == nome) {
        return true;
     }
  }
  return false;
//
}
