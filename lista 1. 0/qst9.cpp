#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];

    // Inverter linhas e colunas
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3 / 2; j++)
            swap(matriz[i][j], matriz[i][2 - j]);

    cout << "Matriz invertida:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
    return 0;
}
