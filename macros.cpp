// macro is  a pieace of code in a program that is replaced by value of macro
// types of macro
// 1. Object-like macros
#include <iostream>
using namespace std;

/*#define SQUARE(x) (x * x)

int main()
{
    int n = 7;
    int result = SQUARE(n); // Expands to: (n * n)
    cout << "Square of " << n << " is " << result;
    return 0;
}*/

// 2. Function-like macros
/*#define PRINT(x) cout << "Value is: " << x

int main()
{
    int value = 42;

    // Print the value using the PRINT macro
    PRINT(value);
    return 0;
}*/

// 3. Multi-line macros
#define PRINT_RECTANGLE(width, height)                     \
    for (int i = 0; i < height; i++) {                     \
        for (int j = 0; j < width; j++) {                  \
            std::cout << "*";                              \
        }                                                  \
        std::cout << std::endl;                            \
    }

int main()
{

    // Print a rectangle with a width of 4 and a height of 3
    PRINT_RECTANGLE(4, 3);
    return 0;
}