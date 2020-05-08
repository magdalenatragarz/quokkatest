#include <quokka/assertions/bool/BoolAssertion.hpp>

namespace qu {

	BoolAssertion::BoolAssertion(bool value) : value(value) {
	}

	void BoolAssertion::toBeTrue() const {
		if (!value) {
			std::string msg = "Expected " + boolToString(value) + " to be True";
			throw AssertionException(msg);
		}
	}

	void BoolAssertion::toBeFalse() const {
		if (value) {
			std::string msg = "Expected " + boolToString(value) + " to be False";
			throw AssertionException(msg);
		}
	}

	std::string BoolAssertion::boolToString(bool value) const {
		return value ? "True" : "False";
	}
}