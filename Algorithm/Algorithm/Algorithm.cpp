/*
   Copyright Mager 2023
   All rights reserved lmao
*/
#include <iostream>
unsigned long simple_exp(int a, int b) // simple pow for the lazy 
{
    return pow(a, b);
}
unsigned long old_exp(int a, int b) // this is uneffective a^8 = a*a*...*a 8 times, too slow but simple
{
    int old_a = a;
    for (int i = 1; i < b; i++)
        a *= old_a;
    return a;
}
unsigned long new_exp(int a, int b) // more effective a^8 = ((a^2)^2)^2, faster than pow
{
    int d = 1;
    while (b != 0)
    {
        if ((b & 1) != 0)
            d *= a;
        a *= a;
        b >>= 1;
    }
    return d;
}
int main()
{
    int a, b;
    std::cout << "Type number and then exponent:\n";
    std::cin >> a >> b;
    std::cout << "Result is:" << new_exp(a, b) << std::endl;
}
