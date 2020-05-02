#pragma once

#include <quokka/interface/ITest.hpp>

#include <string>
#include <functional>

namespace qu {

class Test : public ITest {
public:
    Test(std::string name, std::function<void()> callback);

    std::unique_ptr<ITestResult> run() override;
};

}