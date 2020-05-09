#include <quokka/testing/TestResult.hpp>

namespace qu {

	TestResult::TestResult(bool testFailureState, std::string name)
		: testFailureState(testFailureState), name(name) {
	}

	TestResult::TestResult(bool testFailureState, std::string name, std::string failureDescription)
		: testFailureState(testFailureState), name(name), failureDescription(failureDescription) {
	}

	bool TestResult::hasFailed() const {
		return testFailureState;
	}

	std::string TestResult::getFailureDescription() const {
		return failureDescription;
	}

	std::string TestResult::getTestName() const {
		return name;
	}

}