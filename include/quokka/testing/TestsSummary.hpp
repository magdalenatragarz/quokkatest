#pragma once

#include <quokka/interface/ITestResult.hpp>

#include <algorithm>
#include <chrono>
#include <memory>
#include <vector>

namespace qu {
	class TestsSummary {
	public:
		void addResults(std::vector<std::shared_ptr<ITestResult>> results);
		void setBeginTime(std::chrono::time_point<std::chrono::steady_clock> timestamp);
		void setEndTime(std::chrono::time_point<std::chrono::steady_clock> timestamp);

		int getFailedTestsCount() const;
		int getSucceededTestsCount() const;
		int getTestsCount() const;
		std::chrono::nanoseconds getDuration() const;

	private:
		std::chrono::time_point<std::chrono::steady_clock> begin;
		std::chrono::time_point<std::chrono::steady_clock> end;
		int failedTests{0};
		int succeededTests{0};

        void addResult(std::shared_ptr<ITestResult> results);
	};
}