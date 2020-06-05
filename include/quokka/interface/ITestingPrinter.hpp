#pragma once

#include <quokka/interface/ITestResult.hpp>
#include <quokka/testing/TestSet.hpp>
#include <quokka/testing/TestsSummary.hpp>

namespace qu {
	class ITestingPrinter {
	public:
		virtual void printTestSetHeader(const TestSet& testSet) const = 0;
		virtual void printTestResult(const ITestResult& testResult) const = 0;
		virtual void printTestSetSummary(const TestsSummary& testSummary) const = 0;
		virtual void printNewLine() const = 0;
	};
}