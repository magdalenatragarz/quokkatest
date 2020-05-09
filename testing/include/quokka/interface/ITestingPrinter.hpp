#pragma once

#include <quokka/interface/ITestResult.hpp>
#include <quokka/testing/TestSet.hpp>
#include <quokka/testing/TestsSummary.hpp>

namespace qu {
	class ITestingPrinter {
	public:
		virtual void printTestSetHeader(std::shared_ptr<TestSet> testSet) const = 0;
		virtual void printTestResult(std::shared_ptr<ITestResult> testResult) const = 0;
		virtual void printTestSetSummary(std::shared_ptr<TestsSummary> testSummary) const = 0;
		virtual void printNewLine() const = 0;
	};
}