#pragma once

#include <chrono>

class Utils {
public:
	static std::string boolToString(bool value);
	static std::string durationToString(std::chrono::nanoseconds duration);
	static bool endsWith(std::string fullString, std::string suffix);
	static bool startsWith(std::string fullString, std::string prefix);
	static bool contains(std::string fullString, std::string substring);
};