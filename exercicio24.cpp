#include <iostream>

using namespace std;
/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na
qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo
de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim
por diante. Elabore um algoritmo que utilize o Código de César (n posições, sendo n informado pelo usuário),
entre com uma string e escreva a string codificada.
Exemplo: para n=3, a string “a ligeira raposa marrom saltou sobre o cachorro cansado” seria codificada para
“D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/
int main()
{
    string texto;
    int n;

    cout << "Digite a frase: " << endl;
    getline(cin, texto);

    cout << "Digite o numero de posicoes: " << endl;
    cin >> n;

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] != ' ')
        {
            texto[i] = texto[i] + n;
            texto[i] = toupper(texto[i]);
        }
    }

    cout << texto << endl;
}