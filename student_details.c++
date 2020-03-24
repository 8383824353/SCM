#include<iostream>
using namespace std;
class stu
{
	private:
		int id;
		char name[20];
		int standard;
		int sub[4];
		int sum=0;
		float avg;
	public:
		void get_details()
		{
			cout<<"Enter id, name and standard of a student:"<<endl;
			cin>>id>>name>>standard;
			cout<<"SO the given details are as follows:"<<ends<<id<<ends<<name<<ends<<standard;
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
		}
		void get_result()
		{
			cout<<"So the total maarks of student are as follows:"<<endl;
			for(i=0;i<4;i++)
			{
				sum+=sub[i];
			}	
			cout<<"So the total maarks of student are as follows:"<<sum<<endl;
			avg=sum/4;
			cout<<"So the average marks of student are:"<<ends<<avg<<endl;
		}	

};		
int main()
{
	stu s1;
	s1.get_details();
	s1.get_marks();
	s1.get_result();
	return 0;
}	
