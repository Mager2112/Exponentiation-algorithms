/*
   Copyright Mager 2023
   All rights reserved lmao
*/
#include <iostream>
unsigned long old_grade(int a, int b) // this is uneffective
{
    int old_a = a;
    for (int i = 1; i < b; i++)
        a *= old_a;
    return a;
}
int main()
{
    int a, b;
    std::cout << "Type number and then grade:\n";
    std::cin >> a >> b;
    std::cout << "Result is:" << old_grade(a, b) << std::endl;
}
