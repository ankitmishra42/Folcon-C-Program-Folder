//Cpp Programm using constructers
#include<iostream>
using namespace std;
class emp{
    int a, b, c, d;
    public:
        emp();
        void show_data();
};
emp::emp()
{
    cout<<endl<<"Enter The Frist Number: ";
    cin>>a;
    cout<<endl<<"Enter The Second Number: ";
    cin>>b;
    cout<<endl<<"Enter The Third Number: ";
    cin>>c;
    cout<<endl<<"Enter The Fourth Number: ";
    cin>>d;
}

void emp::show_data()
{
    cout<<endl<<"You Had Entered "<<a<<" As Frist Number.";
    cout<<endl<<"You Had Entered "<<b<<" As Second Number.";
    cout<<endl<<"You Had Entered "<<c<<" As Third Number.";
    cout<<endl<<"You Had Entered "<<d<<" As Fourth Number.";
}

int main()
{
    class emp z;
    z.show_data();
    return 1;
}