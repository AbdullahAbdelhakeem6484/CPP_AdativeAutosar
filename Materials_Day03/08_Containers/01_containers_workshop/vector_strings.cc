// words.cpp
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <iostream>

int main() {
    std::vector<std::string> words;
    //std::list<std::string> words;
    //std::deque<std::string> words;
	
    for (std::string word; std::cin >> word;) {
        words.push_back(word);
        //words.push_front(word);    // Stores the strings in reverse order
    }
	
    for (auto w: words)
		std::cout << w << "\n";
}