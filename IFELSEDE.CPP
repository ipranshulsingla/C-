#include<iostream.h>
#include<conio.h>
void main(){
 clrscr();
 int num1,num2;
 cin>>num1>>num2;
 if(num1>num2)
  cout<<"Num 1 is greater!\n";
 if(num2>num1)
  cout<<"Num 2 is greater!\n";
 if(num2==num1)
  cout<<"Both are equal\n";
 getch();
}