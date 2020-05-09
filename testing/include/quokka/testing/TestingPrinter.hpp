#pragma once

#include <quokka/interface/ITestingPrinter.hpp>
#include <quokka/testing/TestsSummary.hpp>

namespace qu {
	class TestingPrinter : public ITestingPrinter {
	public:
		void printTestSetHeader(std::shared_ptr<TestSet> testSet) const override;
		void printTestResult(std::shared_ptr<ITestResult> testResult) const override;
		void printTestSetSummary(std::shared_ptr<TestsSummary> testSummary) const override;
		void printNewLine() const override;

	private:
		void printSuccess(std::shared_ptr<ITestResult> testResult) const;
		void printFailure(std::shared_ptr<ITestResult> testResult) const;
	};
}