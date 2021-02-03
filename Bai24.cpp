#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int d,m,y;
    cin >> d >> m >> y;
    int d1,m1,y1;
    d1 = abs(d-1);
    m1 = abs(m-1);
    y1 = abs(y-2021);
    int cl = (d1 + m1 + y1) % 7;
    switch (cl) {
        case 0:
            cout << "Friday";
            break;
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        case 4:
            cout << "Tuesday";
            break;
        case 5:
            cout << "Wednesday";
            break;
        default:
            cout << "Thursday";
        }
    return 0;
}
