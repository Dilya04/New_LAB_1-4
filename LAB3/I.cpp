#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    double sum = 0;
    double factorial = 1;

    for (int i = 0; i <= N; i++) {
        if (i > 0) {
            factorial *= i;
        }
        sum += 1 / factorial;
    }

    cout <<  sum << endl;
    return 0;
}
