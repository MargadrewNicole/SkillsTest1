#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int hours;
    double payrate;
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(2);
    cout << "How much do you get paid per hour in your summer job (in $)?" << endl;
    cin >> payrate;
    cout << "For how many hours do you work a week?" << endl;
    cin >> hours;
    {
        double income = payrate*hours*5;
        double netincome = income-(income*0.14);
        double clothessupplies = netincome*0.11;
        double savingsbonds = (netincome-clothessupplies)*0.25;
        int savings = (netincome-clothessupplies)*0.25;
        double parents = savings*0.5;

        cout << "You earned $" << income << " from your summer job after working for five weeks. Your total take home pay is $" << netincome << " after paying 14% tax." << endl;
        cout << "You spent $" << netincome*.1 << " on clothes and other accessories, $" << netincome*.01 << " on school supplies, and $" << savingsbonds << " on savings bonds." << endl;
        cout << "Your parents spent $" << parents << " to buy additional savings bonds for you." << endl;
        }

    _getch();
    return 0;
}
