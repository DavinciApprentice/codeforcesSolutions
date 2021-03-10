#include <iostream>
#include <string>
#include <vector>


using namespace std;

int inNoGood(int j , vector<int> T)
{
    for(int i = 0; i < T.size();i++)
    {
        if (j == T[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int rows, cols;
    cin >> rows >> cols;
    vector<string> s;
    vector<int> noGoodRow;
    vector<int> noGoodCol;
    for(int i = 0; i < rows;i++)
    {
        string a;
        cin >> a;
        s.push_back(a);
    }
    for(int i = 0; i < rows;i++)
    {
        for(int j = 0; j < cols;j++)
        {
            if (s[i][j] == 'S')
            {
                noGoodRow.push_back(i);
                noGoodCol.push_back(j);
            }
        }
    }
    int count = 0;
    for(int i = 0 ; i < rows;i++)
    {
        for(int j = 0; j < cols;j++)
        {
            if (inNoGood(i,noGoodRow) && inNoGood(j,noGoodCol))
            {
                continue;
            }
            else
            {
                count++;
            }
        }
    }
    cout << count << endl;
    // Go through cols then go through rows

}