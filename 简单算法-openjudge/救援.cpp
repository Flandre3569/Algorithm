# include <iostream>
using namespace std;
# include <cmath>

int main()
{
    int m;
    cin >> m;
    double x, y,z;
    double dis;
    double distance=0;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y>>z;
        dis = sqrt(1.0*x * x + 1.0*y * y) / 50.0*2;
        distance = distance+dis+z*1.5;
    }
 

    double all =  distance;
    cout << ceil(all) << endl;

    return 0;
}