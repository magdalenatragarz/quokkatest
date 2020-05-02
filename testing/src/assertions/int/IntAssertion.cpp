#include <quokka/assertions/int/IntAssertion.hpp>

NotIntAssertion IntAssertion::not() const
{
	return NotIntAssertion(value);
}

void IntAssertion::toBeEqualTo(int other) const
{
	if (value != other)
		throw AssertionException("Expected " + std::to_string(value) + " to be equal to " + std::to_string(other));
}

void IntAssertion::toBeLessThan(int other) const
{
	if (value >= other)
		throw AssertionException("Expected " + std::to_string(value) + " to be less than " + std::to_string(other));
}

void IntAssertion::toBeGreaterThan(int other) const
{
	if (value <= other)
		throw AssertionException("Expected " + std::to_string(value) + " to be greater than " + std::to_string(other));
}

void IntAssertion::toBeLessOrEqualTo(int other) const
{
	if (value > other)
		throw AssertionException("Expected " + std::to_string(value) + " to be less or equal to " + std::to_string(other));
}

void IntAssertion::toBeGreaterOrEqualTo(int other) const
{
	if (value < other)
		throw AssertionException("Expected " + std::to_string(value) + " to be greater or equal to " + std::to_string(other));
}
