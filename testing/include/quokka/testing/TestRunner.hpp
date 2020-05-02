#pragma once

#include <quokka/testing/TestSet.hpp>

#include <quokka/interface/ITestingPrinter.hpp>
#include <quokka/interface/ITestsSummary.hpp>

namespace qu {

class TestRunner {
public:
    void runTests();
    void registerTestSet(/*TestSet*/);
};

}