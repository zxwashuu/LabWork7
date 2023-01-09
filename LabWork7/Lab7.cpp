#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

#define AgeReality(age) (age<=0)?false:true
void AgeProcesser(int age);
void NameProcesser(string name);
int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "*******Labaaratorna 7******\n";
    int age;
    string name;
    cout << "Enter your age:\n";
    cin >> age;
    cout << "Enter your name\n";
    std::getline(cin >> std::ws, name);
    std::cout << "***Program execution result:***\n";
    cout<< " " << endl;
    AgeProcesser(age);
    NameProcesser(name);

}

void AgeProcesser(int age)
{
    if(AgeReality(age))
    {
        cout<<"Your age is not real";
    }
    if (age >= 18)
    {
        cout << "You are mature\n";
    }
    else 
    {
        cout << "You are still not allowed to drink\n";
        cout << (18 - age) << " years you need to wait \n";
    }
}

void NameProcesser(string name)
{
    int nameSize = name.length();
    cout << nameSize << "- Size of youre name\n";
}
