// https://www.spoj.com/problems/TEST/

#include <iostream>
using namespace std;

int main()
{
    bool ikigai = false;

    while (!ikigai)
    {

        int n;
        cin >> n;
        if (n == 42)
        {
            ikigai = true;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}