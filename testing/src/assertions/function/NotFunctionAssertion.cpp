#include <quokka/assertions/function/NotFunctionAssertion.hpp>

void NotFunctionAssertion::toThrow() const
{
	try { foo(); }
	catch (...) {
		throw AssertionException("Expected function to not throw");
	}
}

void NotFunctionAssertion::toFinishIn(std::chrono::nanoseconds duration) const
{
	std::chrono::high_resolution_clock clk;
	auto start = clk.now();
	foo();
	auto end = clk.now();
	auto actualDuration = end - start;
	if (actualDuration <= duration)
		throw AssertionException("Expected not to finish in " + durationToString(duration) + ", but finished in " + durationToString(actualDuration));
}
