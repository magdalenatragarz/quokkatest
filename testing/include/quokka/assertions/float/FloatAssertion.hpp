#pragma once
#include <quokka/assertions/float/IFloatAssertion.hpp>
#include <quokka/assertions/float/NotFloatAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class FloatAssertion : public IFloatAssertion {
private:
	float value;
public:
	FloatAssertion(float value) : value(value) {}
	NotFloatAssertion not() const;
	virtual void toBeAlmostEqualTo(float other) const override;
	virtual void toBeLessThan(float other) const override;
	virtual void toBeGreaterThan(float other) const override;
	virtual void toBeNaN() const override;
	virtual void toBeInfinity() const override;
};