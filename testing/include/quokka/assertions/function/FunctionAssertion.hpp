#pragma once
#include <functional>
#include <quokka/assertions/function/IFunctionAssertion.hpp>
#include <quokka/assertions/function/NotFunctionAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

class FunctionAssertion: public IFunctionAssertion {
private:
	std::function<void()> foo;
public:
	FunctionAssertion(std::function<void()> foo) : foo(foo) {}
	NotFunctionAssertion not() const;
	virtual void toThrow() const override;
	void toThrowWithMessage(std::string message) const;
	virtual void toFinishIn(std::chrono::nanoseconds duration) const override;

};