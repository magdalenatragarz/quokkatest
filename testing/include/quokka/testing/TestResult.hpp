#pragma once

#include <quokka/interface/ITestResult.hpp>

namespace qu {

class TestResult : public ITestResult {
public:
    TestResult(bool hasFailed, std::string description);

    bool hasFailed() override;
    std::string getDescription() override;
};

}