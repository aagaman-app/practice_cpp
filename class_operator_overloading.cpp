
#include<bits/stdc++.h>

using namespace std;

class Box
{
private:
    int l,b,h;

public:
    Box ()
    {
        l = 0;
        b = 0;
        h = 0;
    };
    Box(int l1, int b1, int h1 )
    {
        l = l1;
        b = b1;
        h = h1;
    };
    Box (const Box &box2)
    {
        l = box2.l;
        b = box2.b;
        h = box2.h;
    };



    int getLength()
    {
        return l;
    } // Return box's length
    int getBreadth ()
    {
        return b;   // Return box's breadth
    }
    int getHeight ()
    {
        return h;   //Return box's height
    }
    long long CalculateVolume()
    {
        long long vol = (long long)l * b * h;
        return vol;
    } // Return the volume of the box
    bool operator < (const Box &box)
    {

        if (l < box.l)
        {

            return true;
        }
        else if (b <  box.b && l == box.l)
        {
            return true;
        }
        else if(h < box.h && b == box.b && l==box.l)
        {
            return true;
        }
        else
        {
            return false;
        }


    }

    friend ostream& operator<<(ostream& out, Box& B)
    {
        out << B.l << " "<<B.b<<" "<<B.h;
        return out;
    }
};


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0; i<n; i++)
    {
        int type;
        cin>>type;
        if(type ==1)

        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
