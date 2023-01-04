#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    std::array<char, 7> letters{ 'a', 'b', 'c', 'd', 'e', 'f', 'D'};

    if (!letters.empty()) {
        std::cout << "The last character is '" << letters.back() << "'.\n";
    }
}