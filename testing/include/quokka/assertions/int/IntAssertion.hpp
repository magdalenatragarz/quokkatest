#pragma once

#include <quokka/assertions/int/IIntAssertion.hpp>
#include <quokka/assertions/int/NotIntAssertion.hpp>
#include <quokka/testing/AssertionException.hpp>

namespace qu {
	class IntAssertion : public IIntAssertion {
	public:
		explicit IntAssertion(int value);
		NotIntAssertion not() const;
		virtual void toBeEqualTo(int other) const override;
		virtual void toBeLessThan(int other) const override;
		virtual void toBeGreaterThan(int other) const override;
		virtual void toBeLessOrEqualTo(int other) const override;
		virtual void toBeGreaterOrEqualTo(int other) const override;

	private:
		int value;
	};
}