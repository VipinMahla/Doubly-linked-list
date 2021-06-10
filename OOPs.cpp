#include<bits/stdc++.h>
using namespace std;

class vehicles
{
public:
    vehicles()
    {
        cout<<"We are inside constructer\n";
    }

    virtual void Stopvehicle()=0;
    virtual void Stopvehicle(int value)=0;
    virtual void speed()=0;
    virtual void Numberofseat()=0;
    virtual void Steering()=0;
};

class car : public vehicles
{
private:
    int maxspeedofcar=220;
    string nameofcar;
public:
    void Stopvehicle()
    {
        cout<<"Stop car #1\n";
    }

    void Stopvehicle(int value)
    {
        cout<<"Stop car #2\n";
    }

    void speed()
    {
        cout<<"Maximum speed of car"<<maxspeedofcar<<"\n";
    }
    void Numberofseat()
    {
        cout<<"Numberof seat in car is 4\n";
    }
    void Steering()
    {
        cout<<"The function of steering\n";
    }
};

class cycle : public vehicles
{
private:
    int maxspeedofcycle=50;
    string nameofcycle;
public:
    void Stopvehicle()
    {
        cout<<"Stop cycle #1\n";
    }

    void Stopvehicle(int value)
    {
        cout<<"Stop cycle #2\n";
    }

    void speed()
    {
        cout<<"Maximum speed of cycle"<<maxspeedofcycle<<"\n";
    }
    void Numberofseat()
    {
        cout<<"Numberof seat in car is 2\n";
    }
    void Steering()
    {
        cout<<"The function of steering\n";
    }
};

class bus : public vehicles
{
private:
    int maxspeedofbus=150;
    string nameofbus;
public:
    void Stopvehicle()
    {
        cout<<"Stop bus #1\n";
    }

    void Stopvehicle(int value)
    {
        cout<<"Stop bus #2\n";
    }

    void speed()
    {
        cout<<"Maximum speed of car"<<maxspeedofbus<<"\n";
    }
    void Numberofseat()
    {
        cout<<"Numberof seat in car is 40\n";
    }
    void Steering()
    {
        cout<<"The function of steering\n";
    }
};

int main()
{
    vehicles *obj1=new car();
    obj1->speed();
    vehicles *obj2=new cycle();
    obj2->speed();
    vehicles *obj3=new bus();
    obj3->speed();
    obj1->Stopvehicle();
    obj1->Stopvehicle(1);
    obj2->Stopvehicle();
    obj2->Stopvehicle(1);
    obj3->Stopvehicle();
    obj3->Stopvehicle(1);
    return 0;
}
