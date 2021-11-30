# include <iostream>
using namespace std;

int main()
{
    double h;
    cin >> h;
    double l,n;
    l = h;
    n = h;
    double dis=0;
    double alldis;
    for (int i = 0; i < 10; ++i)
    {
        h = h / 2.0;
    }
    for(int i=0;i<9;++i)
    {
        l = l / 2.0;
        dis += l;
    }
    alldis = dis * 2 + n;

    cout << alldis << endl;
    cout << h << endl;
    

    return 0;
}