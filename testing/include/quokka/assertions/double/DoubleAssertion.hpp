#pragma once

#include <quokka/assertions/double/IDoubleAssetrion.hpp>
#include <quokka/testing/AssertionException.hpp>
#include <cmath>

namespace qu {
	class DoubleAssertion : public IDoubleAssertion {
	public:
		explicit DoubleAssertion(double value);
		virtual void toBeAlmostEqualTo(double other) const override;
		virtual void toBeLessThan(double other) const override;
		virtual void toBeGreaterThan(double other) const override;
		virtual void toBeNaN() const override;
		virtual void toBeInfinity() const override;

	private:
		double value;
	};
}