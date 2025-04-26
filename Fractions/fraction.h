#pragma once
namespace mathlib
{
	class Fraction
	{
		unsigned int numerator;
		unsigned int denominator;

		Fraction(unsigned int numerator, unsigned int denominator)
		{
			this->numerator = numerator;
			if (denominator != 0)
			{
				this->denominator = denominator;
			}

		}

		float Add(Fraction* fraction_being_added)
		{
			float fraction1 = this->numerator / this->denominator;
			float fraction2 = fraction_being_added->numerator / fraction_being_added->denominator;

			return fraction1 + fraction2;
		}

	};
}
