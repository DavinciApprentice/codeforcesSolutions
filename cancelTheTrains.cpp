// if there is an that equals am that mean that is a crash

#include <iostream>
#include <vector>

using namespace std;

bool isIn(int a, vector<int> m)
{
    for(int i = 0; i < m.size(); i++)
    {
        if (a == m[i])
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int n,m,a,b;
        vector<int> an;
        vector<int> am;
        cin >> n >> m;
        int crashes = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            an.push_back( a );
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b;
            am.push_back( b );
        }
        for(int i = 0; i < n; i++)
        {
            if (isIn(an[i], am))
                crashes++;
        }
        cout << crashes << endl;
    }
}