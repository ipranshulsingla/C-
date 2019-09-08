#include<iostream.h>
#include<conio.h>
#define size 19
void swap(int &a,int &b){
 int t=b;
 b=a;
 a=t;
}
void main(){
 clrscr();
 int arr[100]={32,10,8,7,6,5,37,27,18,27,21,23,28,18,349,15,27,428,128};
  for(int i=0;i<size-1;++i){
   //cout<<"i executed "<<i<<endl;
   for(int j=0;j<size-1-i;++j){
    //cout<<"j executed"<<j<<endl;
    if(arr[j]>arr[j+1])
     swap(arr[j],arr[j+1]);
   }
  }
  for(i=0;i<size;++i)
   cout<<arr[i]<<" ";
  cout<<sizeof(arr);
  getch();
}