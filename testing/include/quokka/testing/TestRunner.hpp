#pragma once

#include <quokka/interface/ITestingPrinter.hpp>
#include <quokka/testing/TestSet.hpp>
#include <quokka/testing/ColouredTestingPrinter.hpp>
#include <quokka/testing/TestsSummary.hpp>

#include <chrono>

namespace qu {
	class TestRunner {
	public:
		TestRunner();

		void runTests() const;

		template <typename T>
		void registerTestSet()
        {
		    auto set = std::make_shared<T>();
            testSets.push_back(set);
            set->init();
        }

	private:
		std::unique_ptr<ITestingPrinter> printer;
		std::vector<std::shared_ptr<TestSet>> testSets;

        std::vector<std::shared_ptr<ITestResult>> runTestSet(const TestSet& testSet) const;
        std::shared_ptr<ITestResult> runTestWithSetUpAndTearDown(const Test& test, const TestSet& testSet) const;
        std::shared_ptr<ITestResult> runTest(const Test& test) const;
	};
}