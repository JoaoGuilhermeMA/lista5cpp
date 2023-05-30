#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string frase;

    cout << "Digite uma frase: " << endl;
    getline(cin, frase);

    unordered_map<char, int> ocorrencias;

    for (char c : frase)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            ocorrencias[c]++;
        }
    }

    cout << "A frase é: " << frase << endl;
    for (const auto& pair : ocorrencias)
    {
        cout << pair.first << " aparece " << pair.second << " vez";
        if (pair.second > 1)
            cout << "es";
        cout << endl;
    }
}
