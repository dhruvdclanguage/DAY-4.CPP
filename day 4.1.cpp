#include<iostream>
#include<string.h>
using namespace std ;

class Students{
	
	private :
		int stu_id;
        char stu_name[50];
        int stu_age;
        char stu_course[50];
        char stu_email[50];
        char stu_city[50];
        char stu_college[50];

	public:	
	    void setter(int stu_id,char stu_name[],int stu_age,char stu_course[],char stu_email[],char stu_city[],char stu_college[]){
	    	
	    	this->stu_id=stu_id;
	    	strcpy(this->stu_name,stu_name);
	    	this->stu_age=stu_age;
	    	strcpy(this->stu_course, stu_course);
	    	strcpy(this->stu_email,stu_email);
	    	strcpy(this->stu_city,stu_city);
	    	strcpy(this->stu_college,stu_college);
		}
		
		void getter(){
			
			cout<<stu_id<<endl;
			cout<<stu_name<<endl;
			cout<<stu_age<<endl;
			cout<<stu_course<<endl;
			cout<<stu_email<<endl;
			cout<<stu_city<<endl;
			cout<<stu_college<<endl;
			
			
		}
};

int main(){
	
	 Students o1 , o2 , o3 , o4 , o5;
	 
	 
	 
	 char name[50]="Dhairya";
	 char course[50]="c,c++";
	 char email[50]="Dhairya123@gmail.com";
	 char city[50]="Surat";
	 char college[50]="Red&White";
	 
	 o1.setter(5566,name,24,course,email,city,college);
	 o1.getter();
	 
	 
	
	 
	
	return 0;
}
