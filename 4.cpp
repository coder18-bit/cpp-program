//Problem: Create a class Student with roll number and name. 
//Declare two objects and display their values using a member function.
#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		string name;
		student(int r , string n)
		{
			rollno=r;
			name=n;
		}
		void display(){
		cout<<"name: "<<name<<" rollno :"<<rollno<<endl;
		}
};
int main()
{
	student s1(3,"appu");
	student s2(4,"kannu");
s1.display();
s2.display();	
}
