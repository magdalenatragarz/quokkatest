#pragma once

#include <quokka/assertions/bool/BoolAssertion.hpp>
#include <quokka/assertions/double/DoubleAssertion.hpp>
#include <quokka/assertions/float/FloatAssertion.hpp>
#include <quokka/assertions/function/FunctionAssertion.hpp>
#include <quokka/assertions/int/IntAssertion.hpp>
#include <quokka/assertions/string/StringAssertion.hpp>

namespace qu {
	class Assertions {
		static FloatAssertion assert(float arg);
		static DoubleAssertion assert(double arg);
		static IntAssertion assert(int arg);
		static StringAssertion assert(std::string arg);
		static BoolAssertion assert(bool arg);
		static FunctionAssertion assert(std::function<void()> arg);
	};
}