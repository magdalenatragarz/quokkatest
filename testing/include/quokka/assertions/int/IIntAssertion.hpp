#pragma once

namespace qu {
	class IIntAssertion {
	public:
		virtual void toBeEqualTo(int other) const = 0;
		virtual void toBeLessThan(int other) const = 0;
		virtual void toBeGreaterThan(int other) const = 0;
		virtual void toBeLessOrEqualTo(int other) const = 0;
		virtual void toBeGreaterOrEqualTo(int other) const = 0;
	};
}