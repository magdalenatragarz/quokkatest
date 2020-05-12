#include <quokka/assertions/double/DoubleAssertion.hpp>

namespace qu {

	DoubleAssertion::DoubleAssertion(double value) : value(value) {
	}

	void DoubleAssertion::toBeAlmostEqualTo(double other) const {
		bool isAlmostEqual = (other < other * 1.00000001) && (other > other * 0.99999999);
		if (!isAlmostEqual) {
			std::string message = "Expected " + std::to_string(value) + " to be almost equal to " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void DoubleAssertion::toBeLessThan(double other) const {
		if (value >= other) {
			std::string message =
				"Expected " + std::to_string(value) + " to be less than " + std::to_string(other);
			throw AssertionException(message);
		}
	}

	void DoubleAssertion::toBeGreaterThan(double other) const {
		if (value <= other) {
			std::string message = "Expected " + std::to_string(value) + " to be greater than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void DoubleAssertion::toBeNaN() const {
		if (!std::isnan(value)) {
			std::string message = "Expected " + std::to_string(value) + " to be NaN ";
			throw AssertionException(message);
		}
	}

	void DoubleAssertion::toBeInfinity() const {
		if (!std::isinf(value)) {
			std::string message = "Expected " + std::to_string(value) + " to be NaN ";
			throw AssertionException(message);
		}
	}
}