#pragma once

#include <quokka/testing/AssertionException.hpp>
#include <string>

namespace qu {
	class BoolAssertion {
	public:
		explicit BoolAssertion(bool value);
		void toBeTrue() const;
		void toBeFalse() const;

	private:
		bool value;
		std::string boolToString(bool value) const;
	};
}
