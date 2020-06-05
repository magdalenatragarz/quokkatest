#include <quokka/assertions/function/IFunctionAssertion.hpp>

namespace qu {

	std::chrono::nanoseconds IFunctionAssertion::getExecutionTimeOf(std::function<void()> foo) {
		std::chrono::high_resolution_clock clk;
		auto start = clk.now();
		foo();
		auto end = clk.now();
		return end - start;
	}
}