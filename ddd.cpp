#include <iostream>
#include<windows.h>
#include <conio.h>
#include<stdlib.h>
#include<iomanip>
#include <string.h>



using namespace std;

void showmenu();
void set_console_size();
char d,ch;
void bl();
void bo();
void help();
void pro();
void ltaking();
void lreturning();
void del();
void search();
void input();
void front();
void list(); 

    int count=0;
    int eid;
	int i=1;
	int e=0;
	string  sex[3];
    int id[30];
    string fname[30];
    string lname[30];
    int nb;
    string bname[30];
    string aname[30];




int main()
{

front();
showmenu();


set_console_size();
showmenu();

}

   void front()
{
		system("title AASTU LIBRARY BOOK REGISTRAR");
	system("color 71");
set_console_size();
system("type front.txt");
	cout<<endl<<endl<<endl<<"\t";
	
	for(int k=1; k<=45; k++)

	{
		
	cout<<"*";
	Sleep(100);
	}
	cout<<endl;
}



void set_console_size()
{
	HANDLE hOut;
	SMALL_RECT DisplayArea = {0, 0, 0, 0};
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DisplayArea.Right  = 70;
    DisplayArea.Bottom = 30;
    SetConsoleWindowInfo(hOut, TRUE, &DisplayArea);
}
void showmenu()
{
	system("title AASTU LIBRARY BOOK REGISTRAR");
    system("color 8f");
	system("cls");
     cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                      ";
    cout<<"\n                                       ";
    system("type menu.txt");

    while(i<=1)
    {
    	system("speaker.vbs \" Welcome to AASTU library\"");
    	i++;
	}
    
	
		while(1)
	{
		ch=getch();
		if(ch=='1')
			bl();
		else if(ch=='2')
		list();
		else if(ch=='3')
			help();	
		else if(ch=='4')
			pro();
			
		else if(ch==27)
			exit(0);
			else
			{
				system("color cf");
				showmenu();
			}

	}

}


void bl()
{
		system("color 8f");
		system("cls");
     cout<<"\n  ************************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                            ";
    cout<<"\n                                                                           ";
   system("type bookr.txt");
   

	while(1)
	{
		ch=getch();
		if(ch=='1')
			ltaking();
		else if(ch=='2')
	    	lreturning();
		else if(ch=='3')
	       	showmenu();	
	     else
			{
				system("color cf");
				bl();
			}

	}
}
void ltaking()
{
	system("color 8f");
		system("cls");
   cout<<"\n  ************************************************************************";
    cout<<"\n                     WELCOME TO AASTU LIBRARY                             ";
    cout<<"\n                                                                          ";
  
    cout<<endl<<endl;
    input();
    
	}



void input()
{
	int j=0;
	int k;	

	while(e<=29)
	{ 
	  
	   while(j==1)
	   {
	   	showmenu();
	   }
		j++;
		
		cout<<endl<<endl;
		cout<<"\n1 >["<<e<<"] FNAME = ";
        getline(cin,fname[e]);
      	cout<<"\n1 >["<<e<<"] LNAME = ";
      	   getline(cin,lname[e]);
		cout<<endl<<"2 >["<<e<<"] SEX (M/F) = ";
	    getline(cin,sex[e]);
		cout<<endl<<"3 >["<<e<<"] NAME OF BOOK = ";
		getline(cin,bname[e]);
		cout<<endl<<"4 >["<<e<<"] NAME OF AUTHER = ";
		getline(cin,aname[e]);
		cout<<endl;
	    cout<<"5 >["<<e<<"] ID NO = ";
        cin>>id[e];
      count++; 
	e++;	
		
	}}

void list()
{
		
		system("cls");
	  
	  cout<<"\n  ************************************************************************";
    cout<<"\n                      WELCOME TO AASTU LIBRARY                              ";
    cout<<"\n                                                                            ";
	cout<<setw(10)<<"First Name"<<setw(10)<<"Last Name"<<setw(7)<<"Sex"<<setw(7)<<"ID"<<setw(10)<<"BOOK"<<endl;
	cout<<endl;
for(int j=0;j<=count; j++)
{
  	cout<<setw(10)<<fname[j]<<setw(10)<<lname[j]<<setw(7)<<setfill('.')<<sex[j]<<setw(7)<<setfill('.')<<id[j]<<setw(10)<<setfill('.')<<bname[j];
	  cout<<endl;   
}
cout<<"Enter any key to go to menu.";
ch=getch();
cin>>ch;
showmenu();
}
	void lreturning ()
	{
		system("title AASTU LIBRARY BOOK REGISTRAR");
	system("color 8f");
		system("cls");
     cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                      ";
    cout<<"\n                                                                     ";
    cout<<"\n                              RETURNING                              ";
    cout<<"\n                                                                     ";
    cout<<"\n                  1 > TO DELETE THE RECORD                           ";
    cout<<"\n                                       ";
    cout<<"\n                  2 > BACK TO BOOK REGISTRATION                     "; 
    	
	ch=getch();
	
	if(ch=='1')
	del();
	else if(ch=='2')
	bl();
	else
{
	  	system("color cf");
		lreturning();
		
}
	}
	void search()
{

	for(int i=0;i<=count; i++)
	{
		if(id[i]==eid)
   {
    cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                     ";
    cout<<endl<<endl<<endl;
   		cout<<"ID = "<<id[i]<<endl;
   		cout<<"Student name = "<<fname[i]<<" "<<lname[i]<<endl;
   		cout<<"Sex = "<<sex[i]<<endl;
   		cout<<"Name of book = "<<bname[i]<<endl;
   		cout<<"Name of author = "<<aname[i]<<endl;
	    cout<<endl;
	    cout<<"\n record deleting"<<".";
		   Sleep(1000);
		   cout<<"..";
		   Sleep(800);
		   cout<<"...";
		   break;
	}
	else
{
    cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                     ";
    cout<<"\n                                                                    ";
    cout<<"\n                          Not registered ..                         ";
    cout<<"\n                                                                    ";
     Sleep(1000);
     bl();
		break;
	

}
  
   }
}
	void del()
	{
			system("title AASTU LIBRARY BOOK REGISTRAR");
	system("color 8f");
		system("cls");
    cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                     ";
    cout<<"\n                                                                    ";
    cout<<"\n                          ENTER YOUR ID                             ";
    cout<<"\n                                                                    ";
	cout<<endl;
	cout<<"[> ";
   cin>>eid;
   system("cls");
   search();
   for(int i=0;i<count;i++)
{
   	if(eid==id[i])
   {
   		id[i]=0;
   		fname[i].erase();
   		lname[i].erase();
   		sex[i].erase();
   		bname[i].erase();
   		aname[i].erase();
		   }
  }
  Sleep(4000);
  
  showmenu();
}
	





   	

void help ()
{
		system("title AASTU LIBRARY BOOK REGISTRAR");
	system("color 8f");
		system("cls");
    cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                     ";
    cout<<"\n                                                                    ";
    cout<<"\n                               HELP                                 ";
    system("type help.txt");
    getch();
    showmenu();
		
}


void pro ()
{
		system("title AASTU LIBRARY BOOK REGISTRAR");
	system("color 8f");
		system("cls");
     cout<<"\n  ******************************************************************";
    cout<<"\n                       WELCOME TO AASTU LIBRARY                      ";
    cout<<"\n                                                                     ";
    cout<<"\n                               ABOUT                                 ";
    cout<<"\n                                                                     ";
    system("type about.txt"); 
   	
    getch();
    showmenu();
}

