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

		void runTest(std::shared_ptr<Test> test) const;
		void runTestSet(std::shared_ptr<TestSet> testSet) const;
		void runTestWithSetUpAndTearDown(std::shared_ptr<Test> test, std::shared_ptr<TestSet> testSet) const;
	};
}