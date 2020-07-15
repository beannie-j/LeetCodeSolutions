#include <iostream>
#include <string>
#include <vector>
class ReverseString
{
public:

	std::string reverseWords(std::string s) {
		s += " ";
		std::string reversed = "";
		std::string temp = "";
		std::vector<std::string> vec = std::vector<std::string>();

		for (std::string::size_type i = 0; i < s.size(); i++) {
			if (isblank(s[i]) && !temp.empty()) {

				temp.erase(std::remove_if(temp.begin(), temp.end(), isspace), s.end());
				if (temp == "") continue;
				vec.push_back(temp);
				temp = "";
			}
			else {
				temp += s[i];
			}
		}

		for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
			reversed += *rit;
			reversed += " ";

		}
		return reversed;
	}
};

int main() {
	ReverseString reverseString;
	std::cout << reverseString.reverseWords("  hello world!  ") << std::endl; // world! hello
	std::cout << reverseString.reverseWords("a good   example") << std::endl; // example good a
}

