#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int contPar = 0, contImpar = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num;
            bool numeroValido = false;

            while (!numeroValido)
            {
                cout << "Digite um número inteiro positivo: ";
                cin >> num;

                if (num > 0)
                {
                    if ((num % 2 == 0 && i % 2 == 0) || (num % 2 != 0 && i % 2 != 0))
                    {
                        numeroValido = true;
                    }
                    else
                    {
                        cout << "O número deve ser par e a linha deve ser par ou o número deve ser ímpar e a linha deve ser ímpar." << endl;
                    }
                }
                else
                {
                    cout << "O número deve ser positivo." << endl;
                }
            }

            matriz[i][j] = num;

            if (num % 2 == 0)
            {
                contPar++;
            }
            else
            {
                contImpar++;
            }
        }
    }

    cout << "\nMatriz preenchida:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
