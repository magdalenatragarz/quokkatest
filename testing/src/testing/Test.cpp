#include <quokka/testing/Test.hpp>

namespace qu {

	Test::Test(std::string name, std::function<void()> testCallback)
		: name(name), testCallback(testCallback) {
	}

	std::shared_ptr<TestResult> Test::run() const {
		auto hasFailed = true;

		try {
			testCallback();
			return std::make_shared<TestResult>(!hasFailed, name);
		} catch (AssertionException& e) {
			return std::make_shared<TestResult>(hasFailed, name, e.what());
		}
	}

}