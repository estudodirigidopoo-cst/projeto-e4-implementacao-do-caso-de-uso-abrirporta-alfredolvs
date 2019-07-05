#ifndef SALAUSUARIO_H
#define SALAUSUARIO_H
#include <iostream>
#include <map>
#include <iterator>

using namespace std;
 
class SalaUsuario{
  private:
   multimap <string, string> TabSalaUsuarios;
  public:
   SalaUsuario();
   void printSalasUsuario();
   bool isInSala(string sala, string nome);
   ~SalaUsuario();

};

#endif
