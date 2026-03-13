#include <iostream>

int main(void)
{
    int x, y;

    std::cin >> x >> y;

    if (x != y)
        std::cout << (x > y ? '>' : '<');
    else
        std::cout << "==";

    return 0;
}