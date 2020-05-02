#pragma once
#include <quokka/assertions/float/IFloatAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class NotFloatAssertion : public IFloatAssertion {
private:
	float value;
public:
	NotFloatAssertion(float value) : value(value) {}
	virtual void toBeAlmostEqualTo(float other) const override;
	virtual void toBeLessThan(float other) const override;
	virtual void toBeGreaterThan(float other) const override;
	virtual void toBeNaN() const override;
	virtual void toBeInfinity() const override;
};