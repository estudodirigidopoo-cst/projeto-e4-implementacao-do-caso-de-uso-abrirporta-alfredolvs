#include<iostream>
#include "ControladorAcesso.h"
#include "InterfacePorta.h"
#include "ListaSalas.h"
#include "SalaUsuario.h"
#include "ListaUsuario.h"

using namespace std;

ControladorAcesso ContAcesso;
InterfacePorta Porta1("REDES1", "porta1");
ListaSalas LtSalas("CAD1","CAD2","REDES1","REDES2");
ListaUsuario LtUsuario("DavidGilmour","RobertPlant","MickJaeger","NeilYoung");
SalaUsuario SlUsuario("DavidGilmour","CAD1","RobertPlant","CAD2","MickJaeger","REDES1","NeilYoung","REDES2");




int main(void)
{
	bool	flag;
	flag = Porta1.abrirPorta("1234");
	if (flag ==true)
		cout << "abrir";
	else
		cout << "senha inválida!";
	

    
}
