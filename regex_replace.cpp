#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string input = "This is a test: ${PATH}${USER}, ${UNKNOWN}, ${$}, ${?}, ${!}, ${_}";
	std::string output = input;
    std::regex re("\\$\\{[^ \t\n}]*\\}");

    std::smatch match;
    std::string::const_iterator search_start(input.cbegin());

    while (std::regex_search(search_start, input.cend(), match, re)) {
        std::cout << "Match: " << match.str() << std::endl;
		size_t pos = output.find(match.str());
		if (pos != std::string::npos) { // If substring found
			output.replace(pos, match.str().length(), "asd;lfkjasd;lfj");
		}
        search_start = match[0].second;
    }

	std::cout << input << std::endl;
	std::cout << output << std::endl;

    return 0;
}

