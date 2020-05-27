#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    int n,q;
    vector<int> v;
    cin>> n;

    for (int i =0; i <n ; i++)
    {
        int number;
        cin >> number;
        v.push_back(number);

    }

    sort(v.begin(), v.end());

    vector<int>::iterator low;

    cin >> q;

    for (int j =0; j < q; j++)
    {
        int index;
        cin>> index;

        low = lower_bound(v.begin(), v.end(), index);

        if (v[low-v.begin()]==index)
        {

            cout << "Yes "<<low-v.begin()+1<<endl;
        }
        else
        {
            cout <<"No "<< low-v.begin()+1<<endl;

        }

    }




    return 0;
}
