#include <iostream>
#include <string>
#include <sstream>

std::string removeComments(const std::string& code) {
    std::stringstream cleanCode;
    bool blockComment = false;

    std::istringstream ss(code);
    std::string line;

    while (std::getline(ss, line)) {
        // Check if the line contains a block comment start
        size_t blockStartPos = line.find("/*");
        if (blockStartPos != std::string::npos) {
            // If block comment starts, set the flag and ignore the rest of the line
            blockComment = true;
            line = line.substr(0, blockStartPos);
        }

        // Check if the line contains a block comment end
        size_t blockEndPos = line.find("*/");
        if (blockEndPos != std::string::npos) {
            // If block comment ends, unset the flag and consider the rest of the line
            blockComment = false;
            line = line.substr(blockEndPos + 2);
        }

        if (blockComment) {
            // If inside a block comment, skip the line
            continue;
        }

        // Check if the line contains a single-line comment
        size_t commentPos = line.find("//");
        if (commentPos != std::string::npos) {
            // Remove the single-line comment from the line
            line = line.substr(0, commentPos);
        }

        // Trim leading and trailing spaces from the line
        size_t firstNonSpace = line.find_first_not_of(" \t");
        if (firstNonSpace == std::string::npos) {
            // Skip empty or whitespace lines
            continue;
        }
        line = line.substr(firstNonSpace);

        // Append the line to the clean code
        cleanCode << line << '\n';
    }

    return cleanCode.str();
}

int main() {
    std::string code;
    std::getline(std::cin, code);

    std::string cleanCode = removeComments(code);

    std::cout << cleanCode;

    return 0;
}

