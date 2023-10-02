#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool LYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (LYear) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
