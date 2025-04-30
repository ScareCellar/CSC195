#include <iostream>
#include <vector>
#include "string"
#include "fraction.h"
using namespace mathlib;

template<typename T>
mathlib::Fraction<T>::Fraction(T numerator, T denominator)
{
	m_numerator = numerator;
	if (denominator != 0)
	{
		m_denominator = denominator;
	}
}

//template<typename T>
Fraction<> mathlib::Fraction<>::Add(Fraction<> fraction_being_added)
{
	int gcf = findGCF(m_denominator, fraction_being_added.m_denominator);
	int final_numerator = (m_numerator * gcf) + (fraction_being_added.m_numerator * gcf);

	Fraction<> fraction{ final_numerator, gcf };
	return fraction;
}

//template<typename T>
Fraction<> mathlib::Fraction<>::Subract(Fraction<> fraction_being_subtracted)
{
	int gcf = findGCF(fraction_being_subtracted.m_denominator, m_denominator);
	int final_numerator = (m_numerator * gcf) - (fraction_being_subtracted.m_numerator * gcf);

	Fraction<> fraction{ final_numerator, gcf };
	return fraction;
}

//template<typename T>
Fraction<> mathlib::Fraction<>::Multiply(Fraction<>& fraction_being__multiplied)
{
	/*T numerator = m_numerator * fraction_being__multiplied.m_numerator;
	T denominator = m_denominator * fraction_being__multiplied.m_denominator;*/

	Fraction fraction{ m_numerator * fraction_being__multiplied.m_numerator, m_denominator * fraction_being__multiplied.m_denominator };
	return fraction;
}

//template<typename T>
Fraction<> mathlib::Fraction<>::Divide(Fraction<> fraction_being_divided)
{
	/*T numerator = m_numerator * fraction_being_divided.m_denominator;
	T denominator = m_denominator * fraction_being_divided.m_numerator;*/

	Fraction fraction{ m_numerator * fraction_being_divided.m_denominator, m_denominator * fraction_being_divided.m_numerator };
	return fraction;
}

template<typename T>
T mathlib::Fraction<T>::findGCF(T a, T b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

//template<typename T>
std::string mathlib::Fraction<>::ToString()
{
	std::string numeratorS = std::to_string(m_numerator);
	std::string denominatorS = std::to_string(m_denominator);
	std::string ReturnValue = numeratorS + "/" + denominatorS;
	return ReturnValue;
}

//template<typename T>
Fraction<> mathlib::Fraction<>::Simplify()
{
	int gcf = findGCF(m_numerator, m_denominator);

	int simplifiedNumerator = m_numerator / gcf;
	int simplifiedDenominator = m_denominator / gcf;

	if (m_denominator < 0)
	{
		simplifiedNumerator = -simplifiedNumerator;
		simplifiedDenominator = -simplifiedDenominator;
	}

	return Fraction<>{simplifiedNumerator, simplifiedDenominator};
}

//template<typename T>
float mathlib::Fraction<>::ToFloat()
{
	float numeratorF = static_cast<float>(m_numerator);
	float denominatorF = static_cast<float>(m_denominator);
	float returnValue = numeratorF / denominatorF;
	return returnValue;
}