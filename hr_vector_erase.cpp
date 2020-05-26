#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    int n, x, a, b;
    vector<int> v;

    cin >> n;

    for (int i =0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cin >> x;
    cin >> a;
    cin >> b;

    v.erase(v.begin()+ x -1);


    v.erase(v.begin()+ a - 1, v.begin()+ b-1);

    cout << v.size()<< endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}
