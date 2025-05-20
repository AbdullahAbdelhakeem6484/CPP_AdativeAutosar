// url.cpp
#include "url.h"

URL::URL(const std::string& prot, const std::string& res) {
	protocol = prot;
	resource = res;
}
	
std::string URL::get() const {
	return protocol + "://" + resource;
}
