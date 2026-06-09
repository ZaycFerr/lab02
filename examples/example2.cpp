#include <print.hpp>
#include <fstream>

int main(int argc, char** argv)
{
    std::ofstream file("log.txt");
    print("hello", file);
}
