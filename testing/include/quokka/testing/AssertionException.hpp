#pragma once
#include <exception>

class AssertionException: public std::exception {
public:
	AssertionException(const char* message) : std::exception(message) {}
};
