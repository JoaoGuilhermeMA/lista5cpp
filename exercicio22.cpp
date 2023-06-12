#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e a frase contendo só
as palavras em “posições ímpares” (1ª palavra, 3ª palavra, 5ª palavra, ...).
Entrada: eu gosto de roupa azul
Saída: eu de azul
*/
int main(){
    string frase, frase2;
    int inicio = 0;
    bool impar = true;
    
    cout << "Digite a string" << endl;
    getline(cin, frase);

    frase += " ";
    cout << "Frase completa: " << frase << endl;

    for (int i = 0; i < frase.length(); i++)
    {
        if(frase[i] == ' '){
            if(impar){
                frase2 += frase.substr(inicio, i-inicio+1);
            }
            inicio = i+1;
            impar = !impar;
        }
    }

     cout << "A frase alterada: " << frase2 << endl;
}