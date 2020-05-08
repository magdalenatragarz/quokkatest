#pragma once

#include <quokka/assertions/function/IFunctionAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>
#include <functional>

namespace qu {
	class NotFunctionAssertion : public IFunctionAssertion {
	public:
		explicit NotFunctionAssertion(std::function<void()> foo);
		virtual void toThrow() const override;
		virtual void toFinishIn(std::chrono::nanoseconds duration) const override;

	private:
		std::function<void()> foo;
	};
}