#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || y1 == y2||y2%y1==0&&x2%x1==0) {
        cout << "YES";
    }
    else {
        ;
        cout << "NO";
    }
}
