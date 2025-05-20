#include <iostream>
#include <set>
#include <map>
#include <string>

int main() {
	std::set<std::string> words;
	
	for (std::string word; std::cin >> word && word != "stop";)
		words.insert(word);
	
	std::cout << words.size() << " distinct words\n";
	
	
}