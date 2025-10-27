#include <iostream>
using namespace std;

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for (int j = 0; j < 5; j++)
        soma += matriz[linha][j];
    return soma;
}

int main() {
    int matriz[5][5];
    cout << "Digite os elementos da matriz 5x5:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> matriz[i][j];

    int linha;
    cout << "Digite o número da linha (0 a 4): ";
    cin >> linha;

    cout << "Soma da linha " << linha << ": " << somaLinha(matriz, linha);
    return 0;
}
