#include<iostream>
using namespace std;
class Payroll{
    private:
    
    double hourly_pay_rate, number_of_hours_worked, total_pay;
public:
    void setData(double h, double n){
        hourly_pay_rate = h;
        while(n < 0 || n > 60){
            cout << "Number of hours worked cannot be negative or greater than 60. Please enter a valid number: ";
            cin >> n;
        }
        number_of_hours_worked = n;
    }
    void calculatePay(){
        total_pay = hourly_pay_rate * number_of_hours_worked;
    }
    void displayPay(){
        cout << "Total Pay: " << total_pay << endl;
    }
};
int main(){
    Payroll employee[7];
    double hourly_rate[7], hours_worked[7];
    for(int i = 0; i < 7; i++){
        cout << "Enter hourly pay rate for employee " << i+1 << ": ";
        cin >> hourly_rate[i];
        cout << "Enter number of hours worked for employee " << i+1 << ": ";
        cin >> hours_worked[i];
    }

    for(int i = 0; i < 7; i++){
        employee[i].setData(hourly_rate[i], hours_worked[i]);
        employee[i].calculatePay();
        employee[i].displayPay();
    }
    return 0;
}
