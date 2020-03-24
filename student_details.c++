#include<iostream>
using namespace std;
class stu
{
	private:
		int id;
		char name[20];
		int standard;
	public:
		void get_details()
		{
			cout<<"Enter id, name and standard of a student:"<<endl;
			cin>>id>>name>>standard;
			cout<<id<<name<<standard;
		}	
};		
int main()
{
	stu s1;
	s1.get_details();
	return 0;
}	
