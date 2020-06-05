#pragma once

#include <quokka/assertions/bool/BoolAssertion.hpp>
#include <quokka/assertions/double/DoubleAssertion.hpp>
#include <quokka/assertions/float/FloatAssertion.hpp>
#include <quokka/assertions/function/FunctionAssertion.hpp>
#include <quokka/assertions/int/IntAssertion.hpp>
#include <quokka/assertions/string/StringAssertion.hpp>
#include <quokka/assertions/double/NotDoubleAssertion.hpp>
#include <quokka/assertions/float/NotFloatAssertion.hpp>
#include <quokka/assertions/function/NotFunctionAssertion.hpp>
#include <quokka/assertions/int/NotIntAssertion.hpp>
#include <quokka/assertions/string/NotStringAssertion.hpp>

namespace qu {
	class Assertions {
	public:
		static FloatAssertion assert(float arg);
		static DoubleAssertion assert(double arg);
		static IntAssertion assert(int arg);
		static StringAssertion assert(std::string arg);
		static BoolAssertion assert(bool arg);
		static FunctionAssertion assert(std::function<void()> arg);

		static NotFloatAssertion assertNot(float arg);
		static NotDoubleAssertion assertNot(double arg);
		static NotIntAssertion assertNot(int arg);
		static NotStringAssertion assertNot(std::string arg);
		static NotFunctionAssertion assertNot(std::function<void()> arg);
	};
}