#pragma once
#include <chrono>
#include <sstream>
#include <iomanip>

class IFunctionAssertion {
protected:
	static std::string durationToString(std::chrono::nanoseconds duration);
public:
	virtual void toThrow() const = 0;
	virtual void toFinishIn(std::chrono::nanoseconds duration) const = 0;
};