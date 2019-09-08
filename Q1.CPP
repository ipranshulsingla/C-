#include<iostream.h>
#include<conio.h>
void main(){
 clrscr();
 int orgno,revno=0;
 int count=0;
 cout<<"Enter original number:";
 cin>>orgno;
 int temp=orgno;
 while(orgno>0){
  count++;
  int digit=orgno%10;
  revno=(revno*10)+digit;
  orgno=orgno/10;
 }
 cout<<"Reversed number:"<<revno<<endl<<"Count:"<<count;
 if(temp==revno)
  cout<<endl<<"This is palindrome!";
 else
  cout<<endl<<"This is not palindrome!";
 getch();
}