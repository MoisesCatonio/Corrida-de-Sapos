#ifndef sapo_hpp
#define sapo_hpp
#include <iostream>

using namespace std;

#include <string>
#include <stdlib.h>
#include <ctime>
#include <time.h>
class Sapo{

	private:
		int identificador;
		int dist_perc;
		int qtd_pulos;
		float fuerza;
		int capacidade[5];

	public:
		//Declara um sapo com seus atributos mutáveis.
		Sapo(int id, int d, int qtd, int fp);

		//Retorna o atributo "identificador" do sapo.
		int getId();

		//Altera o atributo "identificador" do sapo.
		void setId(int id);

		//Retorna o atributo de distância percorrida do sapo.
		int getDist_perc();
		
		//Altera o atributo de distância percorrida do sapo.
		void setDist_perc(int dist);
		
		//Retorna o atributo de quantidade de pulos dada do sapo.
		int getQtd_pulos();

		//Altera o atributo de quantidade de pulos dada do sapo.
		void setQtd_pulos(int qtd);

		//Retorna o atributo equivalente a força do pulo do sapo.
		float getFuerza();

		//Altera o atributo equivalente a força do pulo do sapo.
		void setFuerza(float fp); // Fp é uma piadinha com Frog Power/ Horse Power.

		//Cria um vetor com valores de pulo que variam conforme seu indice e a adição de uma variável.
		void createCommonJump();

		//Função que gera a quantidade de pulos do sapo baseado no vetor de pulos criado na função createCommonJump.
		void showYourCommon();

		//Mostra os valores presentes no vetor com os pulos possíveis do sapo.
		int pular();

		int Win();

		static int chegada;
		
		//Retorna a quantidade de metros que será utilizada como chegada.
		static int getChegada();
};

#endif