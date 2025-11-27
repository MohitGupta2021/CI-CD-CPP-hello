#include <cassert>
#include <string>

std::string hello() {
    return "Hello World from GitHub Actions CI/CD!";
}

int main() {
    assert(hello() == "Hello World from GitHub Actions CI/CD!");
    return 0;
}
