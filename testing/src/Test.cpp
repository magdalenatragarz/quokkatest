#include <testing/Test.hpp>
#include <testing/TestResult.hpp>

namespace qu {

Test::Test(std::string name, std::function<void()>) {}

std::unique_ptr<ITestResult> run() {
    return std::make_unique<TestResult>(true, "");
}

}