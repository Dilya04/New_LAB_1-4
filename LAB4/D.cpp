#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* masiv = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> masiv[i];
    }

    int count = 0;

    for (int i = 1; i < N; i++) {
        if (masiv[i] > masiv[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    delete[] masiv;

    return 0;
}
