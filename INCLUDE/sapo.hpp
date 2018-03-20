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
		int fuerza;
		int capacidade[5];

	public:
		//Declara um sapo com seus atributos mutáveis.
		Sapo(int id, int d, int qtd, int fp);

		int getId();
		void setId(int id);

		int getDist_perc();
		void setDist_perc(int dist);

		int getQtd_pulos();
		void setQtd_pulos(int qtd);

		int getFuerza();
		void setFuerza(int fp); // Fp é uma piadinha com Frog Power/ Horse Power.

		void createCommonJump();

		void showYourCommon();
		int pular();

		static int chegada;
		static int getChegada();
};

#endif