//using void function/ non value returning

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, int exponent)

{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}


void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << ".\n" << std::endl;
}



int main()

{
    double base;
    int exponent;
    cout << "what is the base?: ";
    cin >> base;
    cout << "what is the exponent?: ";
    cin >> exponent;
    print_pow(base, exponent);


    return 0;
}

float power(float base, int exponent) //definition

{
    return 0.0;
}
