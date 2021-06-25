#define __STL_REQUIRES(__type_var, __concept) \
do { \
  void (*__x)( __type_var ) = __concept##_concept_specification< __type_var >\
    ::__concept##_requirement_violation; __x = __x; } while (0)


// // for_each.  Apply a function to every element of a range.
// template <class _InputIter, class _Function>
// _Function for_each(_InputIter __first, _InputIter __last, _Function __f)
// {
//   __STL_REQUIRES(_InputIter, _InputIterator);
//   for (; __first != __last; ++__first)
//     __f(*__first);
//   return __f;
// }
template <class _InputIter, class _Function>
_Function for_each(_InputIter __first, _InputIter __last, _Function __f)
{
    // __STL_REQUIRES(_InputIter, _InputIterator);
    for(;__first != __last; ++ __first)
        __f(*__first);
    return __f;
}  


#include <vector>
#include <iostream>
int main(int argc, char const *argv[])
{
    std::vector<int> v{1,2,3,4,5};
    for_each(v.begin(), v.end(), [](int i){std::cout << i << std::endl;});

    return 0;
}