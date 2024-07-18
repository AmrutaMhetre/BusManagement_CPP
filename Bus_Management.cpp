#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
	public:
		int PRN,num;
		float rem_fees;
		float fees;
		string name;
		string Class;
		string source;
		string destin;
		string destiny;
		
	void getData()
	{
	cout<<"\n\n\tEnter name of student : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\n\tEnter PRN no : ";
	cin>>PRN;
	cout<<"\n\tEnter class : ";
	cin.ignore();
	getline(cin,Class);
	cout<<"\n Source Place          Fees";
	cout<<"\n 1.VISHRAMBAUG         7000";
	cout<<"\n 2.PUSHPARAJ CHOWK     5000";
	cout<<"\n 3.Sangli Stand        3000";
	
	cout<<"\n\n Destination  : RIT Islampur ";
	
	cout<<"\n\n\tChoose student nearby source place from the list : ";
	cin>>num;
	cout<<"\n\tEnter the fees : ";
	cin>>fees;
	
	switch(num)
	{
		case 1:
			cout<<"\n Chosen Source : VISHRAMBAUG";
			cout<<"\n Total fees : 7000";
			rem_fees=7000-fees;
			destiny="VISHRAMBAUG";
			cout<<"\n\n\tRemaining fees :"<<rem_fees<<"/-";
			break;
		case 2:
			cout<<"\n Chosen Source : PUSHPARAJ CHOWK";
			cout<<"\n Total fees : 5000";
			rem_fees=5000-fees;
			destiny="PUSHPARAJ CHOWK";
			cout<<"\n\n\tRemaining fees :"<<rem_fees<<"/-";
			break;
		case 3:
			cout<<"\n Chosen Source : SANGLI STAND";
			cout<<"\n Total fees : 3000";
			rem_fees=3000-fees;
			destiny="SANGLI STAND";
			cout<<"\n\n\tRemaining fees :"<<rem_fees<<"/-";
			break;		
	}
	}
	
		void pay_fees()
	{
		int a;
		cout<<"\n\n\t Previous Paid fees : Rs "<<fees<<"/-";
		cout<<"\n\n\t  Enter amount to pay : ";
		cin>>a;
		fees=fees+a;
		cout<<"\n\n\t  Currently paid : Rs "<<a<<"/-";
		cout<<"\n\n\t  Total fees paid : Rs "<<fees<<"/-";
		cout<<"\n\n\t  Remaining fees :"<<rem_fees-a<<"/-";
	}
	
	void update()
	{
		cout<<"\n\n\tEnter name of student : ";
		cin.ignore();
	    getline(cin,name);
		cout<<"\n\tEnter current class : ";
		cin.ignore();
    	getline(cin,Class);
		cout<<"\n\tEnter student source place : ";
    	cin.ignore();
    	getline(cin,source);
	}
	
	void displayData()
	{
		static int i=1;
		
		cout<<i<<"\t"<<name<<"  "<<PRN<<"\t"<<Class<<"\t "<<fees<<"\t "<< rem_fees<<"\t Source"<< destiny<<"\t RIT Islampur"<<endl;
		i++;
	}

};

class faculty
{
	public:
		int empid;
		string name,depart,source,destin;
		float fees;
		int num;
		float rem_fees1;
		string destiny;
		
