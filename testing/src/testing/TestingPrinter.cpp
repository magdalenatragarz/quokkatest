#include <quokka/testing/TestingPrinter.hpp>

#include <iostream>

namespace qu {

	void TestingPrinter::printTestSetHeader(const TestSet& testSet) const {
		std::cout << testSet.getName() << std::endl;
	}

	void TestingPrinter::printTestResult(const ITestResult& testResult) const {
		if (testResult.hasFailed())
			printFailure(testResult);
		else
			printSuccess(testResult);
	}

	void TestingPrinter::printSuccess(const ITestResult& testResult) const {
		std::cout << " > " << testResult.getTestName() << ", result: SUCCESS" << std::endl;
	}

	void TestingPrinter::printFailure(const ITestResult& testResult) const {
		std::cout << " > " << testResult.getTestName() << ", result: FAILURE" << std::endl;
		std::cout << "   >> Description: " << testResult.getFailureDescription() << std::endl;
	}

	void TestingPrinter::printTestSetSummary(const TestsSummary& testSummary) const {
		std::cout << "=========== SUMMARY ===========" << std::endl;

		std::cout << " > Failed: " << testSummary.getFailedTestsCount() << "/"
				  << testSummary.getTestsCount() << std::endl;
		std::cout << " > Succeded: " << testSummary.getSucceededTestsCount() << "/"
				  << testSummary.getTestsCount() << std::endl;
		std::cout << " > Duration: " << testSummary.getDuration().count() << "ns" << std::endl;
	}

	void TestingPrinter::printNewLine() const {
		std::cout << std::endl;
	}

}