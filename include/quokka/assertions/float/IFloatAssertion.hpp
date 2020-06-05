#pragma once

namespace qu {
	class IFloatAssertion {
	public:
		virtual void toBeAlmostEqualTo(float other) const = 0;
		virtual void toBeLessThan(float other) const = 0;
		virtual void toBeGreaterThan(float other) const = 0;
		virtual void toBeNaN() const = 0;
		virtual void toBeInfinity() const = 0;
	};
}