#pragma once

#include <exception>
#include <string>

namespace qu {

	class AssertionException : public std::exception {
	private:
		std::string message;

	public:
		AssertionException(std::string message);

		virtual const char *what() const noexcept override;
	};

}
