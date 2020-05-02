#pragma once

class IDoubleAssertion {
public:
	virtual void toBeAlmostEqualTo(double other) const = 0;
	virtual void toBeLessThan(double other) const = 0;
	virtual void toBeGreaterThan(double other) const = 0;
	virtual void toBeNaN() const = 0;
	virtual void toBeInfinity() const = 0;
};