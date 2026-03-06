#include <iostream>
using namespace std;
class Emp {
private:
    string Name, Post, Dept;
    int IdNum;
public:
    Emp(int i) {
        Name = "";
        Post = "";
        Dept = "";
        IdNum = 0;
    }
    void set_Name(string n) { Name = n; }
    void set_post(string p) { Post = p; }
    void set_Dept(string d) { Dept = d; }
    void set_idnum(int Id) { IdNum = Id; }
    string get_name() {
        return Name;
    }
    string get_dept() {
        return Dept;
    }
    string get_post() {
        return Post;
    }
    int get_id() {
        return IdNum;
    }

    void display() {
        cout << "Name: " << Name << endl;
        cout << "Post: " << Post << endl;
        cout << "ID: " << IdNum << endl;
        cout << "Department: " << Dept << endl;

    }
};

int main() {

    Emp e1 = Emp(1);

    string n, p, d;
    int i = 0;
    cout << "Name: " << endl;
    cin.ignore();
    getline(cin, n);
    cout << "ID: " << endl;
    cin >> i;
    cout << "Position: " << endl;
    cin.ignore();
    getline(cin, p);
    cout << "Department: " << endl;
    cin >> d;

    e1.set_Name(n);
    e1.set_Dept(d);
    e1.set_idnum(i);
    e1.set_post(p);
    e1.get_dept();
    e1.get_id();
    e1.get_name();
    e1.get_post();
    e1.display();
    return 0;
}