		void getData()
	{
	cout<<"\n\tEnter name of faculty : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\n\tEnter id :- ";
	cin>>empid;
	cout<<"\n\tEnter department : ";
	cin.ignore();
	getline(cin,depart);
	cout<<"\n Source Place          Fees";
	cout<<"\n 1.VISHRAMBAUG         7000";
	cout<<"\n 2.PUSHPARAJ CHOWK     5000";
	cout<<"\n 3.Sangli Stand        3000";
	
	cout<<"\n\n Destination  : RIT Islampur ";
	
	cout<<"\n\n\tChoose faculty nearby source place from the list : ";
	cin>>num;
	cout<<"\n\tEnter the fees : ";
	cin>>fees;
	switch(num)
	{
		case 1:
			cout<<"\n Chosen Source : VISHRAMBAUG";
			cout<<"\n Total fees : 7000";
			rem_fees1=7000-fees;
			destiny="VISHRAMBAUG";
		    cout<<"\n\n\tRemaining fees :"<<rem_fees1<<"/-";
			break;
		case 2:
			cout<<"\n Chosen Source : PUSHPARAJ CHOWK";
			cout<<"\n Total fees : 5000";
			rem_fees1=5000-fees;
			destiny="PUSHPARAJ CHOWK";
			cout<<"\n\n\tRemaining fees :"<<rem_fees1<<"/-";
			break;
		case 3:
			cout<<"\n Chosen Source : SANGLI STAND";
			cout<<"\n Total fees : 3000";
			rem_fees1=3000-fees;
			destiny="SANGLI STAND";
			cout<<"\n\n\tRemaining fees :"<<rem_fees1<<"/-";
			break;
	}
	//cin.ignore();
	//getline(cin,source);
	//cout<<"\n\tEnter faculty destination : ";
	//cin.ignore();
	//getline(cin,destin);
	
	}
	
	void displayData()
	{
	float total_fees;
	static int j=1;
	
	cout<<j<<"\t"<<name<<"   "<<empid<<"\t\t "<<depart<<"\t\t "<<fees<<"\t\t "<<rem_fees1<<"\t Source"<<destiny<<"\t RIT Islampur"<<endl;
	j++;
	}
	
		void pay_fees()
	{
		int a;
		cout<<"\n\n\t Previous Paid fees : Rs "<<fees<<"/-";
		cout<<"\n\n\t  Enter amount to pay : ";
		cin>>a;
		fees=fees+a;
		cout<<"\n\n\t  Currently paid : Rs "<<a<<"/-";
		cout<<"\n\n\t  Total fees paid : Rs "<<fees<<"/-";
		cout<<"\n\n\tRemaining fees :"<<rem_fees1<<"/-";
	}
	
	void update()
	{
		cout<<"\n\n\tEnter name of faculty : ";
		cin.ignore();
    	getline(cin,name);
		cout<<"\n\tEnter current department : ";
		cin.ignore();
    	getline(cin,depart);
		cout<<"\n\ttEnter faculty source place : ";
    	cin.ignore();
    	getline(cin,source);
	    cout<<"\n\tEnter faculty destination : ";
	    cin.ignore();
    	getline(cin,destin);
	}
};

void heading();
void heading()
{
	cout<<"\n\n\t\t\t\t*BUS MANAGEMET SYSTEM*";
	//cout<<"\n\t\t\t\t\t\t-----------------";
}

