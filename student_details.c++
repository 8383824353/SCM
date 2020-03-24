#include<iostream>
using namespace std;
class stu
{
	private:
		int id;
		char name[20];
		int standard;
		int sub[4];
	public:
		void get_details()
		{
			cout<<"Enter id, name and standard of a student:"<<endl;
			cin>>id>>name>>standard;
			cout<<id<<name<<standard;
		}	
                void get_marks()
		{
			cout<<"Enter marks of all the four subjects:"<<endl;
                        for(int i=0;i<4;i++)
			{
				cin>>sub[i];
			}
			cout<<"So marks of four sybjects are as follows:"<<endl;
			for(i=0;i<4;i++)
			{
				cout<<sub[i];
			}	
};		
int main()
{
	stu s1;
	s1.get_details();
	return 0;
}	
