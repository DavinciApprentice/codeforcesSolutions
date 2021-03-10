#include <iostream>
#include <vector>
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
        int size;
        set<int> a;
        cin >> size;
        for(int i = 0; i < size;i++)
        {
            int v;
            cin >> v;
            a.insert(v);
        }

        if (a.size() == 1)
            cout << size << endl;
        else
            cout << 1 << endl;

    }


}