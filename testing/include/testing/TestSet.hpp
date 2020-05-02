#pragma once

#include <interface/ITest.hpp>

#include <string>
#include <functional>

namespace qu {

class TestSet {
public:
    virtual void beforeEach() = 0;
    virtual void init() = 0;
    virtual void afterEach() = 0;
    virtual std::string getName() = 0;

    std::vector<std::unique_ptr<ITest>> getTests();

protected:
    void addTest(std::string name, std::function<void()> callback);
    void debugTest(std::string name, std::function<void()> callback);

private:
    std::vector<std::unique_ptr<ITest>> tests;
    std::vector<std::unique_ptr<ITest>> debugTests;

};

}