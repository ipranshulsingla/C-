#include<iostream.h>
#include<conio.h>
void main(){
 int i,j,rows;
 rows=5;
 char ch='A';
 for(i=1;i<=rows;++i){
  for(j=1;j<=i;++j)
   cout<<ch<<" ";
  cout<<endl;
 }
}