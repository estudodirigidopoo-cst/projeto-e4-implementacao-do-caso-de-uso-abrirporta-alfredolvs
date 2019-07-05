#include "InterfacePorta.h"
#include "ControladorAcesso.h"

	InterfacePorta::InterfacePorta()

{

}
	InterfacePorta::~InterfacePorta()

{

}

	InterfacePorta::InterfacePorta(string sala, string porta)
{

	idPorta = porta;
	idSala = sala;
}

bool InterfacePorta::abrirPorta(string senha)

{
}

