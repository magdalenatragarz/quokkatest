#pragma once

#include <quokka/interface/ITestResult.hpp>

namespace qu {
	class TestResult : public ITestResult {
	public:
		TestResult(bool testFailureState, std::string name);
		TestResult(bool testFailureState, std::string name, std::string failureDescription);

		bool hasFailed() const override;
		std::string getFailureDescription() const override;
		std::string getTestName() const override;

	private:
		bool testFailureState;
		std::string name;
		std::string failureDescription;
	};
}