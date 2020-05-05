#pragma once
#include <quokka/testing/AssertionException.hpp>
#include <quokka/testing/TestResult.hpp>

#include <functional>
#include <memory>
#include <string>
namespace qu {

	class Test {
	public:
		Test(std::string name, std::function<void()> testCallback);

		std::shared_ptr<TestResult> run() const;

	private:
		std::string name;
		std::function<void()> testCallback;
	};

}