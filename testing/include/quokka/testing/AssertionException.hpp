#pragma once

#include <exception>
#include <string>

class AssertionException : public std::exception {
private:
	std::string message;

public:
	AssertionException(const char* message);
	virtual const char* what() const noexcept override;
};
