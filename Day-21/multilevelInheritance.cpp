//Multilevel Inheritance
//when one class derived from another derived class
#include<iostream>
using namespace std;
class animal{
	public:
		string sound;
		string animal_type;
};
class dog: public animal{
	public:
		string color;
};
class babydog: public dog{
	public:
		string name;
		void setdata()
		{
			name="Alex.";
			color="Brown.";
			sound="Barks.";
			animal_type="Domestic.";
		}
		void display()
		{
			cout<<"Animal Details:"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<"Sound: "<<sound<<endl;
			cout<<"Animal Type: "<<animal_type<<endl;
		}
};
int main()
{
	babydog obj;
	obj.setdata();
	obj.display();
	return 0;
}