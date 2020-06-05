#include <quokka/assertions/string/NotStringAssertion.hpp>

namespace qu {

	NotStringAssertion::NotStringAssertion(std::string value) : value(value) {
	}

	void NotStringAssertion::toBeEqualTo(std::string other) const {
		if (value == other)
			throw AssertionException("Expected \"" + value + "\" not to be equal to \"" + other +
									 "\"");
	}

	void NotStringAssertion::toContain(std::string substring) const {
		if (Utils::contains(value, substring))
			throw AssertionException("Expected \"" + value + "\" not to contain \"" + substring +
									 "\"");
	}

	void NotStringAssertion::toBeginWith(std::string substring) const {
		if (Utils::startsWith(value, substring))
			throw AssertionException("Expected \"" + value + "\" not to begin with \"" + substring +
									 "\"");
	}

	void NotStringAssertion::toEndWith(std::string substring) const {
		if (Utils::endsWith(value, substring))
			throw AssertionException("Expected \"" + value + "\" not to end with \"" + substring +
									 "\"");
	}

	void NotStringAssertion::toMatch(std::string regex) const {
		bool matches = std::regex_match(value, std::regex(regex));
		if (matches)
			throw AssertionException("Expected \"" + value + "\" not to match regex \"" + regex +
									 "\"");
	}
}
