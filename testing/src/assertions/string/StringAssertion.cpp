#include <quokka/assertions/string/StringAssertion.hpp>

void StringAssertion::toBeEqualTo(std::string other) const
{
	if(value != other)
		throw AssertionException("Expected \"" + value + "\" to be equal to \"" + other + "\"");
}

void StringAssertion::toContain(std::string substring) const
{
	if (!constains(value, substring))
		throw AssertionException("Expected \"" + value + "\" to contain \"" + substring + "\"");
}

void StringAssertion::toBeginWith(std::string substring) const
{
	if (!startsWith(value, substring))
		throw AssertionException("Expected \"" + value + "\" to begin with \"" + substring + "\"");
}

void StringAssertion::toEndWith(std::string substring) const
{
	if (!endsWith(value, substring))
		throw AssertionException("Expected \"" + value + "\" to end with \"" + substring + "\"");
}

void StringAssertion::toMatch(std::string regex) const
{
	bool matches = std::regex_match(value, std::regex(regex));
	if(!matches)
		throw AssertionException("Expected \"" + value + "\" to match regex \"" + regex + "\"");
}
