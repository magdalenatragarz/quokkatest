#include <quokka/testing/TestSet.hpp>

namespace qu {

	void TestSet::beforeEach() const {
	}

	void TestSet::afterEach() const {
	}

	std::vector<std::shared_ptr<Test>> TestSet::getTests() const {
		if (!debugTests.empty())
			return debugTests;
		return tests;
	}

	void TestSet::addTest(std::string name, std::function<void()> testCallback) {
		tests.push_back(std::make_shared<Test>(name, testCallback));
	}

	void TestSet::debugTest(std::string name, std::function<void()> testCallback) {
		debugTests.push_back(std::make_shared<Test>(name, testCallback));
	}

};