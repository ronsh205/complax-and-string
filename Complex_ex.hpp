// #pragma once
#include <iostream>
using namespace std;
class Complex_class
{
private:
    double re, im;

public:
    Complex_class();
   // ~Complex_class();
    int set_parm(double num1, double num2);
    int get_real() const { return re; };
    void display();



};
