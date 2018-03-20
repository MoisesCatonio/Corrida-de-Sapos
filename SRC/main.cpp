#include "sapo.hpp"

int main(){
	
	int stopper = 0;

	cout << "Neste jogo, cada sapo terá uma chance de pulo," << endl;
	cout << "cada pulo é representado por uma unidade n de metros." << endl;
	cout << "EX: 1 pulo de n metros." << endl;

	cout<<endl;

	Sapo sapo1(1, 0, 0, 1);
	Sapo sapo2(2, 0, 0, 1);
	Sapo sapo3(3, 0, 0, 1);

	sapo1.createCommonJump();
	sapo2.createCommonJump();
	sapo3.createCommonJump();

	srand(time(NULL));

	while(stopper != 1){


			//Comparação de empate entre o sapo 1 e o sapo 2.
			if (sapo1.getDist_perc() >= Sapo::getChegada() && sapo1.getDist_perc() == sapo2.getDist_perc()){

				cout<<"Houve um empate entre o sapo "<<sapo1.getId()<<" e o sapo "<< sapo2.getId()<<endl;
				cout<<"Ambos com "<< sapo1.getDist_perc() << " metros."<< endl;  
				break;
			}

			//Comparação de empate entre o sapo 1 e o sapo 3.
			if (sapo1.getDist_perc() >= Sapo::getChegada() && sapo1.getDist_perc() == sapo3.getDist_perc()){

				cout<<"Houve um empate entre o sapo "<<sapo1.getId()<<" e o sapo "<< sapo3.getId()<<endl;
				cout<<"Ambos com "<< sapo1.getDist_perc() << " metros."<< endl;  
				break;
			}

			//Comparação de empate entre o sapo 2 e o sapo 3.
			if (sapo2.getDist_perc() >= Sapo::getChegada() && sapo2.getDist_perc() == sapo3.getDist_perc()){

				cout<<"Houve um empate entre o sapo "<<sapo2.getId()<<" e o sapo "<< sapo3.getId()<<endl;
				cout<<"Ambos com "<< sapo2.getDist_perc() << " metros."<< endl;  
				break;
			}

			//Verifica se o sapo 1 ganhou e exibe a mensagem de vitória.
			if(sapo1.getDist_perc() >= Sapo::getChegada()){
				cout<<"Parabéns ao participante: "<< sapo1.getId() << endl;
				cout<<"O mesmo venceu a partida dando "<<sapo1.getQtd_pulos()<<" pulos."<<endl;
				cout<<"E atingindo a faixa de "<<sapo1.getDist_perc()<<" metros."<<endl;
				cout << "Os sapos 2 e 3 atingiram: "<< sapo2.getDist_perc() << " metros e " << sapo2.getDist_perc() << " metros,"<<endl;
				cout<<"respectivamente."<<endl; 
				break;
			}

			//Verifica se o sapo 2 ganhou e exibe a mensagem de vitória.
			if(sapo2.getDist_perc() >= Sapo::getChegada()){
				cout<<"Parabéns ao participante: "<< sapo2.getId() << endl;
				cout<<"O mesmo venceu a partida dando "<<sapo2.getQtd_pulos()<<" pulos."<<endl;
				cout<<"E atingindo a faixa de "<<sapo2.getDist_perc()<<" metros."<<endl;
				cout << "Os sapos 1 e 3 atingiram: "<< sapo1.getDist_perc() << " metros e " << sapo2.getDist_perc() << " metros,"<<endl;
				cout<<"respectivamente."<<endl;
				break;
			}

			//Verifica se o sapo 3 ganhou e exibe a mensagem de vitória.
			if(sapo3.getDist_perc() >= Sapo::getChegada()){
				cout<<"Parabéns ao participante: "<< sapo3.getId() << endl;
				cout<<"O mesmo venceu a partida dando "<<sapo3.getQtd_pulos()<<" pulos."<<endl;
				cout<<"E atingindo a faixa de "<<sapo3.getDist_perc()<<" metros."<<endl;
				cout << "Os sapos 1 e 2 atingiram: "<< sapo1.getDist_perc() << " metros e " << sapo2.getDist_perc() << " metros,"<<endl;
				cout<<"respectivamente."<<endl;
				break;
			}

			sapo1.setQtd_pulos(1);
			sapo1.setDist_perc(sapo1.pular());

			sapo2.setQtd_pulos(1);
			sapo2.setDist_perc(sapo2.pular());

			sapo3.setQtd_pulos(1);
			sapo3.setDist_perc(sapo3.pular());

		}

	return 0;	
}
