#ifndef USUARIO_H
#define USUARIO_H

	class Usuario{

		private:
		string nome;
		string senha;

		public:

			Usuario(string meuNome, string minhaSenha) {nome = meuNome; senha = minhaSenha; };
			string getNome() {return nome;}
			string getSenha() {return senha;}
			~Usuario();;

};

#endif
