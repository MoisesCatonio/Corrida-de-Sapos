#include "sapo.hpp"

int main(){
	
	int stopper = 0, stopper2 = 0, stopper3 = 0;

	cout << "Neste jogo, cada sapo terá uma chance de pulo," << endl;
	cout << "cada pulo é representado por uma unidade n de metros." << endl;
	cout << "EX: 1 pulo de n metros." << endl;

	cout<<endl;

	Sapo sapo1(1, 0, 0, 1.5);
	Sapo sapo2(2, 0, 0, 1.7);
	Sapo sapo3(3, 0, 0, 1.9);

	sapo1.createCommonJump();
	sapo2.createCommonJump();
	sapo3.createCommonJump();

	srand(time(NULL));

	while(stopper != 1){

		stopper = sapo1.Win();

		if(stopper == 1){
			break;
		}

		stopper2 = sapo2.Win();
		
		if (stopper2 == 1)
		{
			break;
		}
		
		stopper3 = sapo3.Win();

		if(stopper3 == 1){
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
