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
		void setBeginTime(std::chrono::time_point<std::chrono::system_clock> timestamp);
		void setEndTime(std::chrono::time_point<std::chrono::system_clock> timestamp);

		int getFailedTestsCount() const;
		int getSucceededTestsCount() const;
		int getTestsCount() const;
		std::chrono::nanoseconds getDuration() const;

	private:
		std::chrono::time_point<std::chrono::system_clock> begin;
		std::chrono::time_point<std::chrono::system_clock> end;
		std::vector<std::shared_ptr<ITestResult>> results;
	};
}