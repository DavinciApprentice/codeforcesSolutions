#include <iostream>
#include <set>


using namespace std;

int isUnique(int i)
{
    set<int> S;
    int a;
    while (i)
    {
        a = i % 10;
        i = i / 10 - a / 10;
        if (S.count(a) == 1)
        {
            return 0;
        }
        S.insert(a);

    }
    return 1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int z;
    for(int i = x; i <= y; i++)
    {
        if(isUnique(i))
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}