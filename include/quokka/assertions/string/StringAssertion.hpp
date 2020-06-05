#pragma once

#include <quokka/assertions/string/IStringAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

namespace qu {
	class StringAssertion : public IStringAssertion {
	public:
		explicit StringAssertion(std::string value);
		virtual void toBeEqualTo(std::string other) const override;
		virtual void toContain(std::string substring) const override;
		virtual void toBeginWith(std::string substring) const override;
		virtual void toEndWith(std::string substring) const override;
		virtual void toMatch(std::string regex) const override;

	private:
		std::string value;
	};
}