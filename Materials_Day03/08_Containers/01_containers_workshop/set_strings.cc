#include <iostream>
#include <set>
#include <string>

int main() {
	std::set<std::string> words;
	
	// Duplicates will be ignored
	for (std::string word; std::cin >> word && word != "stop";)
		words.insert(word);
	
	for (auto w: words)
		std::cout << w << "\n";
	
	
}