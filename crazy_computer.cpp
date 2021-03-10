#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int words, delay;
    cin >> words >> delay;
    int word = 1;
    vector<int> s;
    for(int i = 0; i < words;i++)
    {
        int b;
        cin >> b;
        s.push_back(b);
    }
    for(int i = 0; i < words - 1;i++)
    {
        if (s[i+1] - s[i] > delay)
        {
            word = 0;
        }
        word++;
    }
    cout << word << endl;
}