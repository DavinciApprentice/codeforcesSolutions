#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int size;
        cin >> size;
        int last;
        vector<int> vec;
        cin >> last;
        int ans = 0;
        
        for(int i = 1; i < size ; i++)
        {
            int nw;
            cin >> nw;
            int a = min(nw,last) ; int b = max(nw,last);
            while(a * 2 < b)
            {
                ans++;
                a *= 2;
            }
            last = nw;
        }
        cout << ans << endl;
    }
}