#include <quokka/assertions/int/NotIntAssertion.hpp>

void NotIntAssertion::toBeEqualTo(int other) const
{
	if (value != other)
		throw AssertionException("Expected " + std::to_string(value) + " not to be equal to " + std::to_string(other));
}

void NotIntAssertion::toBeLessThan(int other) const
{
	if (value >= other)
		throw AssertionException("Expected " + std::to_string(value) + " not to be less than " + std::to_string(other));
}

void NotIntAssertion::toBeGreaterThan(int other) const
{
	if (value <= other)
		throw AssertionException("Expected " + std::to_string(value) + " not to be greater than " + std::to_string(other));
}

void NotIntAssertion::toBeLessOrEqualTo(int other) const
{
	if (value > other)
		throw AssertionException("Expected " + std::to_string(value) + " not to be less or equal to " + std::to_string(other));
}

void NotIntAssertion::toBeGreaterOrEqualTo(int other) const
{
	if (value < other)
		throw AssertionException("Expected " + std::to_string(value) + " not to be greater or equal to " + std::to_string(other));
}
