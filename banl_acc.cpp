#include<iostream>
#include<string>
using namespace std;
class bank_acc 
{
    string name;
    string type;
    int acc_no;
    int amount;
public:
 void input() 
{
        cout << "Enter name, account no., account type, amount: ";
        cin >> name >> acc_no >> type >> amount;
        cout << "Data saved!\n";  
}
  void deposit() 
{
        int amt;
        cout << "Enter the amount to deposit: ";
        cin >> amt;
  amount += amt;   
 cout << "Balance after deposit: " << amount << endl; 
}
    void withdraw()
{
        int wth;
  cout << "Current balance: " << amount << endl;
  cout << "Enter the amount to withdraw: ";
        cin >> wth;
 if (wth > amount)  
{
            cout << "Invalid amount!\n"; 
}
        else   
{
            amount -= wth;   
            cout << "Amount withdrawn successfully.\n";
            cout << "Remaining balance: " << amount << endl;  
} 
}
};
int main() 
{
    bank_acc m1;
   m1.input();
    m1.deposit();
    m1.withdraw();
 return 0; 
}
