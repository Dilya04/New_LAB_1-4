#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    
    int ckn = 1;
    for (int i = 1; i <= k; i++) {
        ckn *= (n - i + 1);
        ckn /= i;
    }

    cout << ckn <<endl; 
    return 0;
}