int main()
{
	//admin a;
	int i=0,p=0;
	int u=0,v=0;
	student s[100];
	faculty f[100];
	int ch;

	while(1)
	{
		int x=0;
		system("cls");
	    heading();
		cout<<"\n\n\n\t\t\t\t1.Create account\t\t2.Pay bus fees\n \t\t\t\t3.Update account\t\t4.All information\n\t\t\t\t5.All payments\t\t\t6.Exit";
		cout<<"\n\n\t\t\t\t\t Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:int ch;
			system("cls");
			cout<<"\n\n\t\t\t\t\t  Choose account type";
			cout<<"\n\t\t\t\t\t  -------------------";
			cout<<"\n\n\t\t\t    1.Student account\t\t  2.Faculty account";
			cout<<"\n\n\t\t\t\t\t  Enter your choice : ";
			cin>>ch;
			if(ch==1)
			{
				cout<<"\n\n\n\tStudent "<<i+1<<")";
			s[i].getData();
			i++;
			cout<<"\n\n\t\t\t\t---ACCOUNT CREATED SUCCESFULLY---";
			cout<<"\n\n\t\t\t\t    Enter any key to continue";
			getch();
			}
			else if(ch==2)
			{
				cout<<"\n\n\n\tfactuly "<<p+1<<")";
				f[p].getData();
				p++;
				cout<<"\n\n\t\t\t\t---ACCOUNT CREATED SUCCESFULLY---";
				cout<<"\n\n\t\t\t\t    Enter any key to continue";
				getch();
			}
			else
			cout<<"\n\n\n\n\t---INVALID CHOICE---";
			break;
			
			
			
			case 2:
				system("cls");
				cout<<"\n\n\t\t\t\t\t  Choose your account type";
				cout<<"\n\t\t\t\t\t  ------------------------";
		    	cout<<"\n\n\t\t\t\t1.Student\t\t\t2.Faculty";
				cout<<"\n\n\t\t\t\t\t  Enter your choice :- ";
		    	cin>>ch;
			if(ch==1)
			{
				int roll;
				cout<<"\n\n\n\t Enter PRN no : ";
				cin>>roll;
				for(int a=0;a<=i;a++)
				{
				if(s[a].PRN==roll)
				{
			      s[a].pay_fees();
			      x++;
			    }
			    }
			    if(x==0)
			    cout<<"\n\n\t\t\t\t\t Account not found";
			}
			else if(ch==2)
			{
				int roll;
				cout<<"\n\n\n\tEnter id no : ";
				cin>>roll;
				for(int a=0;a<=p;a++)
				{
				
				if(f[a].empid==roll)
				{
			       f[a].pay_fees();
			       x++;
			    }
			    }
			    if(x==0)
			    cout<<"\n\n\t\t\t\t\tAccount not found";
			}
			
			else
		    cout<<"\n\n\t\t\t\t\t    ---INVALID CHOICE---";
			cout<<"\n\n\n\t\t\t\t          Press any key to continue";
	    	getch();
			break;
			
			case 3:
				system("cls");
				cout<<"\n\n\t\t\t\t\t  Choose your account type";
				cout<<"\n\t\t\t\t\t  ------------------------";
		    	cout<<"\n\n\t\t\t\t1.Student\t\t\t2.Faculty";
				cout<<"\n\n\t\t\t\t\t  Enter your choice : ";
				cin>>ch;
				if(ch==1)
				{
					cout<<"\n\n\n\t  Enter PRN no : ";
					cin>>ch;
					for(int a=0;a<=i;a++)
			    	{
				       if(s[a].PRN==ch)
				       {
			           s[a].update();
			           x++;
			           cout<<"\n\n\t\t\t\t---ACCOUNT UPDATED SUCCESFULLY---";
			           }
			        } 
			        if(x==0)
				       cout<<"\n\n\t  Account not found";
				}
				
				else if(ch==2)
				{
					cout<<"\n\n\n\t  Enter id no : ";
					cin>>ch;
					for(int a=0;a<=p;a++)
			    	{
				        if(f[a].empid==ch)
				        {
			            f[a].update();
			            x++;
			            cout<<"\n\n\t\t\t\t---ACCOUNT UPDATED SUCCESFULLY---";
			            }
			        }
			    if(x==0)
				cout<<"\n\n\t  Account not found";
				}
				else
				cout<<"\n\n\t\t\t\t\t     ---INVALID CHOICE---";
			    cout<<"\n\n\n\t\t\t\t\t  Press any key to continue";
	    	    getch();
	        break;     
	
			case 4:
				system("cls");
			cout<<"\n\n\t\t\t\t---ALL INFORMATION---";
			if(i==0)
			cout<<"\n\n\t\t\t\tNo data found";
			
			cout<<"\nSr.no\tName            PRN   \tClass\tFees\trem_fees\tSource\tDestination \n"<<endl;
			for(int j=0;j<i;j++)
			{
//				cout<<"\n\n\tStudent "<<j+1<<")";
				
				s[j].displayData();
			}
			    cout<<"\n\n\t\t\t\t---FACULTY INFO---";
			    if(p==0)
			cout<<"\n\n\tNo data found";
			    
				cout<<"\nSr.no\tName            Employeeid\tDepartment\tFees\t  rem_fees\tSource\tDestination \n"<<endl;
				for(int j=0;j<p;j++)
			{
//				cout<<"\n\n\tFaculty "<<j+1<<")";
				
				f[j].displayData();
			}
			cout<<"\n\n\t\t\t\t  Press any key to continue";
			getch();
			break;
			
			case 5:
				system("cls");
				cout <<"\n\n\t\t\t\t--Student fees data--";
				
			v=0;u=0;	
			for(int j=0;j<i;j++)
			{
				if(s[j].fees<=4000)
				{
					if(v==0)
					{
						cout<<"\n\n\t\t\t\tstudent paid less than 4000";
						v++;u++;
					}
				cout<<"\n\n\t Student name"<<s[j].name<<"\n\t Paid fees : "<<s[j].fees;
				cout<<"\n\t Remaining fees :"<<s[j].rem_fees;
			    }
			}
				
			v=0;
			for(int j=0;j<i;j++)
			{
				
				if(s[j].fees>=4001&&s[j].fees<=6000)
				{
					if(v==0)
					{
						cout<<"\n\n\t\t\t\tstudent paid between 4001 to 6000";
						v++;u++;
					}
					
				cout<<"\n\n\t Student name"<<s[j].name<<"\n\t Paid fees : "<<s[j].fees;
				cout<<"\n\t Remaining fees :"<<s[j].rem_fees;
			    }
			}
			
			v=0;
				for(int j=0;j<i;j++)
			{
				if(s[j].fees>=6001&&s[j].fees<=8000)
				{
					if(v==0)
					{
						cout<<"\n\n\t\t\t\tstudent paid between 6001 to 8000";
						v++;u++;
					}
				cout<<"\n\n\t Student name"<<s[j].name<<"\n\t Paid fees : "<<s[j].fees;
				cout<<"\n\t Remaining fees :"<<s[j].rem_fees;
			    }
			}
			
			v=0;
			for(int j=0;j<i;j++)
			{
				if(s[j].fees==8000)
				{
					if(v==0)
					{
						cout<<"\n\n\tAll fees paid";
						v++;u++;
					}
				cout<<"\n\n\tStudent name :"<<s[j].name<<"\n\t Paid fees: "<<s[j].fees;
			    }
			}
			if(u==0)
			cout <<"\n\n\t\t\t\tNo data found";
			
			
			cout <<"\n\n\n\n\t--Faculty fees data--";
			v=0;u=0;	
			
			for(int j=0;j<p;j++)
			{
				if(f[j].fees<=4000)
				{
					if(v==0)
					{
						cout<<"\n\n\t\t\t\tFacullty paid less than 4000";
						v++;u++;
					}
				cout<<"\n\n\t Faculty Name :"<<f[j].name<<"\n\t Paid fees :"<<f[j].fees;
				cout<<"\n\t Remaining fees :"<<f[j].rem_fees1;
			    }
			}
			
			v=0;
			for(int j=0;j<p;j++)
			{
				if(f[j].fees>=4001&&f[j].fees<=6000)
				{
					if(v==0)
					{
						cout<<"\n\n\t\t\t\tFacullty paid between 4001 to 6000";
						v++;u++;
					}
				cout<<"\n\n\t Faculty Name :"<<f[j].name<<"\n\t Paid fees :"<<f[j].fees;
				cout<<"\n\t Remaining fees :"<<f[j].rem_fees1;
			    }
			}
			
			v=0;
				for(int j=0;j<p;j++)
			{
				if(f[j].fees>=6001&&f[j].fees<=8000)
				{
					if(v==0)
					{
						cout <<"\n\n\t\t\t\tFacullty paid between 6001 to 8000";
						v++;u++;
					}
				cout<<"\n\n\t Faculty Name :"<<f[j].name<<"\n\t Paid fees :"<<f[j].fees;
				cout<<"\n\t Remaining fees :"<<f[j].rem_fees1;
			    }
			}
				
			v=0;
			for(int j=0;j<p;j++)
			{
				if(f[j].fees==8000)
				{
					if(v==0)
					{
						cout<<"\n\n\tAll fees paid";
						v++;u++;
					}
				cout<<"\n\n\tFaculty Name :"<<f[j].name<<"\n\t Paid Fees : "<<f[j].fees;
			    }
			}
			if(u==0)
			cout <<"\n\n\t\t\t\tNo data found";
			
			cout<<"\n\n\n\t\t\t\t\t    Press any key to continue";
			getch();
			break;
			
			case 6:exit(0);
			break;
			default:cout<<"\n\n\n\t\t\t\t\t      ---INVALID CHOICE---";
			cout<<"\n\n\t\t\t\t\t    Press any key to continue";
			getch();
		}
	}
}
