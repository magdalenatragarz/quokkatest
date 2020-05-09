#pragma once

#include <quokka/interface/ITestingPrinter.hpp>
#include <quokka/testing/TestsSummary.hpp>

namespace qu {
	class TestingPrinter : public ITestingPrinter {
	public:
		void printTestSetHeader(const TestSet& testSet) const override;
		void printTestResult(const ITestResult& testResult) const override;
		void printTestSetSummary(const TestsSummary& testSummary) const override;
		void printNewLine() const override;

	private:
		void printSuccess(const ITestResult& testResult) const;
		void printFailure(const ITestResult& testResult) const;
	};
}