#include "Mnogochlen.h"
#include <iostream>
using namespace std;
//interface//
int main() {
Mnogochlen mnog_x;
double mas_x[100];
mnog_x.Nnuli(mas_x);


Mnogochlen mnog_y;
double mas_y[100];
mnog_y.Nnuli(mas_y);

int nx;
cout << "Enter the maximum degree of the polynomial in x:";
cin >> nx;
mnog_x.Vvod_function(mas_x,nx);

int ny;
cout << "Enter the maximum degree of the polynomial in y:";
cin >> ny;
mnog_y.Vvod_function(mas_y,ny);


double a;
cout << endl << "Enter the beginning of the gap:";
cin >> a;


double b;
cout << endl << "Enter the end of the gap:";
cin >> b;

double step;
cout << endl << "Enter the step of differentiation:";
cin >> step;

double value;
cout << endl << "Enter a value at the beginning of the gap:";
cin >> value;

Mnogochlen mnog_kon;
mnog_kon.method_Runge_Kutta( mas_x,nx,mas_y,ny, a , b , step , value);

return 0;
}
