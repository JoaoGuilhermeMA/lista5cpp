#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C.
Entradas: “frase 1” e “outra frase qualquer”
Saída: “frase 1 outra frase qualquer”
*/
int main(){
    string A, B, C;

    cout << "Digite a string A" << endl;
    getline(cin, A);
    cout << "Digite a string B" << endl;
    getline(cin, B);

    C = A + " " + B;
    
    cout << C << endl;
}