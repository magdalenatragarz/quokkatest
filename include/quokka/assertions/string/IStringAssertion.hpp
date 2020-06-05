#pragma once

#include <quokka/utils/Utils.hpp>
#include <regex>
#include <string>

namespace qu {
	class IStringAssertion {
	public:
		virtual void toBeEqualTo(std::string other) const = 0;
		virtual void toContain(std::string substring) const = 0;
		virtual void toBeginWith(std::string substring) const = 0;
		virtual void toEndWith(std::string substring) const = 0;
		virtual void toMatch(std::string regex) const = 0;
	};
}