#include<bits/stdc++.h>
using namespace std;


int main()
{

    map<string, int> report;
    map<string, int>::iterator it;
    map<string, int>::iterator it2;

    int q;
    cin >> q;
    cin.ignore();


    for (int i = 0; i < q; i++)
    {
        int type;
        string str;
        string name;
        int score;
        getline(cin, str);
        stringstream ss;
        ss<<str;
        ss >> type >> name >> score;

        switch(type)
        {
        case 1:
            it = report.find(name);
            if(it == report.end())
            {
                report[name] = score;
            }
            else
            {
                int total = score + report[name];
                report[name] = total;
            }
            break;
        case 2:
            report.erase(name);
            break;
        case 3:
            it2 = report.find(name);
            if (it2 == report.end())
            {
                int s = 0;
                cout <<s<< endl;
            }
            else
            {
                cout <<report[name]<<endl;
            }
            break;
        }

    }
    return 0;
}



