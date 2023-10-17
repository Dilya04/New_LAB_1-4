#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* masiv = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> masiv[i];
    }

    int last = masiv[N - 1];

    for (int i = N - 1; i > 0; i--) {
        masiv[i] = masiv[i - 1];
    }

    masiv[0] = last;

    for (int i = 0; i < N; i++) {
        cout << masiv[i] << " ";
    }

    delete[] masiv;

    return 0;
}
