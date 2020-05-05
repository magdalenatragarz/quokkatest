#pragma once

#include <quokka/assertions/Assertions.hpp>
#include <quokka/testing/Test.hpp>

#include <functional>
#include <memory>
#include <string>

namespace qu {

	class TestSet : public Assertions {
	public:
		virtual void init() = 0;
		virtual std::string getName() const = 0;

		virtual void beforeEach() const;
		virtual void afterEach() const;

		std::vector<std::shared_ptr<Test>> getTests() const;

	protected:
		void addTest(std::string name, std::function<void()> callback);
		void debugTest(std::string name, std::function<void()> callback);

	private:
		std::vector<std::shared_ptr<Test>> tests{};
		std::vector<std::shared_ptr<Test>> debugTests{};
	};

}