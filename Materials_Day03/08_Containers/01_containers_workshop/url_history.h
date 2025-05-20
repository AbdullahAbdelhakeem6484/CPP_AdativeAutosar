// url_history.h
#ifndef URL_HISTORY_H
#define URL_HISTORY_H

#include <deque>
#include "url.h"

class url_history {
    std::deque<URL> urls;     // Can also use std::list
  public:
    void add(const URL& url);
    void print();
};

#endif //URL_HISTORY_H