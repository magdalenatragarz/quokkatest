#include <testing/TestSet.hpp>

namespace qu {

std::vector<std::unique_ptr<ITest>> TestSet::getTests() {
    return std::vector<std::unique_ptr<ITest>>{};
}

void TestSet::addTest(std::string name, std::function<void()> callback) {}

void TestSet::debugTest(std::string name, std::function<void()> callback) {}

};