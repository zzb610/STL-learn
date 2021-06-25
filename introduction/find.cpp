struct input_iterator_tag
{
};

// template <class _InputIter, class _Tp>
// inline _InputIter find(_InputIter __first, _InputIter __last,
//                        const _Tp& __val,
//                        input_iterator_tag)
// {
//   while (__first != __last && !(*__first == __val))
//     ++__first;
//   return __first;
// }

template<class _InputIter, class _Tp>
inline _InputIter find(_InputIter __first, _InputIter __last, const _Tp& __val)
{
    while(__first != __last && !(*__first == __val)) ++__first;
    return __first;
}


#include <vector>
#include <iostream>
int main(int argc, char const *argv[])
{
    std::vector<int> v{1,2,3,4,5};
    std::cout << *find(v.begin(), v.end(), 3) << "\n";
    return 0;
}
