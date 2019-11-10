#ifndef SOLUCIO_UTILS_H
#define SOLUCIO_UTILS_H

// Opens and attaches file  filename  to stream  f
void openFile(std::ifstream &f, const std::string &filename);

// Pre:  srt  is a stream in CSV format
// Post: reads and returns the fields in the first line of  str  removing quotes if any
std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream &str);

#endif //SOLUCIO_UTILS_H
