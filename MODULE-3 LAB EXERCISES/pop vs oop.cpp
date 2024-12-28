#include <iostream>
using namespace std;

class Rectangle
{
	private:
	int length;
	int width;
	
	public:
    Rectangle()
	{
		
	}
    void get_length()
    {
    	cout<<"\n\n\t Enter a value of Length : ";
    	cin>>length;
	}
	void get_width()
	{
		cout<<"\n\n\t Enter a value of width : ";
		cin>>width;
	}
	void area()
	{
		cout<<"\n\n\t Area of Rectangle : "<<length*width;
		
	}
	
};

