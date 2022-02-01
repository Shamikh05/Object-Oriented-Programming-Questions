#include <iostream>
#include <cmath>
double Ser(int n)
{
    int i;
    double sums = 0.0, ser;
    for (i = 1; i <= n; ++i) {
        ser = 1 / pow(i, i);
        sums += ser;
    }
    return sums;
}
int main()
{
    int n = 3;
    double res = Ser(n);
    printf("%.5f", res);
    return 0;
}
