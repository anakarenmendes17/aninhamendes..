#include <iostream>
using namespace std;

int contarNumero(int matriz[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4];
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    int numero;
    cout << "Digite o número para contar: ";
    cin >> numero;

    cout << "O número " << numero << " aparece "
         << contarNumero(matriz, numero) << " vezes.";
    return 0;
}
