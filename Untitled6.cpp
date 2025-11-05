//Problem: Create a class Rectangle with length and breadth.
// Define member functions to calculate area and perimeter.
#include<iostream>
using namespace std;
class rectangle{
	public:
		int len;
		int bredth;
		 int area(){
		 	return len*bredth;
		 }
		 int perimeter(){
		 	return 2*(len+bredth);
		 }
};
int main()
{
	rectangle rect;
	cout<< "enter len";
	cin >> rect.len;
	cout<< "enter breadth";
	cin >> rect.bredth;
	cout<<"area is: "<<rect.area()<<endl;
	cout<<"perimeter is: "<<rect.perimeter()<<endl;
}
