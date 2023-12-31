#include <iostream>
using namespace std;
int NumberOfZeroes(int n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10; 
        if (digit == 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "ru");
    int N;
    cin >> N;

    int result = NumberOfZeroes(N); 
    cout << "Количество нулей среди цифр числа " << N << " равно " << result << endl;
    return 0;
}
