
#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int st)
    {
        standard = st;
    }
    void set_first_name(string firstN)
    {
        first_name = firstN;
    }
    void set_last_name(string lastN)
    {
        last_name = lastN;
    }
    string to_string()
    {
        stringstream sAge;
        stringstream sStd;
        sAge << age;
        sStd << standard;

        string a = sAge.str();
        string std = sStd.str();

        string final = a+","+first_name+","+last_name+","+std;
        return final;
    }

};


int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
