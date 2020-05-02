#pragma once
#include <quokka/assertions/string/IStringAssertion.hpp>
#include <quokka/assertions/string/NotStringAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class StringAssertion : public IStringAssertion {
private:
	std::string value;
public:
	StringAssertion(std::string value) : value(value) { }
	NotStringAssertion not() const;
	virtual void toBeEqualTo(std::string other) const override;
	virtual void toContain(std::string substring) const override;
	virtual void toBeginWith(std::string substring) const override;
	virtual void toEndWith(std::string substring) const override;
	virtual void toMatch(std::string regex) const override;
};