//https://www.codingame.com/ide/puzzle/1d-spreadsheet

#include <bits/stdc++.h>

using namespace std;

map<int, int> m;
vector<string> list_op;
vector<string> list_arg1;
vector<string> list_arg2;

int fn(string op, string a1, string a2, int key)
{

    int n1, n2;
    int r1 = -1;
    int r2 = -1;
    stringstream ss1, ss2;

    if (a1[0] == '$')
    {
        a1.erase(a1.begin());
        ss1 << a1;
        ss1 >> r1;
        if (m.find(r1) != m.end())
        {
            n1 = m[r1];
        }
        else
        {
            m[r1] = fn(list_op[r1], list_arg1[r1], list_arg2[r1], r1);
            n1 = m[r1];
        }
    }
    else
    {
        ss1 << a1;
        ss1 >> n1;
    }

    if (a2[0] == '$')
    {
        a2.erase(a2.begin());
        ss2 << a2;
        ss2 >> r2;
        if (m.find(r2) != m.end())
        {
            n2 = m[r2];
        }
        else
        {
            m[r2] = fn(list_op[r2], list_arg1[r2], list_arg2[r2], r2);
            n2 = m[r2];
        }
    }
    else
    {
        ss2 << a2;
        ss2 >> n2;
    }

    int value;

    if (op == "VALUE")
    {
        value = n1;
        m[key] = value;
    }
    else if (op == "ADD")
    {
        value = n1 + n2;
        m[key] = value;
    }
    else if (op == "SUB")
    {
        value = n1 - n2;
        m[key] = value;
    }
    else if (op == "MULT")
    {
        value = n1 * n2;
        m[key] = value;
    }
    // cout << value << "\n";
    return value;
}

int main()
{

    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {

        string operation;
        string arg1;
        string arg2;
        cin >> operation >> arg1 >> arg2;
        cin.ignore();
        list_op.push_back(operation);
        list_arg1.push_back(arg1);
        list_arg2.push_back(arg2);
    }

    for (int i = 0; i < N; i++)
    {
        cout << fn(list_op[i], list_arg1[i], list_arg2[i], i) << endl;
    }
}