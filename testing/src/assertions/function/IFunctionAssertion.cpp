#include <quokka/assertions/function/IFunctionAssertion.hpp>

namespace qu {

	std::string IFunctionAssertion::durationToString(std::chrono::nanoseconds duration) {
		auto ss = std::ostringstream();
		ss << std::setprecision(3);
		long long nanoseconds = duration.count();
		if (duration > std::chrono::seconds(1))
			ss << std::chrono::duration_cast<std::chrono::milliseconds>(duration).count() / 1000.f
			   << " seconds";
		else if (duration > std::chrono::milliseconds(1))
			ss << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000.f
			   << " milliseconds";
		else if (duration > std::chrono::microseconds(1))
			ss << std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count() / 1000.f
			   << " microseconds";
		else
			ss << std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count()
			   << " nanoseconds";
		return ss.str();
	}
	std::chrono::nanoseconds IFunctionAssertion::getExecutionTimeOf(std::function<void()> foo) {
		std::chrono::high_resolution_clock clk;
		auto start = clk.now();
		foo();
		auto end = clk.now();
		return end - start;
	}
}