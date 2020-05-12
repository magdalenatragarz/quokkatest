#include <quokka/testing/TestsSummary.hpp>

namespace qu {

	void TestsSummary::addResults(std::vector<std::shared_ptr<ITestResult>> results) {
		for (auto& result : results)
		    addResult(result);
	}

	void TestsSummary::setBeginTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		begin = timestamp;
	}

	void TestsSummary::setEndTime(std::chrono::time_point<std::chrono::system_clock> timestamp) {
		end = timestamp;
	}

	int TestsSummary::getFailedTestsCount() const {
        return failedTests;
	}

	int TestsSummary::getSucceededTestsCount() const {
		return succeededTests;
	}

	int TestsSummary::getTestsCount() const {
		return failedTests + succeededTests;
	}

	std::chrono::nanoseconds TestsSummary::getDuration() const {
		return (end - begin);
	}

    void TestsSummary::addResult(std::shared_ptr<ITestResult> result) {
	    if (result->hasFailed())
	        failedTests += 1;
	    succeededTests += 1;
    }

}