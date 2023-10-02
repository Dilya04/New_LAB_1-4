#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    int x;
    x = a / 100;
    a -= x * 100;
    int y;
    y = a / 10;
    a -= y * 10;

    cout << "sum:" << x + a + y;


    return 0;
}
