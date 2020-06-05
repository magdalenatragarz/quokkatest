#include <quokka/assertions/Assertions.hpp>

namespace qu {

	FloatAssertion Assertions::assert(float arg) {
		return FloatAssertion(arg);
	}

	DoubleAssertion Assertions::assert(double arg) {
		return DoubleAssertion(arg);
	}

	IntAssertion Assertions::assert(int arg) {
		return IntAssertion(arg);
	}

	StringAssertion Assertions::assert(std::string arg) {
		return StringAssertion(arg);
	}

	BoolAssertion Assertions::assert(bool arg) {
		return BoolAssertion(arg);
	}

	FunctionAssertion Assertions::assert(std::function<void()> arg) {
		return FunctionAssertion(arg);
	}

	NotFloatAssertion Assertions::assertNot(float arg) {
		return NotFloatAssertion(arg);
	}

	NotDoubleAssertion Assertions::assertNot(double arg) {
		return NotDoubleAssertion(arg);
	}

	NotIntAssertion Assertions::assertNot(int arg) {
		return NotIntAssertion(arg);
	}

	NotStringAssertion Assertions::assertNot(std::string arg) {
		return NotStringAssertion(arg);
	}

	NotFunctionAssertion Assertions::assertNot(std::function<void()> arg) {
		return NotFunctionAssertion(arg);
	}
}