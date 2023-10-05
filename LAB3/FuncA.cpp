#include <iostream>
using namespace std;
int SumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Ru");
    int n;
    cin >> n;

    int result = SumOfDigits(n);
    cout << "Сумма цифр числа " << n << " равна " << result << endl;
    return 0;
}
