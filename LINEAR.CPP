#include<iostream.h>
#include<conio.h>
void main(){
 clrscr();
 int no,flag=0;
 int arr[]={10,21,26,24,37,14};
 cout<<"Enter element to be search:";
 cin>>no;
 for(int i=0;i<6;++i){
  if(arr[i]==no){
   flag=1;
   break;
  }
 }
 flag==1?cout<<"Element Found at "<<i+1:cout<<"Element not Found";
 getch();
}