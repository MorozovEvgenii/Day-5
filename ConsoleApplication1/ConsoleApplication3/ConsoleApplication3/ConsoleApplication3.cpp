#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "ru-RU");
    std::vector<int> v{ 3, 1, 4, 7, 5, 9 };

    std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
    std::cout << "минимальный элеменет в массиве -  " << std::distance(v.begin(), result);
}