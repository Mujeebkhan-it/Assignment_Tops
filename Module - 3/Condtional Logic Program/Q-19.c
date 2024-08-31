//Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//
//	
//    		 Unit          			 	 Charge/unit
//	upto 350 		 						@1.20
// 	350 and above but less than 600 	 	@1.50
// 	600 and above but less than 800 	 	@1.80
// 	800 and above 						 	@2.00
//
//
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-

#include<stdio.h>
int main()
{
	int id,unit;
	float bill,surcharge;
	char name[20];
	
	printf("Enter customer id : ");
	scanf("%d",&id);
	printf("Enter unit : ");
	scanf("%d",&unit);
	printf("Enter customer name : ");
	scanf("%s",&name);
	
	if(unit < 350){
		
		if (bill > 800) {
        surcharge = bill * 0.18; 
    	}
    	
    	bill += surcharge;
		bill = unit * 1.20;
		
		if ( bill < 256) {
        bill = 256;
    	}
    	
		printf("\n\nCustomer Id : %d",id);
		printf("\nCustomer Name : %s",name);
		printf("\nUnit consumed : %d",unit);
		printf("\nElectricity Bill : %f",bill);
	}
	
	else if(unit >= 350 && unit < 600){

		if (bill > 800) {
        surcharge = bill * 0.18; 
    	}
    	
    	bill += surcharge;
		bill = unit * 1.50;
		
		if ( bill < 256) {
        bill = 256;
    	}

		printf("\n\nCustomer Id : %d",id);
		printf("\nCustomer Name : %s",name);
		printf("\nUnit consumed : %d",unit);
		printf("\nElectricity Bill : %f",bill);
	}
	
	else if(unit >= 600 && unit > 800){
	
		if (bill > 800) {
        surcharge = bill * 0.18; 
    	}
    	
    	bill += surcharge;
		bill = unit * 1.80;
		
		if ( bill < 256) {
        bill = 256;
    	}

		printf("\n\nCustomer Id : %d",id);
		printf("\nCustomer Name : %s",name);
		printf("\nUnit consumed : %d",unit);
		printf("\nElectricity Bill : %f",bill);
	}
	
	else{
	
		if (bill > 800) {
        surcharge = bill * 0.18; 
    	}
    	
    	bill += surcharge;
   		bill = unit * 2.00;
	
		if ( bill < 256) {
        bill = 256;
    	}

		printf("\n\nCustomer Id : %d",id);
		printf("\nCustomer Name : %s",name);
		printf("\nUnit consumed : %d",unit);
		printf("\nElectricity Bill : %f",bill);
	}
	
	
	return 0;
}
