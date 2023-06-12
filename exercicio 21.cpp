#include <iostream>

using namespace std;
/*
 Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto da primeira
string para a segunda em letras maiúsculas se a primeira letra da primeira string for minúscula ou em letras
minúsculas se a primeira letra da primeira string for maiúscula. Imprima no final o conteúdo das duas strings.
*/
int main()
{
    string A, B;

    cout << "Digite a primeira string" << endl;
    getline(cin, A);
    B=A;

    if (isupper(A[0]))
    {
        for (int i = 0; i < A.length(); i++)
        {
            B[i] = toupper(A[i]);
            
        }
    }
    else
    {
        for (int i = 0; i < A.length(); i++)
        {
            B[i] = tolower(A[i]);
        }
    }

    cout << "A string digitada foi: " << A << endl;
    cout << "A string digitada agora e:  " << B << endl;
}