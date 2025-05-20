// url_history.cpp
#include "url_history.h"

#include <iostream>
#include <algorithm>

using namespace std;

void url_history::add(const URL& url) {
    auto u = find_if(urls.cbegin(), urls.cend(),
                                          [url] (const URL& u) { return u.get() == url.get(); } );
    if (u == urls.end()) {                                    // Not already present - insert at front
        urls.push_front(url);
    }
}

void url_history::print() {
    for (auto u: urls)      std::cout << u.get() << "\n";
}