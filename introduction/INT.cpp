#include <iostream>
class INT
{
    friend std::ostream &operator<<(std::ostream &os, const INT &i);

public:
    INT(int i) : m_i(i) {}
    INT &operator++()
    {
        ++m_i;
        return (*this);
    }
    INT operator++(int)
    {
        int temp = m_i;
        ++m_i;
        return temp;
    }
    INT &operator--()
    {
        --m_i;
        return (*this);
    }
    INT operator--(int)
    {
        int temp = m_i;
        --(this->m_i);
        return temp;
    }
    int &operator*() const
    {
        return (int &)m_i;
    }

private:
    int m_i;
};

std::ostream &operator<<(std::ostream &os, const INT &i)
{
    os << '[' << i.m_i << ']';
    return os;
}

int main(int argc, char const *argv[])
{
    INT I{5};
    std::cout << I++ << '\n'; // [5]
    std::cout << ++I << '\n'; // [7]
    std::cout << I-- << '\n'; // [7]
    std::cout << --I << '\n'; // [5]
    std::cout << *I << '\n';  // 5

    return 0;
}
