//Patterns:
////1
////1 0
////1 0 1
////1 0 1 0
////1 0 1 0 1
//	
//#include<stdio.h>
//int main()
//{
//	int i,j,rows;
//	printf("Enter the rows : ");
//	scanf("%d",&rows);
//	
//	for(i = 1; i <= rows; i++)
//	{
//		
//		for(j = 1; j <= i; j++)
//		{
//			if (j % 2 == 1) 
//			{
//          	printf("1 ");
//          } 
//			else 
//			{
//          	printf("0 ");
//          }
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//================================================================================================


//A 
//B C
//D E F
//G H I J
//K L M N O 

//#include<stdio.h>
//int main()
//{
//	int rows,i,j;
//	char ch = 'A';
//	printf("Enter the rows : ");
//	scanf("%d",&rows);
//	
//	for(i = 1; i <= rows; i++)
//	{
//		for(j = 1; j <= i; j++)
//		{
//			printf("%c ",ch);	
//			ch++;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//=========================================================================================


//    *
//   * *
//  * * *
// * * * *
//* * * * *

//#include<stdio.h>
//int main()
//{
//	int i,j,rows,k;
//	printf("Enter the rows : ");
//	scanf("%d",&rows);
//	
//	int space = rows - 1;
//	for(i = 1; i <= rows; i++) //loop for rows
//	{		
//		for(j = space; j >= 1; j--) //for printing space in each rows
//		{
//			printf(" ");
//		}
//		for(k = 1; k <= i; k++) //for printing * in each rows
//		{
//			printf("* ");
//		}
//		printf("\n"); 
//		space--;
//	}
//
//	return 0;
//}


//=========================================================================================


//1 
//2 3 
//4 5 6 
//7 8 9 10
//11 12 13 14 15
//
//#include<stdio.h>
//int main()
//{
//	int rows,i,j,k=1;
//	printf("Enter the rows : ");
//	scanf("%d",&rows);
//	
//	for(i = 1; i <= rows; i++)
//	{
//		for(j = 1; j <= i; j++)
//		{
//			printf("%d ",k);	
//			k++;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//=========================================================================================


//A
//A B
//A B C
//A B C D
//A B C D E

//#include <stdio.h>
//int main() 
//{
//    int i, j,rows;
//    printf("Enter the rows : ");
//	scanf("%d",&rows);
//    
//    for (i = 1; i <= rows; i++) 
//	{
//    	char ch = 'A';
//        for (j = 1; j <= i; j++) 
//		{
//            printf("%c ",ch++);
//    	}
//        printf("\n");
//	}
//    
//    return 0;
//}


//==================================================================

//
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*

//#include<stdio.h>
//int main()
//{
//	int rows,i,j;
//	printf("Enter the rows : ");
//	scanf("%d",&rows);
//	
//	for(i = 1;i<=rows;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	for(i = 1;i<=rows-1;i++)
//	{
//		for(j=i;j<=rows-1;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//=========================================================================


//1 2 3 4 5 6 7 8 9 10
//36 37 38 39 40 41 42 43 44 11
//35 64 65 66 67 68 69 70 45 12
//34 63 84 85 86 87 88 71 46 13
//33 62 83 96 97 98 89 72 47 14
//32 61 82 95 100 99 90 73 48 15
//31 60 81 94 93 92 91 74 49 16
//30 59 80 79 78 77 76 75 50 17
//29 58 57 56 55 54 53 52 51 18
//28 27 26 25 24 23 22 21 20 19

//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a=11,b=28,c=36,d=37,e=45,f=58,g=64;
//    for(int i=1;i<=10;i++)
//    {
//        cout<<" "<<i<<" ";
//    }
//    cout<<endl;
//    for (int i=2;i<=10;i++)
//    {
//        cout<<" ";
//        for(int j=1;j<=10;j++)
//        {
//            if(j==10 && i>=2 && i<=10)
//            {
//                cout<<a<<" ";    // 11 to 19
//                a++;
//            }
//            else if(i>9 && i<11 && j>=1 && j<=9)
//            {
//                
//                    cout<<b<<" ";  // 20 to 28
//                    b--;
//            }
//            else if(i>=2 && i<=9 && j>0 && j<2)
//            {
//                cout<<c<<" ";  // 29 to 36
//                c--;
//            }
//            else if(i>1 && i<3 && j>1 && j<10)
//            {
//                cout<<d<<" "; // 37 to 44
//                d++;
//            }
//            else if(i>2 && i<10 && j>8 && j<10)
//            {
//                cout<<e<<" ";
//                e++;
//            }
//            else if(i>8 && i<10 && j>1 && j<9)
//            {
//                cout<<f<<" ";
//                f--;
//
//            }
//            else{
//                cout<<"   ";
//            }
//            
//
//        }
//        cout<<endl;
//
//    }
//    
//}

