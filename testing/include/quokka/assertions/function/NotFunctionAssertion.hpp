#pragma once
#include <functional>
#include <quokka/assertions/function/IFunctionAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class NotFunctionAssertion : public IFunctionAssertion {
private:
	std::function<void()> foo;
public:
	NotFunctionAssertion(std::function<void()> foo) : foo(foo) {}
	virtual void toThrow() const override;
	virtual void toFinishIn(std::chrono::nanoseconds duration) const override;

};