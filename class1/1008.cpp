#include <iostream>
#include <iomanip>

int main(void)
{
    double x, y;

    std::cin >> x >> y;
    // fixed: 지수 표기법을 사용하지 않음
    // setprecision: fixed와 함께 사용되면 소수점 아래 출력 제한, 혼자 사용하면 전체 자리수 출력 제한
    std::cout << std::fixed << std::setprecision(10) << x / y;

    return 0;
}