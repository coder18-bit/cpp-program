#include<bits/stdc++.h>
using namespace std;
class person
{
	public:
		string name;
		int age;
		
		void introduce(){
			cout << "hi! i am "<< name << ", Age :" << age << endl;
			
		}
		
};
class student : public person{
	public :
		int rollno;
		void study(){
			cout << name << " is studying roll no:" << rollno << endl;
			
		}
};
class teacher : public person{
	public:
		string subject ;
		void teach (){
			cout << name << "is teaching" << subject << endl;
			
		}
};
class teachingAssistant : public student ,public teacher {
	public :
		string researchArea;
		void assist()
		{
			cout<< student::name <<"is assisting in" <<teacher::subject
			<<"and doing research in" <<researchArea << endl;
		}
};
int main(){
	teachingAssistant ta;
	ta.student::name ="charlie";
	ta.student::age = 25;
	ta.rollno= 202;
	ta.teacher::subject="computer science";
	ta.researchArea ="Artificial intelligence";
	
	ta.student::introduce();
	ta.study();
	ta.teach();
	ta.assist();
	
	return 0;
}
