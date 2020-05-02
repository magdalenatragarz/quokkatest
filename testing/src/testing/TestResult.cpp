#include <quokka/testing/TestResult.hpp>

namespace qu {

TestResult::TestResult(bool hasFailed, std::string description) {}


bool TestResult::hasFailed() {
    return true;
}


std::string TestResult::getDescription() {
    return std::string();
}

}