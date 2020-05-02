#include <quokka/assertions/function/IFunctionAssertion.hpp>

std::string IFunctionAssertion::durationToString(std::chrono::nanoseconds duration)
{
	auto ss = std::ostringstream();
	ss << std::setprecision(3);
	long long nanoseconds = duration.count();
	if (duration > std::chrono::seconds(1))
		ss << std::chrono::duration_cast<std::chrono::milliseconds>(duration).count() / 1000.f << " seconds";
	else if (duration > std::chrono::milliseconds(1))
		ss << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000.f << " milliseconds";
	else if (duration > std::chrono::microseconds(1))
		ss << std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count() / 1000.f << " microseconds";
	else
		ss << std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count() << " nanoseconds";
	return ss.str();
}