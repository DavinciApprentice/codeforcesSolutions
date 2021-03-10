#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int n, x , a, b;
        cin >> n >> x >> a >> b;
        int r,s;
        r = x + abs(a-b);
        s = min(r,n-1);
        cout << s << endl;
    }

}