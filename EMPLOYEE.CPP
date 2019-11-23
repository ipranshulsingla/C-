#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<process.h>
#include<dos.h>
class Employee{
 private:
	  int eNo;
	  char name[25],address[50],pincode[7];
	  float basicSalary,hraRate,pfRate,daRate,gross,net,hra,da,pf;
	  void calculate();

 public:
	int retempno();
	char* retename();
	void read_data();
	void display_data();
};
 void Employee::calculate(){
  hra=hraRate/100*basicSalary;
  da=daRate/100*basicSalary;
  pf=pfRate/100*basicSalary;
  gross=hra+da+basicSalary;
  net=gross-pf;
 }
 int Employee::retempno(){
	return eNo;
 }
 char* Employee::retename(){
	return name;
 }
 void Employee::read_data(){
  cout<<"Enter Employee No:";
  cin>>eNo;
  cout<<"Enter Employee Name:";
  gets(name);
  cout<<"Enter Employee Address:";
  gets(address);
  cout<<"Enter Employee Pincode:";
  gets(pincode);
  cout<<"Enter HRA % :";
  cin>>hraRate;
  cout<<"Enter DA % :";
  cin>>daRate;
  cout<<"Enter PF % :";
  cin>>pfRate;
  cout<<"Basic Salary:";
  cin>>basicSalary;
  calculate();
 }
 void Employee::display_data(){
  for(int i=0;i<10;++i)
   cout<<'*';
  cout<<"\nSalary Slip\n";
  for(i=0;i<10;++i)
   cout<<'*';
  cout<<"\nEmployee No:"<<eNo<<endl;
  cout<<"Employee Name:"<<name<<endl;
  cout<<"Employee Address:"<<address<<" "<<pincode<<endl;
  for(i=0;i<10;++i)
   cout<<'*';
  cout<<"\nBasic Salary = "<<basicSalary<<endl;
  cout<<"HRA = "<<hra<<endl;
  cout<<"DA = "<<da<<endl;
  cout<<"PF = "<<pf<<endl;
  cout<<"Gross Salary = "<<gross<<endl;
  for(i=0;i<10;++i)
   cout<<'*';
   cout<<endl;
  cout<<"Net Salary = "<<net<<endl;
  for(i=0;i<10;++i)
   cout<<'*';
 }
void main(){
 clrscr();
 Employee employees[5];
 int choice;
 int cursize=-1;
 while(1){
  clrscr();
  cout<<"1. Add Employee"<<endl;
  cout<<"2. Display Employees PaySlip"<<endl;
  cout<<"3. Query Using ENo"<<endl;
  cout<<"4. Query Using EName"<<endl;
  cout<<"5. Exit"<<endl;
  cout<<"Enter your choice:";
  cin>>choice;
  clrscr();
  switch(choice){

	case 1: ++cursize;
		if(cursize<5){
		 cout<<cursize;
		 employees[cursize].read_data();
		}
		else{
		 cout<<"Memory Full";
		 sleep(2);
		}
		break;

	case 2: if(cursize<0){
		 cout<<"No Records";
		 sleep(2);
		 continue;
		}
		for(int i=0;i<=cursize&&cursize<5;++i){
		 employees[i].display_data();
		 getch();
		}
		break;

	case 3:
		int eno,flag=0;
		cout<<"Enter Employee No:";
		cin>>eno;
		for(i=0;i<5;++i){
		 if(eno==employees[i].retempno()){
		  employees[i].display_data();
		  flag=1;
		  getch();
		  break;
		  }
		 }
		 if(flag==0){
		  cout<<"Not Found!";
		  sleep(2);
		 }
		 break;
	case 5: exit(0);
	default:
		cout<<"Invalid Choice!";
		sleep(2);
  }		continue;
 }
}