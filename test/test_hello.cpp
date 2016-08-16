#include <sstream>
#include <iostream>
#include <cassert>

#include <hello.h>

void test_hello() {
    std::stringstream ss;
    hello(ss);
    assert("Hello, world" == ss.str());
}

int main()
{
    std::cout << "test_hello...";
    test_hello();
    std::cout << "OK\n";
    return 0;
}