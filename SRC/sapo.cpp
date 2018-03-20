#include "sapo.hpp"

	int Sapo::chegada = 100;

	Sapo::Sapo(int id, int d, int qtd, int fp){
		identificador = id;
		dist_perc = d;
		qtd_pulos = qtd;
		fuerza = fp;

	}

	int Sapo::getId(){
		return identificador;
	}
	
	void Sapo::setId(int id){
		identificador = id;
	}

	int Sapo::getDist_perc(){
		return dist_perc;
	}

	void Sapo::setDist_perc(int dist){
		dist_perc = dist_perc + dist;
	}

	int Sapo::getQtd_pulos(){
		return qtd_pulos;
	}

	void Sapo::setQtd_pulos(int qtd){
		qtd_pulos = qtd_pulos + qtd;
	}

	int Sapo::getFuerza(){
		return fuerza;
	}

	void Sapo::setFuerza(int fp){
		fuerza = fp;
	}

	void Sapo::createCommonJump(){
		for (int i = 0; i < 5; i++)
		{
			capacidade[i] = i + 7;
		}
	}

	int Sapo::pular(){
		int key = rand() % 4;
		int jump = fuerza * (capacidade[key]);
		return jump;
	}

	void Sapo::showYourCommon(){
		for (int i = 0; i < 5; i++){
			cout<<capacidade[i]<<endl;
		} 
	}

	int Sapo::getChegada(){
		return chegada;
	}