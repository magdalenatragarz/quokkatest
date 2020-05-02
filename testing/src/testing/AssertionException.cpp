#include <quokka/testing/AssertionException.hpp>

AssertionException::AssertionException(const char * message)
{
	this->message = std::string(message);
}

const char * AssertionException::what() const noexcept
{
	return message.c_str();
}
