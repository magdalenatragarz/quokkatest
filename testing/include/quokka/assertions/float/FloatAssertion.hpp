#pragma once

#include <quokka/assertions/float/IFloatAssertion.hpp>
#include <quokka/assertions/float/NotFloatAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

namespace qu {
	class FloatAssertion : public IFloatAssertion {
	public:
		explicit FloatAssertion(float value);
		NotFloatAssertion not() const;
		virtual void toBeAlmostEqualTo(float other) const override;
		virtual void toBeLessThan(float other) const override;
		virtual void toBeGreaterThan(float other) const override;
		virtual void toBeNaN() const override;
		virtual void toBeInfinity() const override;

	private:
		float value;
	};
}