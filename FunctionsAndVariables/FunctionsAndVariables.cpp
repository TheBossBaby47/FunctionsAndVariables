#include <iostream>
namespace NCL
{
    void v1(char* a, const char* b) {
        while (*b != '\0')
        {
            *a = *b;
            a++;
            b++;
        }
        *a = '\0';
    }
    /// <summary>
    /// Copies the source char array to destination char array
    /// </summary>
    /// <param name="InDestination"> Pointer to first element of destination char array. </param>
    /// <param name="InSource"> Pointer to first element of source char array.</param>
    void StringCopy(char* InDestination, const char* InSource)
    {
        while (*InSource - 1 != '\0')
            *InDestination++ = *InSource++;
    }

    /// <summary>
    /// Copies the source char array to destinatio char array, uses ternary operator and return value of assignment operator
    /// </summary>
    /// <param name="InDestination"> Pointer to first element of destination char array. </param>
    /// <param name="InSource"> Pointer to first element of source char array.</param>
    void CharArrayCopy(char* InDestination, const char* InSource)
    {
        while ((*InSource != '\0') ? *InDestination++ = *InSource++ : *InDestination = '\0'){}
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
    NCL::CharArrayCopy(a, b);
    NCL::PrintCharArray(a);

    return 0;
}