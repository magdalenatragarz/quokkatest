#pragma once
#include <quokka/assertions/string/IStringAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class NotStringAssertion : public IStringAssertion {
private:
	std::string value;
public:
	NotStringAssertion(std::string value) : value(value) { }
	virtual void toBeEqualTo(std::string other) const override;
	virtual void toContain(std::string substring) const override;
	virtual void toBeginWith(std::string substring) const override;
	virtual void toEndWith(std::string substring) const override;
	virtual void toMatch(std::string regex) const override;
};