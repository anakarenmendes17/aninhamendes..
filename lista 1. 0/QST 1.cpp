#include <iostream>
using namespace std;

// Função que calcula a soma dos elementos de uma matriz 3x3
int somaMatriz(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[3][3];

    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int resultado = somaMatriz(matriz);
    cout << "\nA soma de todos os elementos da matriz é: " << resultado << endl;

    return 0;
}
