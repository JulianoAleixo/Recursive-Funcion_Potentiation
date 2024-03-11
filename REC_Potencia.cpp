/**************************************************
 *                                                *
 *             Algoritmos Recursivos              *
 *                   Potencia                     *
 *                                                *
 **************************************************
 *                                                *
 *  Autor: Juliano Moreira Aleixo                 *
 *  Disciplina: C03                               *
 *  Professor: Jonas Lopes de Vilas Boas          *
 *  Data: 11/03/2024                              *
 *                                                *
 **************************************************/

#include <iostream>

using namespace std;

int pow(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * pow(a, n - 1);
}

int main() {
    int a, n;
    cin >> a;
    cin >> n;

    int res = pow(a, n);
    cout << res << endl;

    return 0;
}

