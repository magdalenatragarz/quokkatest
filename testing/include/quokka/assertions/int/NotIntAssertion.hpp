#pragma once
#include <quokka/assertions/int/IIntAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class NotIntAssertion : public IIntAssertion {
private:
	int value;
public:
	NotIntAssertion(int value) : value(value) { }
	virtual void toBeEqualTo(int other) const override;
	virtual void toBeLessThan(int other) const override;
	virtual void toBeGreaterThan(int other) const override;
	virtual void toBeLessOrEqualTo(int other) const override;
	virtual void toBeGreaterOrEqualTo(int other) const override;
};