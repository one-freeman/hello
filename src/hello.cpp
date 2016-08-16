#include <ostream>

#include <hello.h>

std::ostream& hello(std::ostream& stream) {
    return stream << "Hello, world";
}
