#include <iostream>

int main(void)
{
    /*
    1. N을 입력 받기
    2. N * 1부터 N * 9까지 출력하기 (ex. N * 1 = N * 1)
    */
    int N;

    std::cin >> N;

    for (int i = 1; i < 10; i++)
        std::cout << N << " * " << i << " = " << N * i << '\n';

    return 0;
}