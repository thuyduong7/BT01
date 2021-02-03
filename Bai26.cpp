#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    double tb = m, min = m, max = m;
    for (int i = 1; i < n; i++){
        cin >> m;
        tb += m;
        if (m < min) min = m;
        if (m > max) max = m;
    }
    cout << "Mean: " << tb/n << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}
