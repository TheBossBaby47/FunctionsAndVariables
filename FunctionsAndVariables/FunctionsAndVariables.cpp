#include <iostream>
namespace NCL
{
    void v1(char* a, const char* b) {
        while (*b != '\0')
            *a++ = *b++;
        *a = '\0';
    }

    void PrintCharArray(const char* InArray)
    {
        while (*InArray != '\0')
            std::cout << *InArray++ << ' ';
        std::cout << '\n';
    }
}

int main()
{
    char b[] = { 'a','*', '5', 'h','\0' };
    char a[5];
    
    NCL::PrintCharArray(b);
    NCL::v1(a, b);
    NCL::PrintCharArray(a);
}