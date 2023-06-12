#include <iostream>

using namespace std;
/*
Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o último nome e o
1º nome na seguinte forma: último nome, 1º nome.
Entrada: Ana Fernandes Oliveira
Saída: Oliveira, Ana
*/
int main(){
    string nome, ultimoNome, primeiroNome;

    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome);

    ultimoNome = nome.substr(nome.find_last_of(" ") + 1);
    primeiroNome = nome.substr(0, nome.find_first_of(" "));

    cout << ultimoNome << ", " << primeiroNome << endl;
}