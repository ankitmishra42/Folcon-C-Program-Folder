//CPP program to findout vowels of any string
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

class demo{
    char str[50];
    public:
        void get_data();
        void show_data();
};
void demo::get_data()
{
    cout<<endl<<"Enter Any String: ";
    gets(str);
}
void demo::show_data()
{
	 int i = 0, n = 0;
    while(str[i] != '\0')
    {
        if(str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U')
        {
			cout<<endl<<"Vowel = "<<str[i];
        	n++;
        	i++;    
        }
        else
        	i++;
    }
   cout<<endl<<"Only "<<n<<" vowels in this string."<<endl;
}
int main()
{
    class demo obj;
    obj.get_data();
    obj.show_data();
    return 0;
}