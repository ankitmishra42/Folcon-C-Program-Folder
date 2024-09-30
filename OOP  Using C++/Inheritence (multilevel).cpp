//CPP program to show multilevel Inheritence

#include<iostream>
using namespace std;

class demo1{
    public:
        void show_demo1()
        {
			cout<<endl<<"Welcome you are in demo1."<<endl;
		}
};
class demo2: public demo1{
    public:
        void show_demo2()
        {
			cout<<endl<<"Welcome you are in demo2."<<endl;
		}
};
class demo3: public demo2{
    public:
        void show_demo3()
        {
			cout<<endl<<"Welcome you are in demo3."<<endl;
		}
};
class demo4: public demo3{
    public:
        void show_demo4()
        {
			cout<<endl<<"Welcome you are in demo4."<<endl<<endl;
		}
};
int main()
{
    class demo4 obj;
    obj.show_demo1();
    obj.show_demo2();
    obj.show_demo3();
	obj.show_demo4();
	return 0;
}