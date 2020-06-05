#include <quokka/assertions/function/NotFunctionAssertion.hpp>

namespace qu {

	NotFunctionAssertion::NotFunctionAssertion(std::function<void()> foo) : foo(foo) {
	}

	void NotFunctionAssertion::toThrow() const {
		try {
			foo();
		} catch (...) {
			throw AssertionException("Expected function to not throw");
		}
	}

	void NotFunctionAssertion::toFinishIn(std::chrono::nanoseconds duration) const {
		auto executionTime = getExecutionTimeOf(foo);
		if (executionTime <= duration)
			throw AssertionException("Expected not to finish in " + Utils::durationToString(duration) + ", but finished in " +
									 Utils::durationToString(executionTime));
	}
}