/*
  Int ("%d"): 32 Bit integer
  Long ("%ld"): 64 bit integer
  Char ("%c"): Character type
  Float ("%f"): 32 bit real value
  Double ("%lf"): 64 bit real value
  */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c;
    cin >> d >> e;
    cout << a << endl << b << endl;
    cout <<  c << endl;
    cout.precision(3);
    cout << fixed << d << endl; 
    cout.precision(9);
    cout << fixed << e;
    return 0;
}