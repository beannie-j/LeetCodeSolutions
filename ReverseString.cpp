#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <sstream>

static std::string reverseWords(const std::string& s)
{
	std::stringstream ss(s);
	std::vector<std::string> vec = std::vector<std::string>();

	std::string temp;
	while (std::getline(ss, temp, ' '))
	{
		if (!temp.empty())
			vec.push_back(temp);
	}

	std::string reversed;
	for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit)
		reversed += *rit + " ";

	reversed.pop_back();
	return reversed;
}

int main() {
	std::cout << reverseWords("world! hello") << std::endl; // world! hello
	std::cout << reverseWords("a good   example") << std::endl; // example good a
	std::cout << reverseWords("the sky is blue") << std::endl; // blue is sky the

	return 0;
}

