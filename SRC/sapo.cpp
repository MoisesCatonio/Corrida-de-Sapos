#include "sapo.hpp"

	int Sapo::chegada = 100;

	//Construtor de sapo, para alterar seus atributos como parâmetro na declaração de um novo sapo.
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

	float Sapo::getFuerza(){
		return fuerza;
	}

	void Sapo::setFuerza(float fp){
		fuerza = fp;
	}
 
	void Sapo::createCommonJump(){
		for (int i = 0; i < 6; i++)
		{
			capacidade[i] = i + 7;
		}
	}

	int Sapo::pular(){
		int key = rand() % 5;
		int jump = fuerza * capacidade[key];
		return jump;
	}

	void Sapo::showYourCommon(){
		for (int i = 0; i < 6; i++){
			cout<<capacidade[i]<<endl;
		} 
	}
 
	int Sapo::getChegada(){
		return chegada;
	}

	int Sapo::Win(){
		
		if(dist_perc >= chegada){

			cout<<"Parabéns ao participante: "<< identificador << endl;
			cout<<"O mesmo venceu a partida dando "<<qtd_pulos<<" pulos."<<endl;
			cout<<"E atingindo a faixa de "<<dist_perc<<" metros."<<endl;
			
			return 1;
		}

		return 0;
	}