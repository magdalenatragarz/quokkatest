#pragma once

#include <quokka/interface/ITestResult.hpp>

#include <memory>

namespace qu {

class ITest {
public:
    virtual std::unique_ptr<ITestResult> run() = 0;
};

}