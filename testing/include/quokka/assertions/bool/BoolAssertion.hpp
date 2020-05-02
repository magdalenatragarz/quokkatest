#pragma once
#include <string>
#include <quokka/testing/AssertionException.hpp>

class BoolAssertion {
private:
	bool value;
	std::string boolToString(bool value) const;

public:
	BoolAssertion(bool value) : value(value) {};
	void toBeTrue() const;
	void toBeFalse() const;
};