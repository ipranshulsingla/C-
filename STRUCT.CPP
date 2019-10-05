#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
struct student{
 int rollno;
 char name[20];
 char mobno[11];
 char address[50];
}s1;
student input(){
 student s;
 cin>>s.rollno;
 gets(s.name);
 gets(s.mobno);
 gets(s.address);
 return s;
}
void display(student s){
 cout<<s.rollno<<endl;
 cout<<s.name<<endl;
 cout<<s.mobno<<endl;
 cout<<s.address<<endl;
}
void main(){
 clrscr();
 char ch;
 student arr[100];
 int counter=-1;
 while(1){
  clrscr();
  int choice;
  cout<<"1. ADD STUDENT\n";
  cout<<"2. SHOW STUDENTS\n";
  cout<<"3. SEARCH STUDENT\n";
  cout<<"4. DELETE STUDENT\n";
  cout<<"0. EXIT\n";
  cout<<"Select:";
  cin>>choice;
  switch(choice){
   case 1: arr[++counter]=input();
	   break;
   case 2: for(int i=0;i<=counter;++i)
	    display(arr[i]);
	   cout<<"Press any key to continue...";
	   getch();
	   break;
   case 0: exit(0);
   default: cout<<"Inavlid Choice!";
	    sleep(2);
  }
 }
}