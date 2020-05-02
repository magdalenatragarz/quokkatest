#pragma once
#include <string>
#include <regex>

class IStringAssertion {
protected:
	static bool endsWith(std::string fullString, std::string suffix);
	static bool startsWith(std::string fullString, std::string prefix);
	static bool constains(std::string fullString, std::string substring);
public:
	virtual void toBeEqualTo(std::string other) const = 0;
	virtual void toContain(std::string substring) const = 0;
	virtual void toBeginWith(std::string substring) const = 0;
	virtual void toEndWith(std::string substring) const = 0;
	virtual void toMatch(std::string regex) const = 0;

};