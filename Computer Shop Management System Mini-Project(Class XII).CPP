#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip> 

class Digicom_store{
	int cno;
	char cname[20];

	public:

		Digicom_store(){
		cno=0;
		}
		void setter(){
		cout<<"Please Enter Customer Number And Customer Name";
		cin>>cno;
		gets(cname);
		}

		void getter(){
		cout<<cno;
		puts(cname);
		}


};

int main(){
clrscr();
int choice,qty[6];
char a;
menu:;
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\tPURCHASE LIST";
		cout<<"\n\t\t\t\t*************\n\n\n\n";
		cout<<"\n\n\t\t\t1.MONITOR";
		cout<<"\n\n\t\t\t2.KEYBOARD";
		cout<<"\n\n\t\t\t3.RAM";
		cout<<"\n\n\t\t\t4.GRAPHIC CARD";
		cout<<"\n\n\t\t\t5.HARD DISK";
		cout<<"\n\n\t\t\t6.MOUSE";
		cout<<"\n\n\n\t\t\tEnter your choice\t";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"\n\n\t\t\t\tMONITOR\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. 144Hz\t\t\t\t\t10500\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[0];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		case 2:
			cout<<"\n\n\t\t\t\tKEYBOARD\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. Mechanical\t\t 2500\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[1];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		case 3:
			cout<<"\n\n\t\t\t\tRAM\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. 8GBRAM \t\t\t\t4000\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[2];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		case 4:
			cout<<"\n\n\t\t\t\tGRAPHIC CARD\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. Nvidia GTX\t\t 60000\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[3];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		case 5:
			cout<<"\n\n\t\t\t\tHARD DISK\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. 1TB\t\t\t\t\t\t2000\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[4];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		case 6:
			cout<<"\n\n\t\t\t\tMOUSE\n\n";
			cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
			cout<<"\n  1. Laser Mouse\t\t1000\n";
			cout<<"\n\n\tEnter the number of units you want to purchase\t";
			cin>>qty[5];
			cout<<"Do you want to purchase more items?(y/n)";
			cin>>a;
			if(a=='y' || a =='Y')
			{
			goto menu;
			}
			else
			break;
		default:
		break;
		}
		int amt[6]=0;
		cout<<"\n\n\n\n";
		cout<<"===============================================================================";
		cout<<"\nCustomer Number: "<<obj.cno;
		cout<<"\nCustomer Name: "<<obj.cname;
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"Amount(Rs.)";
		cout<<"===============================================================================";
		if(qty[0]>0){
		amt[0]=qty[0]*10500;
		cout<<"\n\nMONITOR"            <<setw(35)<<qty[0]<<setw(28)<<"Rs."<<amt[0];}
		if(qty[1]>0){
		amt[1]=qty[1]*2500;
		cout<<"\n\nKEYBOARD"             <<setw(36)<<qty[1]<<setw(28)<<"Rs."<<amt[1];}
		if(qty[2]>0){
		amt[2]=qty[2]*4000;
		cout<<"\n\nRAM"             <<setw(36)<<qty[2]<<setw(28)<<"Rs."<<amt[2];}
		if(qty[3]>0){
		amt[3]=qty[3]*60000;
		cout<<"\n\nGRAPHIC CARD"              <<setw(37)<<qty[3]<<setw(28)<<"Rs."<<amt[3];}
		if(qty[4]>0){
		amt[4]=qty[4]*2000;
		cout<<"\n\nHARD DISK"        <<setw(31)<<qty[4]<<setw(28)<<"Rs."<<amt[4];}
		if(qty[5]>0){
		amt[5]=qty[5]*1000;
		cout<<"\n\nMOUSE"                 <<setw(40)<<qty[5]<<setw(28)<<"Rs."<<amt[5]<<"\n";}
		cout<<"===============================================================================";
		cout<<"\n"            <<setw(75)<<"(Rs.)"<<amt[0]+amt[1]+amt[2]+amt[3]+amt[4]+amt[5];
		cout<<"===============================================================================";

		return 0;
}

