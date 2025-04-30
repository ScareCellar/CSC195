#pragma once
#include <string>
namespace mathlib
{
	template<typename T=int>

	class Fraction
	{

	public:
		Fraction(T numerator, T denominator);

		Fraction<T> Add(Fraction<T> fraction_being_added);

		Fraction<T> Subract(Fraction<T> fraction_being_subtracted);
		
		Fraction<T> Multiply(Fraction<T>& fraction_being__multiplied);
		
		Fraction<T> Divide(Fraction<T> fraction_being_divided);
		
		T findGCF(T a, T b);
		
		std::string ToString();

		Fraction<T> Simplify();

		float ToFloat();

	private:
		T m_numerator;
		T m_denominator;
	};
}
