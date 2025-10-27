#include <iostream>
using namespace std;

int main() {
    int vetor[10], numero;
    bool encontrado = false;

    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; i++)
        cin >> vetor[i];

    cout << "Digite o numero a procurar: ";
    cin >> numero;

    for (int i = 0; i < 10; i++)
        if (vetor[i] == numero)
            encontrado = true;

    if (encontrado)
        cout << "Numero encontrado no vetor!\n";
    else
        cout << "Numero nao encontrado.\n";
    return 0;
}
