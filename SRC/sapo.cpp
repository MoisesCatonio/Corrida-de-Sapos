#include "sapo.hpp"

	int Sapo::chegada = 100;

	//Construtor de sapo, para alterar seus atributos como parâmetro na declaração de um novo sapo.
	Sapo::Sapo(int id, int d, int qtd, int fp){
		identificador = id;
		dist_perc = d;
		qtd_pulos = qtd;
		fuerza = fp;

	}
	//retorna o atributo "identificador" do sapo.
	int Sapo::getId(){
		return identificador;
	}
	
	//Altera o atributo "identificador" do sapo.
	void Sapo::setId(int id){
		identificador = id;
	}

	//retorna o atributo de distância percorrida do sapo.
	int Sapo::getDist_perc(){
		return dist_perc;
	}

	//Altera o atributo de distância percorrida do sapo.
	void Sapo::setDist_perc(int dist){
		dist_perc = dist_perc + dist;
	}

	//retorna o atributo de quantidade de pulos dada do sapo.
	int Sapo::getQtd_pulos(){
		return qtd_pulos;
	}

	//Altera o atributo de quantidade de pulos dada do sapo.
	void Sapo::setQtd_pulos(int qtd){
		qtd_pulos = qtd_pulos + qtd;
	}

	//retorna o atributo equivalente a força do pulo do sapo.
	float Sapo::getFuerza(){
		return fuerza;
	}

	//Altera o atributo equivalente a força do pulo do sapo.
	void Sapo::setFuerza(float fp){
		fuerza = fp;
	}

	//Cria um vetor com valores de pulo que variam conforme seu indice e a adição de uma variável. 
	void Sapo::createCommonJump(){
		for (int i = 0; i < 6; i++)
		{
			capacidade[i] = i + 7;
		}
	}

	//Função que gera a quantidade de pulos do sapo baseado no vetor de pulos criado na função createCommonJump.
	int Sapo::pular(){
		int key = rand() % 5;
		int jump = fuerza * capacidade[key];
		return jump;
	}

	//Mostra os valores presentes no vetor com os pulos possíveis do sapo.
	void Sapo::showYourCommon(){
		for (int i = 0; i < 6; i++){
			cout<<capacidade[i]<<endl;
		} 
	}

	//Retorna a quantidade de metros que será utilizada como chegada. 
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