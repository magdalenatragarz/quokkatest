#include <quokka/assertions/function/FunctionAssertion.hpp>

NotFunctionAssertion FunctionAssertion::not() const
{
	return NotFunctionAssertion(foo);
}

void FunctionAssertion::toThrow() const
{
	try { foo(); }
	catch (...) { return; }
	throw AssertionException("Expected function to throw");
}

void FunctionAssertion::toThrowWithMessage(std::string message) const
{
	try { foo(); }
	catch (std::exception e) {
		std::string actualMessage = e.what();
		if(actualMessage == message)
			return;
		throw AssertionException("Expected to throw with message \"" + message + "\", but actual message was: \"" + actualMessage + "\"");
	}
	throw AssertionException("Expected function to throw");
}

void FunctionAssertion::toFinishIn(std::chrono::nanoseconds duration) const
{
	std::chrono::high_resolution_clock clk;
	auto start = clk.now();
	foo();
	auto end = clk.now();
	auto actualDuration = end - start;
	if (actualDuration > duration)
		throw AssertionException("Expected to finish in " + durationToString(duration) + ", but finished in " + durationToString(actualDuration));
}
