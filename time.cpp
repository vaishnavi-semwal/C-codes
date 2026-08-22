#include<iostream>
using namespace std;
class Time
{
    int hrs;
    int min;
    int sec;
    public:
    Time()
    {
        hrs=0 ;
        min=0;
        sec=0;
    }
    Time(int h, int m, int s)
    {
       hrs=h;
       min=m;
       sec=s;
    }
    void display()
    {
        cout<<"\ntime is: ";
        cout<<hrs<<":"<<min<<":"<<sec;
    }
    void add(Time t1, Time t2)
    {
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min;
        hrs=t1.hrs+t2.hrs;
        if(sec>60)
        {
            sec=sec-60;
            min++;
        }
        if(min>60)
        {
            min=min-60;
            hrs++;
        }
        display();
    }
};
int main()
{
    Time t1(5,45,34);
    t1.display();
    Time t2(7,40,56);
    t2.display();
    Time t3;
    cout<<"\nadded time is: ";
    t3.add(t1,t2);
    return 0;
}