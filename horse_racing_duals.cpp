//https://www.codingame.com/ide/puzzle/horse-racing-duals
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        int Pi;
        cin >> Pi;
        cin.ignore();
        v.push_back(Pi);
    }

    sort(v.begin(), v.end());

    int d;

    for (int i = 0; i < v.size(); i++)
    {

        if (i == 0)
        {
            d = v[i];
        }
        else
        {

            int diff = v[i] - v[i - 1];

            if (diff < d)
            {
                d = v[i] - v[i - 1];
            }
        }
    }
    cout << d << endl;
}