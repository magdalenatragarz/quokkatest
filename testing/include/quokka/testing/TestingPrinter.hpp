#pragma once

#include <quokka/interface/ITestingPrinter.hpp>

namespace qu {

class TestingPrinter : public ITestingPrinter {
public:
    void printTestSetHeader(std::shared_ptr<TestSet> testSet) override;
    void printTestResult(std::shared_ptr<ITestResult> testResult) override;
    void printTestSetHeader(std::shared_ptr<ITestsSummary> testSummary) override;
};

}