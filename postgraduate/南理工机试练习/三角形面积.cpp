#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double p = (a + b + c) * 1.0 / 2;
    double s = std::sqrt(p * (p-a) * (p-b) * (p-c));
    std::cout << std::fixed << std::setprecision(1) << s << std::endl;

    return 0;
}
