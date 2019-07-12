#ifndef INTERFACEPORTA_H
#define INTERFACEPORTA_H
#include <string>

using namespace std;

	class InterfacePorta{

		private:
		
			string idSala;
			string idPorta;

		public:

			InterfacePorta();
			
			InterfacePorta (string sala, string porta);
			
			~InterfacePorta();

			bool abrirPorta(string senha);

};

#endif


