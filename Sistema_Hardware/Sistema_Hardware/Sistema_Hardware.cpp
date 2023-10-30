
#include <iostream>
#include <iomanip>
#include<locale.h>
using namespace std;
void freq() {
    float frequencia;
    float capacitor;
    float aux;

    system("cls");
    cout << "==============Encontrar a frequência desejada==============" << endl;
    cout << "Por favor informe a frequência que você deseja encontrar" << endl;
    cin >> frequencia;
    aux = 1.44 / frequencia;
    capacitor = aux / (10 + 2 * 10) * 1000; 
    cout << "Os valores dos componentes serão" << endl;
    cout << left << setw(10) << "Resistor 1 " << setw(10) << "Resistor 2 " << endl;
    cout << left << setw(10) << "10 Ohms " << setw(10) << "10 Ohms  " << endl;
    cout << "Capacitor: " << capacitor << " µF" << endl;
}
/*
float frequencia;
	float capacitor;
	float aux;

	system("cls");
	cout << "==============Encontrar a frequência desejada==============" << endl;
	cout << "Por favor informe a frequencia que você deseja encontrar" << endl;
	//cout << "Notas: Usaremos valores fixos nos resistores sendo:" << endl;
	cin >> frequencia;
	aux= (30000 * frequencia);
	capacitor = 1.44 / aux;
	cout << "Os valores dos componetes serão" << endl;
	cout << left << setw(10) << "Resistor 1 " << setw(10) << " Resistor 2 " << endl;
	cout << left << setw(10) << "10 Ohms " << setw(10) << " 10 Ohms  "<< endl;
	cout << "Capacitor: " << capacitor << endl;
*/
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int option = NULL;
    int pausa;

    cout << "PROGRAMA CALCULOS DE COMPONENTES ELETRÔNICOS PARA DESENVOLVIMENTO DE HARDWARE" << endl;
    cout << "=============================================================================" << endl;
    cout << "Calcular componentes para o circuito ci-555 astável [1]" << endl;
    cout << "Calcular frequência com o tempo [2]" << endl;
    cout << "Calcular frequência sem o tempo [3]" << endl;
    cout << "Sair [0]" << endl;
    cin >> option;

    switch (option) {
    case 1:
        cout << "Calcular a frequência desejada [1]" << endl;
        cout << "Calcular o Duty Cycle [2]" << endl;
        cout << "Calcular a onda quadrada [3]" << endl;
        cout << "Sair [0]" << endl;
        cin >> option;
        switch (option) {
        case 1:
            freq();
            cin >> pausa;
            break;
        }
        break; // Adicione o break aqui para sair do primeiro switch
    case 2:
        break;
    case 3:
        break;
    }
    return 0;
}