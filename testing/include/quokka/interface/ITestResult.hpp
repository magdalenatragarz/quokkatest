#pragma once

#include <string>

namespace qu {

	class ITestResult {
	public:
		virtual bool hasFailed() const = 0;
		virtual std::string getDescription() const = 0;
		virtual std::string getTestName() const = 0;
	};

}