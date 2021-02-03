#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int x = rand() % 101, y;
    do {
        y = rand() % 101;
    } while (y == x);
    cout << x << ' ' << y << endl;
    int z,result;
    if (rand() % 2 == 0) z = x;
    else z = y;
    if (z >= 51) result = z;
    else result = x + y - z;
    cout << result;
    return 0;
}
