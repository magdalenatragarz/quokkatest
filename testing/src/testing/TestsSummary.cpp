#include <quokka/testing/TestsSummary.hpp>

namespace qu {

	void TestsSummary::addResult(std::shared_ptr<ITestResult> result) {
		results.push_back(result);
	}

	void TestsSummary::addBeginTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		begin = timestamp;
	}

	void TestsSummary::addEndTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		end = timestamp;
	}

	int TestsSummary::getFailedCount() {
		auto predicate = [](std::shared_ptr<ITestResult> result) { return result->hasFailed(); };
		return std::count_if(results.begin(), results.end(), predicate);
	}

	int TestsSummary::getSucceededCount() {
		auto predicate = [](std::shared_ptr<ITestResult> result) { return !result->hasFailed(); };

		return std::count_if(results.begin(), results.end(), predicate);
	}

	int TestsSummary::getTestsCount() {
		return results.size();
	}

	std::chrono::nanoseconds TestsSummary::getDuration() {
		return (end - begin);
	}

}