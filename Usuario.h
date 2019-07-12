#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario{

		private:
		string nome;
		string senha;

		public:

			Usuario(string meuNome, string minhaSenha);
		
			//string getNome() {return nome;}
			//string getSenha() {return senha;}
			//~Usuario();

};

#endif
