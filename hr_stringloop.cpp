// https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    vector<string> strings;
    for (int i = 0; i < t; i++)
    {
        string str;
        getline(cin, str);
        strings.push_back(str);
    }

    for (int i = 0; i < strings.size(); i++)
    {
        string even;
        string odd;

        for (int j = 0; j < strings[i].length(); j++)
        {

            if (j == 0 || j % 2 == 0)
            {
                even = even + strings[i][j];
            }
            else
            {

                odd = odd + strings[i][j];
            }
        }

        cout << even << " " << odd << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
