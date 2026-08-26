#include<iostream>
using namespace std;
int tarrif= 1000;
class hotel
{
   string name;
   int room_no;
   int nod;
   public:
   void checkin()  {
    cout<< "enter name: ";
    cin >> name;
    cout<< "enter room no.: ";
    cin >> room_no;
    cout<< "enter no. of days: ";
    cin >> nod;  }
   int calc()  {
    return tarrif*nod; }
   void checkout()  {
    cout << "\n name : "<< name<<"\n";
    cout << " room no. : "<< room_no<<"\n";
    cout << " tarrif : "<< tarrif<<"\n";
    cout << " no. of days : "<< nod<<"\n";
    cout << " amount : "<< calc() ;   }
};
int main()  {
    hotel m;
    m.checkin();
    m.checkout();
    return 0;
}
