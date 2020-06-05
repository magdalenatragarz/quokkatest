#include <quokka/testing/ColouredTestingPrinter.hpp>

#include <iostream>

namespace qu {

    void ColouredTestingPrinter::printTestSetHeader(const TestSet& testSet) const {
        std::cout << testSet.getName() << std::endl;
    }

    void ColouredTestingPrinter::printTestResult(const ITestResult& testResult) const {
        if (testResult.hasFailed())
            printFailure(testResult);
        else
            printSuccess(testResult);
    }

    void ColouredTestingPrinter::printSuccess(const ITestResult& testResult) const {
        std::cout << termcolor::green;
        std::cout << " > " << testResult.getTestName() << ", result: SUCCESS" << std::endl;
        std::cout << termcolor::reset;
    }

    void ColouredTestingPrinter::printFailure(const ITestResult& testResult) const {
        std::cout << termcolor::red;
        std::cout << " > " << testResult.getTestName() << ", result: FAILURE" << std::endl;
        std::cout << "   >> Description: " << testResult.getFailureDescription() << std::endl;
        std::cout << termcolor::reset;
    }

    void ColouredTestingPrinter::printTestSetSummary(const TestsSummary& testSummary) const {
        std::cout << "=========== SUMMARY ===========" << std::endl;

        std::cout << termcolor::red;
        std::cout << " > Failed: " << testSummary.getFailedTestsCount() << "/"
                  << testSummary.getTestsCount() << std::endl;
        std::cout << termcolor::reset;

        std::cout << termcolor::green;
        std::cout << " > Succeded: " << testSummary.getSucceededTestsCount() << "/"
                  << testSummary.getTestsCount() << std::endl;
        std::cout << termcolor::reset;

        std::cout << " > Duration: " << Utils::durationToString(testSummary.getDuration()) << std::endl;
    }

    void ColouredTestingPrinter::printNewLine() const {
        std::cout << std::endl;
    }

}