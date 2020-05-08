#pragma once

#include <chrono>
#include <functional>
#include <iomanip>
#include <sstream>

namespace qu {
	class IFunctionAssertion {
	public:
		virtual void toThrow() const = 0;
		virtual void toFinishIn(std::chrono::nanoseconds duration) const = 0;

	protected:
		static std::string durationToString(std::chrono::nanoseconds duration);
		static std::chrono::nanoseconds getExecutionTimeOf(std::function<void()> foo);
	};
}