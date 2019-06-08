controle: InterfacePorta.o ControladorAcesso.o ListaSalas.o Sala.o ListaUsuario.o Usuario.o
	g++ InterfacePorta.o ControladorAcesso.o ListaSalas.o Sala.o ListaUsuario.o Usuario.o -o controle

InterfacePorta.o: InterfacePorta.h InterfacePorta.cc
		g++ -c InterfacePorta.cc

ControladorAcesso.o: ControladorAcesso.h ControladorAcesso.cc
		g++ -c ControladorAcesso.cc

ListaSalas.o: ListaSalas.h ListaSalas.cc
		g++ -c ListaSalas.cc

Sala.o: Sala.h Sala.cc
		g++ -c Sala.cc

ListaUsuario.o: ListaUsuario.h ListaUsuario.cc
		g++ -c ListaUsuario.cc

Usuario.o: Usuario.h Usuario.cc
		g++ -c Usuario.cc
