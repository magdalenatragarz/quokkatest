#pragma once

#include <quokka/interface/ITestingPrinter.hpp>
#include <quokka/testing/TestSet.hpp>
#include <quokka/testing/TestingPrinter.hpp>
#include <quokka/testing/TestsSummary.hpp>

#include <chrono>

namespace qu {
	class TestRunner {
	public:
		TestRunner();

		void runTests() const;
		void registerTestSet(std::shared_ptr<TestSet> testSet);

	private:
		std::unique_ptr<ITestingPrinter> printer;
		std::shared_ptr<TestsSummary> summary;
		std::vector<std::shared_ptr<TestSet>> testSets{};

		void runTest(const Test& test) const;
		void runTestSet(const TestSet& testSet) const;
		void runTestWithSetUpAndTearDown(const Test& test, const TestSet& testSet) const;
	};
}