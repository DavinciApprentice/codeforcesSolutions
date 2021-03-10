#include <iostream>
#include <vector> 
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin >> size;

    long a;
    vector<long> vec;
    for(int i = 0; i < size;i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    long missing = 0;
    int j = 0;
    for(int i = 1 ; i < size; i++)
    {
        missing += vec[i] - vec[i - 1] - 1;
    }
    cout << missing << endl;    
}