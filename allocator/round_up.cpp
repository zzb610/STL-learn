#include <type_traits>
#include <iostream>
using namespace std;

// the idea from stl
enum
{
    __ALIGN = 8
};

size_t ROUND_UP(size_t bytes)
{
    return (bytes + __ALIGN - 1) & ~(__ALIGN - 1);
}


int main(int argc, char const *argv[])
{
    cout << ROUND_UP(0) << endl;
    cout << ROUND_UP(25) << endl;
    cout << ROUND_UP(88) << endl;
    return 0;
}
