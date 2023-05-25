#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V. 
*/
int main()
{
    int matriz[6][6], valorA, vetor[36], cont=0;
    
    cout << "Digite o valorA: " << endl;
    cin >> valorA;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriz[i][j];
            vetor[cont] = matriz[i][j];
            cont++;
        }
    }

    for (int i = 0; i < 36; i++) {
        cout << vetor[i] << ", ";
    }
    
    cout << endl;
    
}
