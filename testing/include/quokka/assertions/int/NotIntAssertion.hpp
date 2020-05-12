#pragma once

#include <quokka/assertions/int/IIntAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

namespace qu {
	class NotIntAssertion : public IIntAssertion {
	public:
		explicit NotIntAssertion(int value);
		virtual void toBeEqualTo(int other) const override;
		virtual void toBeLessThan(int other) const override;
		virtual void toBeGreaterThan(int other) const override;
		virtual void toBeLessOrEqualTo(int other) const override;
		virtual void toBeGreaterOrEqualTo(int other) const override;

	private:
		int value;
	};
}