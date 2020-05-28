#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string binary = bitset<32>(n).to_string();
    // cout << binary;
    int count = 0;
    int temp = 1;
    for (int i = 1; i < binary.length(); i++)
    {

        if (binary[i] == '1')

        {

            if (binary[i] == binary[i - 1])
            {
                temp++;
                count <= temp ? count = temp : count;
            }
            else
            {
                count <= temp ? count = temp : count;
                temp = 1;
            }
        }
    }

    cout << count;

    return 0;
}
