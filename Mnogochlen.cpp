#include "Mnogochlen.h"
#include <iostream>
using namespace std;

//Fill array with zeros//
void Mnogochlen::Nnuli (double mas[100]){      
    for ( int i = 0 ; i < 100 ; i++ ){
        mas[i] = 0;
    }
}
//Entering an array//
void Mnogochlen::Vvod_function (double mas[100] , int n ){        
    for( int i = n ; i >= 0 ; i-- ){
        double a;
        cout << "Enter the coefficient of the degree " << i << ":";
        cin >> a;
        mas [i] = a;
    }

}
//Exponentiation//
double Mnogochlen::vos(double x,int n)    
{

 if (x==0)
    return 0;

  if (n==0)
    return 1;

 if (n==1)
    return x;

  if (n%2==0)
    return vos(x,n/2)*vos(x,n/2);

 else return vos(x,n/2)*vos(x,n/2)*x;

}
//main function//
double Mnogochlen::Func1( double mas_x[100] , int nx , double mas_y[100] , int ny , double x , double y){   
double otv = 0;
    for ( int i = 0 ; i <= nx ; i++  ){
        otv = otv + vos(x,i) * mas_x[i];
    }
    for ( int j = 0 ; j <= ny ; j++ ){
        otv = otv + vos(y,j) * mas_y[j];
    }
        return otv;
}

//Runge-Kutta method//
void Mnogochlen::method_Runge_Kutta ( double mas_x[100] , int nx , double mas_y[100] ,int ny , double begin_gap , double end_gap  , double step , double val_begin_gap ){

double amount_gaps = ( end_gap - begin_gap ) / step;

double X[(int)amount_gaps];
double Y1[(int)amount_gaps];
double Y2[(int)amount_gaps];
double Y3[(int)amount_gaps];
double Y4[(int)amount_gaps];
double Y[(int)amount_gaps];

X[0] = begin_gap;
Y[0] = val_begin_gap;
    for( int i = 1 ; i <= amount_gaps ; i++ ){
                X[i] = begin_gap + i * step;
                Y1[i] = step * Func1(mas_x , nx , mas_y , ny , X[i-1] , Y[i-1] );
                Y2[i] = step * Func1(mas_x , nx , mas_y , ny , X[i-1] +  step /2.0 , Y[i-1] + Y1[i]/2);
                Y3[i] = step * Func1(mas_x , nx , mas_y , ny , X[i-1] +  step /2.0 , Y[i-1] + Y2[i]/2);
                Y4[i] = step * Func1(mas_x , nx , mas_y , ny , X[i-1] +  step,Y[i-1] + Y3[i]);
                Y[i] = Y[i-1] + ( Y1[i] + 2*Y2[i] + 2*Y3[i] + Y4[i]) / 6;
        }
    for ( int i = 0 ; i <= amount_gaps ; i++ ){
        cout << "X[" << i << "]=" << X[i] <<"   " << "Y[" << i << "]=" << Y[i];
        cout << endl;
    }

}

