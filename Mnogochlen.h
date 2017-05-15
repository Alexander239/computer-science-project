#ifndef __MNOGOCHLEN_H__
#define __MNOGOCHLEN_H__

struct Mnogochlen {
public:
void Nnuli (double mas[100]); //Fill array with zeros//
void Vvod_function (double mas[100] , int n ); //Entering an array//
double vos(double x,int n); //Exponentiation//
double Func1( double mas_x[100] , int nx , double mas_y[100] , int ny , double x , double y);//main function//
void method_Runge_Kutta ( double mas_x[100] , int nx , double mas_y[100] ,int ny , double begin_gap , double end_gap  , double step , double val_begin_gap ); //Runge-Kutta method//
};
#endif // __MNOGOCHLEN_H__
