
#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int option=NULL;
	cout << "PROGRAMA CALCULOS DE COMPONENTES ELETRÔNICOS PARA DESENVOLVIMENTO DE HARDWARE" << endl;
	cout << "=============================================================================" << endl;
	cout << "Calcular componentes para o circuito ci-555 astável [1]" << endl;
	cout << "Calcular frequência com o tempo [2]" << endl;
	cout << "Calcular frequência sem o tempo [3]" << endl;
	cout << "Sair [0]" << endl;
	cin >> option;
	switch (option) {
	case 1:
		cout << "tecoteco";
		break;
	case 2:
		break;
	case 3:
		break;
	}

	

}

