#include <quokka/testing/TestingPrinter.hpp>

#include <iostream>

namespace qu {

	void TestingPrinter::printTestSetHeader(std::shared_ptr<TestSet> testSet) const {
		std::cout << testSet->getName() << std::endl;
	}

	void TestingPrinter::printTestResult(std::shared_ptr<ITestResult> testResult) const {
		if (testResult->hasFailed())
			printFailure(testResult);
		else
			printSuccess(testResult);
	}

	void TestingPrinter::printSuccess(std::shared_ptr<ITestResult> testResult) const {
		std::cout << " > " << testResult->getTestName() << ", result: SUCCESS" << std::endl;
	}

	void TestingPrinter::printFailure(std::shared_ptr<ITestResult> testResult) const {
		std::cout << " > " << testResult->getTestName() << ", result: FAILURE" << std::endl;
		std::cout << "   >> Description: " << testResult->getDescription() << std::endl;
	}

	void TestingPrinter::printTestSetSummary(std::shared_ptr<TestsSummary> testSummary) const {
		std::cout << "=========== SUMMARY ===========" << std::endl;

		std::cout << " > Failed: " << testSummary->getFailedCount() << "/"
				  << testSummary->getTestsCount() << std::endl;
		std::cout << " > Succeded: " << testSummary->getSucceededCount() << "/"
				  << testSummary->getTestsCount() << std::endl;
		std::cout << " > Duration: " << testSummary->getDuration().count() << "ns" << std::endl;
	}

	void TestingPrinter::printNewLine() const {
		std::cout << std::endl;
	}

}