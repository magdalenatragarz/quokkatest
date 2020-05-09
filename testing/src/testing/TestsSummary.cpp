#include <quokka/testing/TestsSummary.hpp>

namespace qu {

	void TestsSummary::addResult(std::shared_ptr<ITestResult> result) {
		results.push_back(result);
	}

	void TestsSummary::setBeginTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		begin = timestamp;
	}

	void TestsSummary::setEndTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		end = timestamp;
	}

	int TestsSummary::getFailedTestsCount() const {
		auto predicate = [](std::shared_ptr<ITestResult> result) { return result->hasFailed(); };
		return std::count_if(results.begin(), results.end(), predicate);
	}

	int TestsSummary::getSucceededTestsCount() const {
		auto predicate = [](std::shared_ptr<ITestResult> result) { return !result->hasFailed(); };
		return std::count_if(results.begin(), results.end(), predicate);
	}

	int TestsSummary::getTestsCount() const {
		return results.size();
	}

	std::chrono::nanoseconds TestsSummary::getDuration() const {
		return (end - begin);
	}

}