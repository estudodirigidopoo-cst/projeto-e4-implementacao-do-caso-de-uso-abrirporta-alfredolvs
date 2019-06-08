controle: Main.o InterfacePorta.o ControladorAcesso.o ListaSalas.o Sala.o ListaUsuario.o Usuario.o
	g++ InterfacePorta.o ControladorAcesso.o ListaSalas.o Sala.o ListaUsuario.o Usuario.o Main.o -o controle

InterfacePorta.o: InterfacePorta.h InterfacePorta.cpp
		g++ -c InterfacePorta.cpp

ControladorAcesso.o: ControladorAcesso.h ControladorAcesso.cpp
		g++ -c ControladorAcesso.cpp

ListaSalas.o: ListaSalas.h ListaSalas.cpp
		g++ -c ListaSalas.cpp

Sala.o: Sala.h Sala.cpp
		g++ -c Sala.cpp

ListaUsuario.o: ListaUsuario.h ListaUsuario.cpp
		g++ -c ListaUsuario.cpp

Usuario.o: Usuario.h Usuario.cpp
		g++ -c Usuario.cpp

Main.o: Main.cpp
	g++ -c Main.cpp
