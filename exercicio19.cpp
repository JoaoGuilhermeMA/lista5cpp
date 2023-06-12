#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada.
Entrada: “uma frase qualquer”
Saída: “reuqlauq esarf amu”
*/
int main(){
    string A;

    cout << "Digite uma frase qualquer" << endl;
    getline(cin, A);

    cout << "Frase espelhada: " << endl;
    for(int i = A.length(); i >= 0; i--){
        cout << A[i];
    }
    cout << endl;
}