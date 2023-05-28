#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;

        Person(float h,int a,char* n)
        {
            height=h;
            age=a;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Abdullah";

    Person* rahim = new Person(5.4,11,name);
  

    cout<<rahim->name<<endl;
    cout<<rahim->age<<endl;
    cout<<rahim->height<<endl;

    delete rahim;

    return 0;
}

