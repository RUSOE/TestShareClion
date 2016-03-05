/*
 * Created by Alfredo Aguiar Arce
 * Ingenieria en mecatronica 2016
 * */
#include <iostream>

using namespace std;

bool pairornot(int i) {
    return i%2 == 0;
}

bool pairornot(int i);

int main() {
    int d;
    cout << "Hello, World!" << endl;
    cin>>d;
    cout <<pairornot(d);
    return 0;
}