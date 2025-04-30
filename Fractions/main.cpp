#pragma once
#include <iostream>
#include <vector>
#include "string"
#include "fraction.h"

using namespace mathlib;

int main()
{
    Fraction<> fraction1{ 18, 5 };
    std::cout << fraction1.ToString() << std::endl;

    Fraction<> fraction2{ 15, 6 };
    std::cout << fraction2.ToString() << std::endl;
    std::cout << "simplify: " << fraction2.Simplify().ToString() << std::endl;

    std::cout << "Comparing\n";


    std::cout << fraction1.ToString() << " > " << fraction2.ToString() << " result: " << (fraction1.ToFloat() > fraction2.ToFloat()) << std::endl;

    std::cout << "Multiplying\n";

    std::cout << fraction1.ToString() << " * " << fraction2.ToString() << " result: " << (fraction1.Multiply(fraction2).ToString()) << std::endl;
    std::cout << fraction1.ToString() << " + " << fraction2.ToString() << " result: " << (fraction1.Add(fraction2).ToString()) << std::endl;
    std::cout << fraction1.ToString() << " - " << fraction2.ToString() << " result: " << (fraction1.Subract(fraction2).ToString()) << std::endl;
    std::cout << fraction1.ToString() << " / " << fraction2.ToString() << " result: " << (fraction1.Divide(fraction2).ToString()) << std::endl;

    int numerator;
    int denominator;
    std::cout << "Please enter a numerator" << std::endl;
    std::cin >> numerator;
    std::cout << "Please enter a numerator" << std::endl;
    std::cin >> denominator;
    Fraction<int> fraction3(numerator, denominator);
    std::cout << fraction3.ToString() << std::endl;
    std::cout << fraction3.ToFloat() << std::endl;
}
