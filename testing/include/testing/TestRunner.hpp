#pragma once

#include <testing/TestSet.hpp>

#include <interface/ITestingPrinter.hpp>
#include <interface/ITestsSummary.hpp>

namespace qu {

class TestRunner {
public:
    void runTests();
    void registerTestSet(/*TestSet*/);
};

}