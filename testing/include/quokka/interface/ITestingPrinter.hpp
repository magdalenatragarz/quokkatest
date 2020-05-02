#pragma once

#include <quokka/testing/TestSet.hpp>

#include <quokka/interface/ITestResult.hpp>
#include <quokka/interface/ITestsSummary.hpp>

namespace qu {

class ITestingPrinter {
public:
    virtual void printTestSetHeader(std::shared_ptr<TestSet> testSet) = 0;
    virtual void printTestResult(std::shared_ptr<ITestResult> testResult) = 0;
    virtual void printTestSetHeader(std::shared_ptr<ITestsSummary> testSummary) = 0;
};

}