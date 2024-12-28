/*Inheritance Example 
o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance. 
o Objective: Learn the concept of inheritance. 
*/

#include<iostream>
using namespace std;

class person
{
	protected:
    string name;
    int age;
    
    public:
    	void get_person()
			{
				cout<<"\n\n\t Enter Name of the person : ";
				cin>>name;
				cout<<"\n\n\t Enter age : ";
				cin>>age;
			}
};

class student 
{
	private:
    string studentID;
    double GPA;
        
    public:
    	void get_student()   
    	{
    		get_student();
				cout<<"\n\n\t Enter student ID : ";
				cin>>studentID;
				cout<<"\n\n\t Enter  GPA : ";
				cin>>GPA;
		}
		
};

class teacher : public person, public student
{
	private:
    string subject;
    int yearsOfExperience;
    
    public :
    	void get_teacher()
    	{
    		get_student();
    		cout<<"\n\n\t Enter subject: ";
			cin>>subject;
			cout<<"\n\n\t Enter  yearsOfExperience : ";
			cin>>yearsOfExperience;
		}
		void print_teacher()
		{
			cout<<"\n\n\t Enter subject: "<<subject;
			cout<<"\n\n\t Enter  yearsOfExperience : "<<yearsOfExperience;
			cout<<"\n\n\t student ID : "<<studentID;
			cout<<"\n\n\t Enter  GPA : "<<GPA;
			cout<<"\n\n\t Enter Name of the Person : "<<name;
			cout<<"\n\n\t Enter age : "<<age;
		}
};

main()
{
	teacher t;
	
	t.get_person();
	t.get_student();
	t.get_teacher();
	t.print_teacher();
}