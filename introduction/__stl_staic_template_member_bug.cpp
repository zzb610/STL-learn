#include <iostream>
using namespace std;

template <typename T>
class TestClass
{
public:
    static int _data;
};

// error: specializing member ‘TestClass<char>::_data’ requires ‘template<>’ syntax
template<>
int TestClass<int>::_data = 1;
template<>
int TestClass<char>::_data = 2;

int main(int argc, char const *argv[])
{
    cout << TestClass<int>::_data << endl;
    cout << TestClass<char>::_data << endl;

    TestClass<int> obji1, obji2;
    TestClass<char> objc1, objc2;
    cout << obji1._data << endl;
    cout << obji2._data << endl;
    cout << objc1._data << endl;
    cout << objc2._data << endl;

    obji1._data = 3;
    objc2._data = 4;
    
    cout << obji1._data << endl;
    cout << obji2._data << endl;
    cout << objc1._data << endl;
    cout << objc2._data << endl;
    return 0;
}
