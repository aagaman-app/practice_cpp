#include <bits/stdc++.h>
using namespace std;


int main()
{

    map<string, int> phonebook;
    map<string, int>::iterator it;

    int n;
    cin >> n;
    cin.ignore();


    for (int i = 0; i < n; i++)
    {
        string str;
        string name;
        int number;


        getline(cin, str);
        stringstream ss;
        ss << str;
        string temp;

        while (!ss.eof())
        {
            ss >> temp;

            if (stringstream(temp)>>number)
            {

            }
            else
            {
                stringstream(temp) >> name;

            }
        }

        phonebook[name] = number;
    }

    string key;
    while(getline(cin, key))
    {

        it = phonebook.find(key);

        if (it == phonebook.end())
        {
            cout <<"Not found"<< endl;
        }
        else
        {

            cout << it->first<<"="<<it->second<<endl;

        }
    }

    return 0;
}
