// url.h
#ifndef URL_H
#define URL_H

#include <string>

class URL {
    std::string protocol;
    std::string resource;
public:
    URL(const std::string& prot, const std::string& res);
    std::string get() const;
};

#endif //URL_H