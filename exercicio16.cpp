#include <iostream>
#include <string>
using namespace std;
int main()
{
    string frase, palavra;
    bool encontrada = false;
    int i = 0, j;
    cout << "Digite uma frase: ";
    getline(cin, frase);
    cout << "Digite uma palavra: ";
    getline(cin, palavra);
    while (i < frase.size() - palavra.size() + 1 && !encontrada)
    {
        j = 0;
        while (j < palavra.size() && palavra[j] == frase[i + j])
        {
            j++;
        }
        if (j == palavra.size())
        {
            encontrada = true;
        }
        i++;
    }
    if (encontrada)
    {
        cout << "A palavra \"" << palavra << "\" está contida na frase \"" << frase << "\"." << endl;
    }
    else
    {
        cout << "A palavra \"" << palavra << "\" não está contida na frase \"" << frase << "\"." << endl;
    }
    return 0;
}