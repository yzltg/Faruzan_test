#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double p;
	p = (a + b + c) / 2 * 1.0;
	printf("%.1lf", sqrt(p * (p - a) * (p - b) * (p - c)));
	return 0;
}