#include <quokka/assertions/float/NotFloatAssertion.hpp>

namespace qu {

	NotFloatAssertion::NotFloatAssertion(float value) : value(value) {
	}

	void NotFloatAssertion::toBeAlmostEqualTo(float other) const {
		bool isAlmostEqual = (other < other * 1.00000001) && (other > other * 0.99999999);
		if (isAlmostEqual) {
			std::string message = "Expected " + std::to_string(value) +
								  " not to be almost equal to " + std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotFloatAssertion::toBeLessThan(float other) const {
		if (value < other) {
			std::string message = "Expected " + std::to_string(value) + " not to be less than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotFloatAssertion::toBeGreaterThan(float other) const {
		if (value > other) {
			std::string message = "Expected " + std::to_string(value) + " not to be greater than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotFloatAssertion::toBeNaN() const {
		if (std::isnan(value)) {
			std::string message = "Expected " + std::to_string(value) + " not to be NaN ";
			throw AssertionException(message);
		}
	}

	void NotFloatAssertion::toBeInfinity() const {
		if (std::isinf(value)) {
			std::string message = "Expected " + std::to_string(value) + " not to be NaN ";
			throw AssertionException(message);
		}
	}
}