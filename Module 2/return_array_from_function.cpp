#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;
};

bool compareByAge(const Person& p1, const Person& p2)
{
    return p1.age > p2.age;
}

int main()
{
    Person alif;
    alif.height = 5.6;
    alif.age = 19;
    strcpy(alif.name, "Alif");

    Person sheen;
    sheen.height = 5.9;
    sheen.age = 21;
    strcpy(sheen.name, "Sheen");

    Person persons[2] = {alif, sheen};
    sort(persons, persons + 2, compareByAge);

    cout << persons[0].name << endl;

    return 0;
}
