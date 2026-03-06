#include<iostream>
using namespace std;

class Travel {
private:
    double kilometers, hours;

public:
    void input() {
        cout << "Enter kilometers traveled: ";
        cin >> kilometers;
        cout << "Enter hours taken: ";
        cin >> hours;
    }

    void show() {
        cout << "Kilometers: " << kilometers << " | Hours: " << hours << endl;
    }

    void add(Travel otherTrip) {
        double total_kilometers = kilometers + otherTrip.kilometers;
        double total_hours = hours + otherTrip.hours;

        cout << "--- Total Result ---" << endl;
        cout << "Total kilometers: " << total_kilometers << endl;
        cout << "Total hours: " << total_hours << endl;
    }
};

int main() {
    Travel t1, t2;

    cout << "Enter details for Trip 1:" << endl;
    t1.input();

    cout << "Enter details for Trip 2:" << endl;
    t2.input();

    cout << "\nDisplaying Trip Data:" << endl;
    t1.show();
    t2.show();

    cout << "\nAdding Trip 2 to Trip 1:" << endl;
    // t1 is the calling object, t2 is the parameter
    t1.add(t2); 

    return 0;
}