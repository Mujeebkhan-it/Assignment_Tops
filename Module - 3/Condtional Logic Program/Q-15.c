//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible

#include<stdio.h>
int main()
{
	int math,phy,chem,totle,totle_mp;
	printf("Enter your Maths subject marks : ");
	scanf("%d",&math);
	printf("Enter your Physics subject marks : ");
	scanf("%d",&phy);
	printf("Enter your Chemistry subject marks : ");
	scanf("%d",&chem);
	
	totle = math + phy + chem;
	totle_mp = math + phy;
	
	if(math >= 65 && phy >= 55 && chem >= 50 && totle >= 190 && totle_mp >= 140 ){
		printf("\n\nCongrats!...You are eligible for addmission");
	}
	else{
		printf("\n\nSorry!...You are not eligible for this course");
	}
	
	return 0;
}
