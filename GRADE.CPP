#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
 clrscr();
 float marks,total,percent;
 char grade;
 cout<<"Enter Obtained Marks:";
 cin>>marks;
 cout<<"Enter Total Marks:";
 cin>>total;
 percent=(marks/total)*100;
 if(total>=marks && marks>=0){
  if(percent>90 && percent<=100)
  grade='A';
  else if(percent>75 && percent<=90)
   grade='B';
  else if(percent>60 && percent<=75)
   grade='C';
  else if(percent>=40 && percent<=60)
   grade='D';
  else
   grade='F';
  cout<<"Your Percentage:"<<percent<<"\nYour Grade:"<<grade<<endl;
 }
 else{
  cout<<"Error!";
  sleep(1);
  main();
 }
 getch();
}