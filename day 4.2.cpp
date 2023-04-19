#include<iostream>
#include<string.h>

using namespace std ;

class Customers {
	
	private :
		int cust_id ;
		char cust_name[50] ;
		int cust_age ;
		char cust_telecome_brand_name[50] ;
		char cust_mobile_number[10] ;
		char cust_city[50] ;
		int cust_simcard_validity ;
	
	public :
		
		void setter (int cust_id , char cust_name[] , int cust_age , char cust_telecome_brand_name[] , char cust_mobile_number[] , char cust_city[] , int cust_simcard_validity){
			
			this->cust_id  = cust_id ;
			strcpy( this->cust_name,cust_name ) ;
			this->cust_age = cust_age ;
			strcpy( this->cust_telecome_brand_name,cust_telecome_brand_name ) ;
			strcpy( this->cust_mobile_number,cust_mobile_number ) ;
			strcpy( this->cust_city,cust_city ) ;
			this->cust_simcard_validity = cust_simcard_validity ;
			
		}
		
		void getter (){
			
			cout<<cust_id<<endl ;
			cout<<cust_name<<endl ;
			cout<<cust_age<<endl ;
			cout<<cust_telecome_brand_name<<endl ;
			cout<<cust_mobile_number<<endl ;
			cout<<cust_city<<endl ;
			cout<<cust_simcard_validity<<endl ;
			
		}
	
};

int main(){
	
	Customers o1 , o2 , o3 , o4 , o5 ;
	
	o1.setter(1,"Dhairya",20,"vi","9727572094","surat",5);
	o1.getter();
	
	cout<<endl;	
	
	o2.setter(2,"Dhruv",23,"jio","1234567890","surat",4);
	o2.getter();
	
	cout<<endl;	
	
	o3.setter(3,"paresh",25,"airtel","0123456789","anand",3);
	o3.getter();
	
	cout<<endl;	
	
	o4.setter(4,"Ila",27,"vi","2345678901","nadiad",6);
	o4.getter();
	
	cout<<endl;	
	
	o5.setter(5,"dhaval",23,"vi","4567892013","mandvi",2);
	o5.getter();
	
	return 0 ;
}
