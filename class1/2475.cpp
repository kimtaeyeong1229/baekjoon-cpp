#include <iostream>

int main(void)
{
    int x, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> x;
        sum += x * x;
    }
    
    std::cout << sum % 10;

    return 0;
}