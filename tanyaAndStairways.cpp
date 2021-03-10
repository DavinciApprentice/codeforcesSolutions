#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int oneCount(vector<int> vec)
{
    int count = 0;
    for(int i = 0; i < vec.size();i++)
    {
        if (vec[i] == 1)
            count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int size;
    cin >> size;
    vector<int> vec;
    for(int i = 0; i < size;i++)
    {
        int a ;
        cin >> a;
        vec.push_back(a);
    }
    int count = oneCount(vec);
    sort(vec.begin(), vec.end(), greater<int>());
    cout << count << endl;
    for(int i = count - 1; i >= 0 ;i--)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;

    

}