#include<iostream.h>
#include<conio.h>
#include<process.h>
int add(int a,int b){
  return (a+b);
 }
void main(){
 clrscr();
 int choice;
 while(1){
 clrscr();
 cout<<"MENU\n";
 cout<<"1. ADD\n";
 cout<<"2. SUB\n";
 cout<<"3. EXIT\n";
 cout<<"Select:";
 cin>>choice;
 switch(choice){
		case 1: cout<<add(10,20);
			break;
		case 2: //cout<<sub(20,30);
			//break;
		case 3: cout<<"EXIT INVOKED\n";
			exit(0);
 };
 getch();
 }
}
