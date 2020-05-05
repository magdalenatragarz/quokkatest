#include <quokka/testing/TestResult.hpp>

namespace qu {

	TestResult::TestResult(bool testFailureState, std::string name)
		: testFailureState(testFailureState), name(name) {
	}

	TestResult::TestResult(bool testFailureState, std::string name, std::string description)
		: testFailureState(testFailureState), name(name), description(description) {
	}

	bool TestResult::hasFailed() const {
		return testFailureState;
	}

	std::string TestResult::getDescription() const {
		return description;
	}

	std::string TestResult::getTestName() const {
		return name;
	}

}