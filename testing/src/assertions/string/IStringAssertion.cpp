#include <quokka/assertions/string/IStringAssertion.hpp>

bool IStringAssertion::endsWith(std::string fullString, std::string suffix)
{
	if (fullString.length() >= suffix.length()) {
		return fullString.compare(fullString.length() - suffix.length(), suffix.length(), suffix) == 0;
	return false;
}

bool IStringAssertion::startsWith(std::string fullString, std::string prefix)
{
	return strncmp(substring.c_str(), value.c_str(), substring.length()) == 0;
}

bool IStringAssertion::constains(std::string fullString, std::string substring)
{
	return strstr(fullString.c_str(), substring.c_str()) != nullptr;
}