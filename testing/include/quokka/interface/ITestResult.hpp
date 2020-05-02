#pragma once

#include <string>

namespace qu {

class ITestResult {
public:
    virtual bool hasFailed() = 0;
    virtual std::string getDescription() = 0;
};

}