#pragma once

#include <quokka/assertions/float/IFloatAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>
#include <cmath>

namespace qu {
	class FloatAssertion : public IFloatAssertion {
	public:
		explicit FloatAssertion(float value);
		virtual void toBeAlmostEqualTo(float other) const override;
		virtual void toBeLessThan(float other) const override;
		virtual void toBeGreaterThan(float other) const override;
		virtual void toBeNaN() const override;
		virtual void toBeInfinity() const override;

	private:
		float value;
	};
}