#include <quokka/testing/AssertionException.hpp>

namespace qu {

	AssertionException::AssertionException(const char *message) {
		this->message = std::string(message);
	}

	const char *AssertionException::what() const noexcept {
		return message.c_str();
	}

}
