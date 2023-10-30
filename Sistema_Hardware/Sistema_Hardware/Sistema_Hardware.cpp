
#include <iostream>
#include <iomanip>
#include<locale.h>
using namespace std;
//Programa para calculo de componetes para criação de hardwares






// ci-555 astavel
//calcular o valor do capacitor para obter a frequencia desejada
void freq() {
    float frequencia;
    float capacitor;
    float aux;

    system("cls");
    cout << "==============Encontrar a frequência desejada==============" << endl;
    cout << "Por favor informe a frequência (Hz) que você deseja encontrar" << endl;
    cin >> frequencia;
    aux = 1.44 / frequencia;
    capacitor = aux / (10 + 2 * 10) * 1000; 
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "Os valores dos componentes serão" << endl;
    cout << left << setw(10) << "Resistor 1 " << setw(10) << "Resistor 2 " << endl;
    cout << left << setw(10) << "10 Ohms " << setw(10) << "10 Ohms  " << endl;
    cout << "Capacitor: " << capacitor << " µF" << endl;
}

//calcular o valor do capacitor para obter o nivel alto desejado
void calcDutyCicle() {
    float na, C1;

    system("cls");
    cout << "==============Calcular Capacitor a partir do Tempo de Nível Alto==============" << endl;
    cout << "Informe o tempo de nível alto desejado (segundos): ";
    cin >> na;
    C1 = na / (0.693 * (10 + 10));
    C1 = C1 * 100;
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "Os valores dos componentes serão" << endl;
    cout << left << setw(10) << "Resistor 1 " << setw(10) << "Resistor 2 " << endl;
    cout << left << setw(10) << "10 Ohms " << setw(10) << "10 Ohms  " << endl;
    cout << "O valor do capacitor (C1) necessário é: " << C1 << " µF" <<endl;
}

//calcular o valor do capacitor para obter a frequencia 
void calctempofrequencia() {
    system("cls");
float tempo;
float frequencia; 
    cout << "Informe o valor do tempo em milisegundos" << endl;
    cin >> tempo;
    tempo = tempo / 1000;
    frequencia = (1 / tempo);
    cout << "-------------------------------------" << endl;
    cout << "A frequencia e de: " << frequencia << " Hz" << endl;
    return;
}

//calcular a frequencia desejada passando o r1,r2 e capacitor
void calcfreque() {
    system("cls");
    float resistor1;
    float resistor2; 
    float c;
    float total;
    float auxiliar;
    float frequencia;
    cout << "Informe o valor do resistor 1 em Ohms" << endl;
    cin >> resistor1;
    cout << "Informe o valor do resistor 2 em Ohms" << endl;
    cin >> resistor2;
    cout << "Informe o valor do capacitor em  µF" << endl;
    cin >> c;

    total = resistor1 + (2 * resistor2);
    auxiliar = total * c;
    frequencia = (1.44 / auxiliar);
    frequencia = frequencia * 1000;
    cout << " ==============================================================" << endl;
    cout << "A frequencia e de: " << frequencia << " Hz" << endl;
    return;
}
//fim ci-555 astavael

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int option = NULL;
    int pausa;

    cout << "PROGRAMA CALCULOS DE COMPONENTES ELETRÔNICOS PARA DESENVOLVIMENTO DE HARDWARE" << endl;
    cout << "=============================================================================" << endl;
    cout << "Calcular componentes para o circuito ci-555 astável [1]" << endl;
    cout << "Calcular frequência utilizando o período [2]" << endl;
    cout << "Sair [0]" << endl;
    cin >> option;


    switch (option) {
    case 1:
        cout << endl;
        cout << "=============================================================================" << endl;
        cout << "PROGRAMA CALCULOS DE COMPONENTES CI-555 ASTÁVEL" << endl;
        cout << "Calcular a frequência desejada [1]" << endl;
        cout << "Calcular o Duty Cycle [2]" << endl;
        cout << "Calcular a onda quadrada [3]" << endl;
        cout << "Calcular frequência passando todos os componentes [4]" << endl;
        cout << "Sair [0]" << endl;
        cin >> option;
        switch (option) {
        case 1:
            freq();
            cin >> pausa;
            break;
        case 2:
            calcDutyCicle();
                break;
        case 3:
            cout << "Para ondas quadradas utilizar valores abaixo de 10 k Ohms e 10 µF" << endl;
        case 4:
            calcfreque();
                break;
        }
        break; 
    case 2:
        calctempofrequencia();
            cin >> pausa;
        break;
    
    }
    return 0;
}