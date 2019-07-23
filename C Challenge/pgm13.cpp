#include <iostream>
#include <string.h>
using namespace std;

	
	class Student
	{
	     public: 
	        char name[20];
	        int marks;
	        char grade;
	        
	       
	    
	        void profile()
	        {
	            cout<<"\nMarks of student "<<name<< " is "<<marks<<" and the grade assigned is "<<grade<< "\n\n";
	        }
	};
	
	
	int main()
	{
	    Student s1, s2;
	    
	    strcpy(s1.name,"Sabinth");
	    s1.marks = 95;
	    s1.grade = 'A';
	    
	    s1.profile();
	    
	    strcpy(s2.name,"Riya");
	    s2.marks = 85;
	    s2.grade = 'B';
	    
	    s2.profile();
	
	
	return 0;
	}

