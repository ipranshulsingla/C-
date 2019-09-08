#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b){
 int t=b;
 b=a;
 a=t;
}
void bubbleSort(int arr[],int size){
  for(int i=0;i<size-1;++i){
   for(int j=0;j<size-1-i;++j){
    if(arr[j]>arr[j+1])
     swap(arr[j],arr[j+1]);
   }
  }
}
int binarySearch(int arr[],int size,int ele){
 bubbleSort(arr,size);
 int mid,low,high,flag=0;
 low=0;
 high=size-1;
 while(high>=low){
  cout<<"Executed";
  mid=(low+high)/2;
  if(arr[mid]==ele){
   flag=1;
   break;
  }
  else if(arr[mid]>ele)
   high=mid-1;
  else if(arr[mid]<ele)
   low=mid+1;
  }
  if(flag==1)
   return mid;
  else
   return -1;
}
void main(){
 clrscr();
 int arr[]={20,71,26,38,27,38,18,37,19,91};
 int size=sizeof(arr)/sizeof(arr[0]);
 int index=binarySearch(arr,size,91);
 for(int i=0;i<size;++i){
  cout<<arr[i]<<' ';
 }
 if(index!=-1)
  cout<<"Element Found at "<<index+1;
 else
  cout<<"Element not found";
 getch();
}