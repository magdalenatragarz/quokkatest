#pragma once

#include <quokka/interface/ITestResult.hpp>

#include <algorithm>
#include <chrono>
#include <memory>
#include <vector>

namespace qu {

	class TestsSummary {
	public:
		void addResult(std::shared_ptr<ITestResult> result);
		void addBeginTime(std::chrono::time_point<std::chrono::system_clock> timestamp);
		void addEndTime(std::chrono::time_point<std::chrono::system_clock> timestamp);

		int getFailedCount();
		int getSucceededCount();
		int getTestsCount();
		std::chrono::nanoseconds getDuration();

	private:
		std::chrono::time_point<std::chrono::system_clock> begin;
		std::chrono::time_point<std::chrono::system_clock> end;
		std::vector<std::shared_ptr<ITestResult>> results;
	};

}