#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* masiv = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> masiv[i];
    }

    for (int i = 0; i < N / 2; i++) {
        swap(masiv[i], masiv[N - i - 1]);
    }

    for (int i = 0; i < N; i++) {
        cout << masiv[i] << " ";
    }

    delete[] masiv;

    return 0;
}
