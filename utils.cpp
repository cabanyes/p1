#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


void openFile(std::ifstream &f, const std::string &filename) {
    f.open(filename.c_str());
    if (f.fail()) {
        std::cerr << "Error: unable to open file " << filename << std::endl;
        exit(-1);
    }
}

std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream &str) {
    std::vector<std::string> result;
    std::string line;
    std::getline(str,line);

    std::stringstream lineStream(line);
    std::string cell, rest, empty;

    while(std::getline(lineStream,cell, ',')) {
        if (cell.front() == '"' && cell.back() != '"') { // Found quoted string with commas inside
            std::getline(lineStream, rest, '"'); // Read rest of string after first comma
            cell += rest += '"';
            std::getline(lineStream, empty, ','); // Skip comma after string
        }
	// Remove quotes if any
	if (cell.front() == '"') // invariant: cell.back() == '"'
	  cell = cell.substr(1,cell.size()-2);
        result.push_back(cell);
    }
    // This checks for a trailing comma with no data after it
    if (!lineStream && cell.empty()) {
        // If there was a trailing comma then add an empty element
        result.emplace_back("");
    }
    return result;
}
