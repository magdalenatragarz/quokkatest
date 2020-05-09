#include <quokka/testing/TestRunner.hpp>

namespace qu {

	TestRunner::TestRunner() {
		printer = std::make_unique<TestingPrinter>();
		summary = std::make_shared<TestsSummary>();
	}

	void TestRunner::runTests() const {
		summary->setBeginTime(std::chrono::system_clock::now());
		for (auto& testSet : testSets)
			runTestSet(testSet);

		summary->setEndTime(std::chrono::system_clock::now());
		printer->printTestSetSummary(summary);
	}

	void TestRunner::registerTestSet(std::shared_ptr<TestSet> testSet) {
		testSets.push_back(testSet);
	}

	void TestRunner::runTest(std::shared_ptr<Test> test) const {
		auto result = test->run();

		printer->printTestResult(result);
		summary->addResult(result);
	}

	void TestRunner::runTestSet(std::shared_ptr<TestSet> testSet) const {
		printer->printTestSetHeader(testSet);

		testSet->init();
		for (auto& test : testSet->getTests())
            runTestWithSetUpAndTearDown(test, testSet);

		printer->printNewLine();
	}

    void TestRunner::runTestWithSetUpAndTearDown(std::shared_ptr<Test> test, std::shared_ptr<TestSet> testSet) const {
        testSet->beforeEach();
        runTest(test);
        testSet->afterEach();
	}

}