#include <quokka/testing/TestRunner.hpp>

namespace qu {

	TestRunner::TestRunner() {
		printer = std::make_unique<ColouredTestingPrinter>();
	}

	void TestRunner::runTests() const {
	    TestsSummary summary;

		summary.setBeginTime(std::chrono::steady_clock::now());
		for (auto& testSet : testSets)
			summary.addResults(runTestSet(*testSet));

		summary.setEndTime(std::chrono::steady_clock::now());
		printer->printTestSetSummary(summary);
	}

    std::vector<std::shared_ptr<ITestResult>> TestRunner::runTestSet(const TestSet& testSet) const {
        std::vector<std::shared_ptr<ITestResult>> results;

	    printer->printTestSetHeader(testSet);
        for (auto& test : testSet.getTests())
            results.push_back(runTestWithSetUpAndTearDown(*test, testSet));
        printer->printNewLine();

        return results;
    }

    std::shared_ptr<ITestResult> TestRunner::runTestWithSetUpAndTearDown(const Test& test, const TestSet& testSet) const {
        testSet.beforeEach();
        auto result = runTest(test);
        testSet.afterEach();

        return result;
    }

	std::shared_ptr<ITestResult> TestRunner::runTest(const Test& test) const {
	    auto result = test.run();
		printer->printTestResult(*result);

		return result;
	}



}