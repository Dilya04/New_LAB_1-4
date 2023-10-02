#include <iostream>
using namespace std;
int main()
{
	int k, m, n;//k max kotlet 
	cin >> k >> m >> n;
    int f = (2 * n + k - 1) / k;  
    int time = f * m;       

    int cutlets = n % k;          // Остаточные котлеты
    if (cutlets > 0) {
        time += 2 * m;                // Если есть остаток, добавляем время для него
    }

    cout << time << endl;

    return 0;
}
