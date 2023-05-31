/*Escreva um algoritmo que leia uma matriz M(5,5) e multiplique todos os 5 elementos de cada uma das
5 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada.*/

#include <iostream>
using namespace std;

int main(){
    const int t1=5, t2=5;
    int m[t1][t2], maiorElemento=0;

    for(int i = 0; i < t1; i++){
        for(int j = 0; j < t2; j++){
            cout << " elementos da matriz["<< i <<"]["<< j <<"]: ";
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < t1; i++){
        for (int j = 0; j < t2; j++)
        {
            if (m[i][j] > maiorElemento)
            {
                maiorElemento = m[i][j];
            }
        }

        for (int j = 0; j < t2; j++)
        {
            m[i][j] *= maiorElemento;
        }

        maiorElemento = 0;
    }

    for(int i = 0; i < t1; i++){
        for(int j = 0; j < t2; j++){
            cout << m[i][j] << " ";        
        }
        cout<< "\n";
    }
}