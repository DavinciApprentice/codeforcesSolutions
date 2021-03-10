#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--)
    {
        int x, y;
        cin >> x >> y;
        if(x == y)
        {
            cout << x+y << endl;
        }
        else if (x > y) 
        {
            cout << x + (x-1) << endl;
        }
        else
        {
            cout << y + (y-1) << endl;
        }
    }
}