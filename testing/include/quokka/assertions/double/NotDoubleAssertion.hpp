#pragma once
#include <quokka/assertions/double/IDoubleAssetrion.hpp>
#include <quokka/testing/AssertionException.hpp>

class NotDoubleAssertion : public IDoubleAssertion {
private:
	double value;
public:
	NotDoubleAssertion(double value) : value(value) {}
	virtual void toBeAlmostEqualTo(double other) const override;
	virtual void toBeLessThan(double other) const override;
	virtual void toBeGreaterThan(double other) const override;
	virtual void toBeNaN() const override;
	virtual void toBeInfinity() const override;
};