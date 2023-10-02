#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        cout << "x = " << x;
    }
    else;
}
