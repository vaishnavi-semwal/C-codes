#include <iostream>
#include <conio.h>    
using namespace std;

class TollBooth
{
private:
    unsigned int totalCars;
    double totalCash;

public:
    // Constructor
    TollBooth()
    {
        totalCars = 0;
        totalCash = 0.0;
    }

    // Paying car
    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
        cout << "Paying car counted.\n";
    }

    // Non-paying car
    void nonPayCar()
    {
        totalCars++;
        cout << "Non-paying car counted.\n";
    }

    // Display totals
    void display()
    {
        cout << "\n------ Toll Booth Report ------\n";
        cout << "Total Cars : " << totalCars << endl;
        cout << "Total Cash : $" << totalCash << endl;
    }
};

int main()
{
    TollBooth t;
    char ch;

    cout << "Press 'P' for Paying Car\n";
    cout << "Press 'N' for Non-Paying Car\n";
    cout << "Press ESC to Exit\n\n";

    while (1)
    {
        ch = getch();

        if (ch == 'P' || ch == 'p')
        {
            t.payingCar();
        }
        else if (ch == 'N' || ch == 'n')
        {
            t.nonPayCar();
        }
        else if (ch == 27)   // ESC key
        {
            break;
        }
    }

    t.display();

    return 0;
}