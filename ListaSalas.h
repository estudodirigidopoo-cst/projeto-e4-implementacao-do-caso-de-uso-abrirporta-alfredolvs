#ifndef LISTASALAS_H
#define LISTASALAS_H

using namespace std;

	class ListaSalas{

		private:

			string idSala;
			

		public:

			ListaSalas();

			ListaSalas (string sala);

			~ListaSalas();

			bool abrirPorta(string sala);

};

#endif


