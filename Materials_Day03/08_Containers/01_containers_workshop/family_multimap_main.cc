#include <map>
#include <unordered_map>
#include <iostream>

int main() {
	std::unordered_multimap<std::string, std::string> families;
	families.insert(std::make_pair("Simpsons", "Bart"));
	families.insert(std::make_pair("Simpsons", "Lisa"));
	families.insert(std::make_pair("Simpsons", "Maggie"));
	families.insert(std::make_pair("Flintstones", "Pebbles"));
	
	auto previous = families.begin();
	
	for (auto family = families.begin(); family != families.end(); ++family) {
		if (previous == families.begin() || family->first != previous->first) {
		    std::cout << family->first << ":\n";
		    previous = family;
		
			auto p = families.equal_range(family->first);
			for (auto child = p.first; child != p.second; ++child)
				std::cout << child->second << "\n";
		}
	}
}
