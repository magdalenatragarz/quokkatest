#include <quokka/assertions/string/IStringAssertion.hpp>

namespace qu {

	bool IStringAssertion::endsWith(std::string fullString, std::string suffix) {
		if (fullString.length() >= suffix.length())
			return fullString.compare(fullString.length() - suffix.length(), suffix.length(),
									  suffix) == 0;
		return false;
	}

	bool IStringAssertion::startsWith(std::string fullString, std::string prefix) {
		return strncmp(prefix.c_str(), fullString.c_str(), prefix.length()) == 0;
	}

	bool IStringAssertion::contains(std::string fullString, std::string substring) {
		return fullString.find(substring) != std::string::npos;
	}
}