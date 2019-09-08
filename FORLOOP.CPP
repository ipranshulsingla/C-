#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
 clrscr();
 int n;
 cout<<"Enter number:";
 cin>>n;
 for(int i=1;i<=10;++i){
  cout<<n<<" X "<<i<<" = "<<(n*i);
  cout<<endl;
 }

 getch();
}