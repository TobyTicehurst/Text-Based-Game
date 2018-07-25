#include "lowercase.h"

char lowercase(const char c) {
	return tolower(c);
}

std::string lowercase(const std::string& s) {

	// copy construct result
	std::string result(s);

	// change to lowercase
	for (auto& c : result)
		c = lowercase(c);

	return result;
}

std::vector<std::string> lowercase(const std::vector<std::string>& v) {

	// copy construct result
	std::vector<std::string> result(v);

	// change to lowercase
	for (auto& s : result)
		s = lowercase(s);

	return result;
}