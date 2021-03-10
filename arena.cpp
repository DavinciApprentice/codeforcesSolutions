// for every couple and solo numbers find a small number

#include <iostream>
#include <vector>
#include <algorithm>

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
        vector<int> vec;

        for(int i = 0; i  < size;i++)
        {
            int b;
            cin >> b;
            vec.push_back(b);
        }
        int l = 0;
        sort(vec.begin(), vec.end());
        for(int i = 1; i < size;)
        {
            if(vec[0] == vec[i])
            {
                i += 1;
            }
            else if (vec[i] == vec[i+1])
            {
                l += 2;
                i += 2;
            }
            else
            {
                l++;
                i++;
            }
        }
        cout << l << endl;
    }
}