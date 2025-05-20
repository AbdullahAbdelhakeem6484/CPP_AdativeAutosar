#include "url_history.h"

int main() {
	url_history uh;
	URL u1("http", "example.com/index.html");
	uh.add(u1);
	URL u2("https", "example.com/index.html");
	uh.add(u2);
	URL u3("https", "example.com/index.html");
	uh.add(u3);
	uh.print();
}