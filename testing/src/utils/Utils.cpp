#include <quokka/utils/Utils.hpp>

namespace qu {

	std::string Utils::boolToString(bool value) {
		return value ? "True" : "False";
	}

	std::string Utils::durationToString(std::chrono::nanoseconds duration) {
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

	
	bool Utils::endsWith(std::string fullString, std::string suffix) {
		if (fullString.length() >= suffix.length())
			return fullString.compare(fullString.length() - suffix.length(), suffix.length(),
									  suffix) == 0;
		return false;
	}

	bool Utils::startsWith(std::string fullString, std::string prefix) {
		return strncmp(prefix.c_str(), fullString.c_str(), prefix.length()) == 0;
	}

	bool Utils::contains(std::string fullString, std::string substring) {
		return fullString.find(substring) != std::string::npos;
	}
}