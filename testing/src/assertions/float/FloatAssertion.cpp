#include <quokka/assertions/float/FloatAssertion.hpp>

namespace qu {

	FloatAssertion::FloatAssertion(float value) : value(value) {
	}

	NotFloatAssertion FloatAssertion::not() const {
		return NotFloatAssertion(value);
	}

	void FloatAssertion::toBeAlmostEqualTo(float other) const {
		bool isAlmostEqual = other < other * 1.00000001 && other > other * 0.99999999;
		if (isAlmostEqual) {
			std::string message = "Expected " + std::to_string(value) + " to be almost equal to " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void FloatAssertion::toBeLessThan(float other) const {
		if (value >= other) {
			std::string message =
				"Expected " + std::to_string(value) + " to be less than " + std::to_string(other);
			throw AssertionException(message);
		}
	}

	void FloatAssertion::toBeGreaterThan(float other) const {
		if (value <= other) {
			std::string message = "Expected " + std::to_string(value) + " to be greater than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void FloatAssertion::toBeNaN() const {
		if (!std::isnan(value)) {
			std::string message = "Expected " + std::to_string(value) + " to be NaN ";
			throw AssertionException(message);
		}
	}

	void FloatAssertion::toBeInfinity() const {
		if (!std::isinf(value)) {
			std::string message = "Expected " + std::to_string(value) + " to be NaN ";
			throw AssertionException(message);
		}
	}
}