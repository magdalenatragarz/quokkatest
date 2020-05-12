#pragma once

#include <quokka/assertions/float/IFloatAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>
#include <cmath>

namespace qu {
	class NotFloatAssertion : public IFloatAssertion {
	public:
		explicit NotFloatAssertion(float value);
		virtual void toBeAlmostEqualTo(float other) const override;
		virtual void toBeLessThan(float other) const override;
		virtual void toBeGreaterThan(float other) const override;
		virtual void toBeNaN() const override;
		virtual void toBeInfinity() const override;

	private:
		float value;
	};
}