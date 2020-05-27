#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;


        double y = (int)(B * 100.0 + 0.5);
        double dy = (double)

        int n = static_cast<int> (floor(A));
        stringstream ss;
        ss << hex << n;
        string res = ss.str();

        cout<<left<<"0x" + res<<endl;
        char b;
        B>=0? b = '+':'-';


        cout<<setfill('_')<<setw(15)<<right<<b;
        cout<<setprecision(3)<<B<<endl;



    }
    return 0;

}
