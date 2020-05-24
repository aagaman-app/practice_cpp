// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;
    vector<int *> a;
    int *aref;
    int i;
    int j;
    int k;
    vector<int> index_list;
    vector<int> array;

    int index = 0;

    for (int x = 0; x < n; x++)
    {

        cin >> k;

        for (int y = 0; y < k; y++)
        {

            int aval;
            cin >> aval;
            array.push_back(aval);
        }

        index_list.push_back(index);
        index += k;
    }
    // cout << "---Printing the array of arrays---" << endl;
    for (int r = 0; r < array.size(); r++)
    {
        // cout << "array[" << r << "] = " << array[r] << " mem: " << &array[r] << endl;
    }
    // cout << "---Printing array of references---" << endl;
    for (int r = 0; r < index_list.size(); r++)
    {

        // cout << "Index List[" << r << "] = " << index_list[r] << " Index of array[] = " << index_list[r] << endl;

        aref = &array[index_list[r]];
        a.push_back(aref);
    }

    for (int z = 0; z < q; z++)
    {
        cin >> i;
        cin >> j;
        // cout << "a[" << i << "] = " << a[i] << endl;
        int element;
        element = *(a[i] + j);

        // cout << "element at j = " << j << "--->" << element << endl;
        cout << element << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}