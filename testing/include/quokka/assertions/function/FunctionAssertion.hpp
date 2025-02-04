#pragma once

#include <quokka/assertions/function/IFunctionAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>
#include <functional>

namespace qu {
	class FunctionAssertion : public IFunctionAssertion {
	public:
		explicit FunctionAssertion(std::function<void()> foo);
		virtual void toThrow() const override;
		void toThrowWithMessage(std::string message) const;
		virtual void toFinishIn(std::chrono::nanoseconds duration) const override;

	private:
		std::function<void()> foo;
	};
}