#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[10];

    cout << "Digite 5 numeros para o vetor A:\n";
    for (int i = 0; i < 5; i++)
        cin >> A[i];

    cout << "Digite 5 numeros para o vetor B:\n";
    for (int i = 0; i < 5; i++)
        cin >> B[i];

    // Intercala
    int k = 0;
    for (int i = 0; i < 5; i++) {
        C[k++] = A[i];
        C[k++] = B[i];
    }

    cout << "Vetor intercalado: ";
    for (int i = 0; i < 10; i++)
        cout << C[i] << " ";
    cout << endl;

    return 0;
}
