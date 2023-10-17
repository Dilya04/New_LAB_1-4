#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* masiv = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> masiv[i];
    }

    for (int i = 0; i < N; i += 2) {
        cout << masiv[i] << " ";
    }

    delete[] masiv;

    return 0;
}
