#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        long long n = (long long)A;
        stringstream ss;
        ss << hex << n;
        string res = ss.str();

        cout << left << "0x" + res << endl;

        cout << setw(15);
        cout << setfill('_');
        cout << showpos << right << fixed << setprecision(2) << B << endl;
        cout << noshowpos << scientific << setprecision(9) << C << endl;
        // cout << noshowpos << scientific << setprecision(9) << C << endl;
    }
    return 0;
}
