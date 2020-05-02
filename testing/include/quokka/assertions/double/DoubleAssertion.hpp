#pragma once
#include <quokka/assertions/double/IDoubleAssetrion.hpp>
#include <quokka/assertions/double/NotDoubleAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class DoubleAssertion : public IDoubleAssertion {
private:
	double value;
public:
	DoubleAssertion(double value) : value(value) {}
	NotDoubleAssertion not() const;
	virtual void toBeAlmostEqualTo(double other) const override;
	virtual void toBeLessThan(double other) const override;
	virtual void toBeGreaterThan(double other) const override;
	virtual void toBeNaN() const override;
	virtual void toBeInfinity() const override;
};