#include<iostream>
#include<string>
using namespace std;
 struct student_info{
 	string name;
 	int rollno;
 	int subj1,subj2,subj3;
 };
 int main(){
 	student_info si;
 	int total_marks = 0;
 	cout << " Student Data " << endl;
 	cout << " Enter Student Name: " << endl;
 	cin.ignore();
 	getline (cin, si.name);
 	cout << " Enter Roll Number: " << endl;
 	cin >> si.rollno;
 	cout << "Enter the Marks of Three Subjects: " << endl;
 	cin >>  si.subj1 >>  si.subj2 >>  si.subj3;
 	
 	return 0;
 }