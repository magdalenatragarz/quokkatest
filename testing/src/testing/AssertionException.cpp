#include <quokka/testing/AssertionException.hpp>

namespace qu {

	AssertionException::AssertionException(std::string message) {
		this->message = message;
	}

	const char *AssertionException::what() const noexcept {
		return message.c_str();
	}

}
