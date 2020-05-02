#include <quokka/assertions/Assertions.hpp>

FloatAssertion Assertions::assert(float arg)
{
	return FloatAssertion(arg);
}

DoubleAssertion Assertions::assert(double arg)
{
	return DoubleAssertion(arg);
}

IntAssertion Assertions::assert(int arg)
{
	return IntAssertion(arg);
}

StringAssertion Assertions::assert(std::string arg)
{
	return StringAssertion(arg);
}

BoolAssertion Assertions::assert(bool arg)
{
	return BoolAssertion(arg);
}

FunctionAssertion Assertions::assert(std::function<void()> arg)
{
	return FunctionAssertion(arg);
}
