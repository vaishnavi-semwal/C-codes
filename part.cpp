#include<iostream>
#include<string>
using namespace std;

class invoice
{
   string part_no;
   string dis;
   int qun;
   double price;
   public:
      invoice(string m, string d, int q, double p)
      {
        part_no = m;
        dis=d;
        qun=q;
        price=p;
      }
      string  getpart_no()
      {
        return part_no;
      }
      string getdis()
      {
        return dis;
      }
      int getqun()
      {
        return qun;
      }
      double getprice()
      {
        return price;
      }
      double getInvoiceAmount()
      {
        if(qun<0)
        {
            qun=0;
        }
        if(price<0.0)
        {
            price=0.0;
        }
         return  price*qun;
        
      }

};

int main()
{
    invoice m1("bjn5627","handle",56,6789.890);
    invoice m2("bye366r","tire",34,6687.890);
    double amunt= m1.getInvoiceAmount(); 
    double amunt2= m2.getInvoiceAmount(); 
    cout<< "total amount is: "<< amunt<< "\n";
    cout<< "total amount is: "<< amunt2;
    return 0;
}