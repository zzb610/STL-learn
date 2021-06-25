#include <iostream>
#include "../sgi_stl/vector"

using namespace sgistd;
using std::cout;
using std::endl;
int main(int argc, char const *argv[])
{
#if defined(__sgi)
    cout << "__sgi" << endl;
#endif

#if defined(__GNUC__)
    cout << "__GNUC__" << endl;
    cout << __GNUC__ << ' ' << __GNUC_MINOR__ << endl;
#endif

// case 2
#ifdef __STL_NO_DRAND48
    cout << "__STL_NO_RAND48 defined"<<endl;
#else
    cout << "__STL_NO_RAND48 undefined" << endl;
#endif

//case 3
#ifdef __STL_STATIC_TEMPLATE_MEMBER_BUG
    cout << "_STL_STATIC_TEMPLATE_MEMBER_BUG defined" << endl;
#else
    cout << "_STL_STATIC_TEMPLATE_MEMBER_BUG undefined" << endl;
#endif

#ifdef __STL_CLASS_PARTIAL_SPECIALIZATION
    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION defined" << endl;
#else 
    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION undefined" << endl;
#endif
    
    return 0;
}
