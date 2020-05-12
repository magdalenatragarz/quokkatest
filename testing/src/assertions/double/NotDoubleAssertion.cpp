#include <quokka/assertions/double/NotDoubleAssertion.hpp>

namespace qu {

	NotDoubleAssertion::NotDoubleAssertion(double value) : value(value) {
	}

	void NotDoubleAssertion::toBeAlmostEqualTo(double other) const {
		bool isAlmostEqual = other < other * 1.00000001 && other > other * 0.99999999;
		if (!isAlmostEqual) {
			std::string message = "Expected " + std::to_string(value) +
								  " not to be almost equal to " + std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotDoubleAssertion::toBeLessThan(double other) const {
		if (value < other) {
			std::string message = "Expected " + std::to_string(value) + " not to be less than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotDoubleAssertion::toBeGreaterThan(double other) const {
		if (value > other) {
			std::string message = "Expected " + std::to_string(value) + " not to be greater than " +
								  std::to_string(other);
			throw AssertionException(message);
		}
	}

	void NotDoubleAssertion::toBeNaN() const {
		if (std::isnan(value)) {
			std::string message = "Expected " + std::to_string(value) + " not to be NaN ";
			throw AssertionException(message);
		}
	}

	void NotDoubleAssertion::toBeInfinity() const {
		if (std::isinf(value)) {
			std::string message = "Expected " + std::to_string(value) + " not to be NaN ";
			throw AssertionException(message);
		}
	}
}