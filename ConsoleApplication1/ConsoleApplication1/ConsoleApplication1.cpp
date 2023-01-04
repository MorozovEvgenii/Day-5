#include <algorithm>
#include <array>
#include <iostream>

using namespace std;
int main() 
{
    array myArray1{ 7, 3, 1, 9, 5 };
    sort(myArray1.begin(), myArray1.end());
    array myArray2{ 7, 3, 1, 9, 5 };
    sort(myArray2.rbegin(), myArray2.rend());

    for (int element : myArray1)
        std::cout << element << '.';

    std::cout << '\n';

    for (int element : myArray2)
        std::cout << element << '.';

    std::cout << '\n';

    return 0;
}