#include <map>
#include <iostream>

#include "family.h"

int main() {
	std::map<std::string, exercises::Family> families;
	exercises::Family simpsons;
	simpsons.add("Bart");
	simpsons.add("Lisa");
	simpsons.add("Maggie");
	families.insert(std::make_pair("Simpsons", simpsons));
	exercises::Family flintstones;
	flintstones.add("Pebbles");
	families.insert(std::make_pair("Flintstones", flintstones));
	
	for (auto family: families) {
		std::cout << family.first << ":\n";
		family.second.print();
	}
}