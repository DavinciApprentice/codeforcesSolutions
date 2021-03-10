#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int len;
        cin >> len;
        set<int> s;
        for(int i = 0; i < len;i++)
        {
            int d ;
            cin >> d;
            if (s.count(d))
                d++;
            s.insert(d);
        }
        cout << (int)s.size() << endl;
    }
}
