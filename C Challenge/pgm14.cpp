#include <iostream>
#include <string.h>
using namespace std;

struct student
{
    char name[20];
    int roll_no;
    int sem;
    float cgpa;
    
};


int main()
{
    student s1, s2;
    
    strcpy(s1.name,"Eddard");
    s1.roll_no = 1;
    s1.sem = 7;
    s1.cgpa = 7.79;
    
    strcpy(s2.name,"Stark");
    s2.roll_no = 2;
    s2.sem = 7;
    s2.cgpa = 7.21;
    
    cout<<"\n\n Top Student Details \n\n";
    cout<<" Student name "<<s1.name<<" Roll No : "<<s1.roll_no<<" Semester "<<s1.sem<<" CGPA "<<s1.cgpa<<"\n\n";
    cout<<" Student name "<<s2.name<<" Roll No : "<<s2.roll_no<<" Semester "<<s2.sem<<" CGPA "<<s2.cgpa<<"\n\n";

return 0;
}