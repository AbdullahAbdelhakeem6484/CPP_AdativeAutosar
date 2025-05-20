#include <iostream>
#include <utility>  // for std::pair
#include <string>
#include <vector>
#include <map>

int main() {
	std::pair<std::string, size_t> p;
	std::vector<std::pair<std::string, size_t>> vec;
	std::map<std::string, size_t> m;
	
	std::string word{""};
	
	std::cin >> word;
		
	while (word != "stop") {
		p.first = word;
		p.second = word.length();
		vec.push_back(p);
		m.insert(p);
		std::cin >> word;
	}
	
	std::cout << std::endl << "Vector:\n";
	for (auto v: vec)
		std::cout << v.first << ", " << v.second << "\n";
	
	std::cout << std::endl << "Map:\n";
	for (auto e: m)
		std::cout << e.first << ", " << e.second << "\n";
}