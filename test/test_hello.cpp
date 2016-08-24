#include <sstream>
#include <iostream>
#include <gtest/gtest.h>

#include <hello.h>

TEST(hello, simple) {
    std::stringstream ss;
    hello(ss);
    ASSERT_STREQ("Hello, world", ss.str().c_str());
}