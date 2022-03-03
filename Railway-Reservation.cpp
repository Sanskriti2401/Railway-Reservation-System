
// ********************************* R A I L W A Y   R E S E R V A T I O N  S Y S T E M  *******************************


#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

class login  // Class for Login
{
	public:
			char id[50], pass[10];
			char name[50],mob[10],addr[100];
			
			void get_details()
			{
				cout<<"\n\n\n\n\n\t\t\t\t  ENTER NAME : ";
				cin.ignore();
				cin>>name;
				
				cout<<"\n\n\t\t\t\t  ENTER MOBILE NUMBER : ";
				cin>>mob;
				
				cout<<"\n\n\t\t\t\t  ENTER YOUR ADDRESS : ";
				cin.ignore();
				cin>>addr;
			}
			void get_id()
			{
				cout<<"\n\n\t\t\t\t  ENTER ID : ";
    			cin>>id;
			}
		
			void get_pass()
			{
    			cout<<"\n\n\t\t\t\t  ENTER  PASSWORD : ";
    			cin>>pass;
			}
			
			void show_details()
			{
				cout<<"\n\n\t\t\t\t  NAME: "<<name;
				
				cout<<"\n\n\t\t\t\t  MOBILE NUMBER: "<<mob;
				
				cout<<"\n\n\t\t\t\t  ADDRESS: "<<addr;
			}
			
			void show_id()
			{
				cout<<"\n\n\t\t\t\t  ID : "<<id;
			}
		
			void show_pass()
			{
    			cout<<"\n\n\t\t\t\t  PASSWORD : "<<pass;
			}
	
	
};

class detail  // Class containing details of Trains Available
{
	public:
		
			int tno, c1, c1fare, c2, c2fare, cu_c1, cu_c2;
			
   	 		char tname[100], bp[100], dest[100];
    	
    		void getdetail()
   			{
        		system("cls");
				
				cout<<"\n\n\n\n\t\t\t\t  ENTER THE FOLLOWING DETAILS AS : ";
        		cout<<"\n\n\t\t\t\t  TRAIN NO. : ";
        		cin>>tno;
        		
        		cout<<"\n\n\t\t\t\t  TRAIN NAME : ";
        		cin.ignore();
				cin.getline(tname,100);
				
        		cout<<"\n\n\t\t\t\t  BOARDING  POINT: ";
        		gets(bp);
        		
       			cout<<"\n\n\t\t\t\t  DESTINATION  POINT: ";
        		gets(dest);
        		
        		cout<<"\n\n\t\t\t\t  NO. OF SEATS IN FIRST CLASS AND FARE PER TICKET : ";
        		cin>>c1>>c1fare;
        		
        		cout<<"\n\n\t\t\t\t  NO. OF SEATS IN SECOND CLASS AND FARE PER TICKET : ";
       			cin>>c2>>c2fare;
       			
       			cu_c1=c1;
       			
       			cu_c2=c2;
   		}
   		
    	void displaydetail()
    	{
       		
       		
       		cout<<"\n\n\t\t\t\t************************************  TRAINS AVAILABLE  ************************************";
			   
			cout<<"\n\n\t\t\t\t  TRAIN NO. : "<<tno;
       		
			cout<<"\n\n\t\t\t\t  TRAIN NAME : "<<tname;
			
			cout<<"\n\n\t\t\t\t  BOARDING POINT : "<<bp;
			
			cout<<"\n\n\t\t\t\t  DESTINATION POINT : "<<dest;
			
        	cout<<"\n\n\t\t\t\t  NO. OF SEATS IN FIRST CLASS AND FARE PER TICKET : "<<c1<<"\t"<<c1fare;
        	
			cout<<"\n\n\t\t\t\t  NO. OF SEATS IN SECOND CLASS AND FARE PER TICKET : "<<c2<<"\t"<<c2fare;
			
			cout<<"\n\n\t\t\t\t  AVAILABLE SEATS IN FIRST CLASS SEATS : "<<cu_c1;
			
			cout<<"\n\n\t\t\t\t  AVAILABLE SEATS IN SECOND CLASS SEATS : "<<cu_c2;
			
			cout<<"\n\n\t\t\t\t**********************************************************************************************";
   		}
				 	
};


class reserve // Class for Reservation details
{
	public:
	
    		int tno, age[20], n, i, ticket_no;
    		
    		char tname[100], bp[10], dest[100], pname[10][100], clas[2];
    		
    		int d, m, y;
    		
			float amount;
	
    		void get_reserve()
    		{
        		system("cls");
        
				cout<<"\n\n\n\n\t\t\t\t  ENTER THE FOLLOWING DETAILS AS : ";
		
        		cout<<"\n\n\t\t\t\t  BOARDING  POINT : ";
        		cin.ignore();
				gets(bp);
		
        		cout<<"\n\n\t\t\t\t  DESTINATION POINT : ";
       			gets(dest);
        
        		cout<<"\n\n\t\t\t\t  NO. OF SEATS REQUIRED : ";
        		cin>>n;
        	
        		for(i=0;i<n;i++)
        		{
            
					cout<<"\n\n\t\t\t\t  PASSENGER  NAME : ";
					cin.ignore();
            		gets(pname[i]);
            	
            		cout<<"\n\t\t\t\t  PASSENGER  AGE : ";
            		cin>>age[i];
        		}
        
        		cout<<"\n\n\t\t\t\t  ENTER THE CLASS (F for First class and S for second class) IN WHICH YOU WANT RESERVATION : ";
        		cin>>clas;
        
       			cout<<"\n\n\t\t\t\t  DATE OF TRAVEL : ";
        		cin>>d>>m>>y;
        		
        	
    		}
    
    		void display_reserve()
   			{
    			system("cls");
    			
    			cout<<"\n\n\n\n\t\t\t\t************************************  RESERVATION DETAILS  ************************************";
    	
    			cout<<"\n\n\t\t\t\t  TICKET NUMBER : "<<ticket_no;
    	
        		cout<<"\n\n\t\t\t\t  TRAIN NO. : "<<tno;
        
        		cout<<"\n\n\t\t\t\t  TRAIN NAME : "<<tname;
        
        		cout<<"\n\n\t\t\t\t  BOARDING POINT : "<<bp;
        
        		cout<<"\n\n\t\t\t\t  DESTINATION POINT : "<<dest;
        
        		cout<<"\n\n\t\t\t\t  NO. OF SEATS REQUIRED : "<<n;
        
        		for(i=0; i<n; i++)
        		{
            		cout<<"\n\n\t\t\t\t  PASSENGER  NAME : "<<pname[i];
            
            		cout<<"\t\t  PASSENGER  AGE : "<<age[i];
        		}

        		cout<<"\n\n\t\t\t\t  RESERVATION CLASS : "<<clas;
        
        		cout<<"\n\n\t\t\t\t  DATE OF TRAVEL : "<<d<<"-"<<m<<"-"<<y;
        
        		cout<<"\n\n\t\t\t\t  TOTAL FARE OF JOURNEY : "<<amount<<endl;
        		
        		cout<<"\n\n\t\t\t\t*********************************************************************************************";

     
    		}
};



class canc : public reserve  // Inhertited publically from reserve class
{
	public: 
			int pnr, dd, mm, yy,tn;
			
			float Fc, Sc;
		
    		void get_cancel()
			{
        		system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t  ENTER THE DETAILS AS FOLLOWS :";
				
				cout<<"\n\n\t\t\t\t  TICKET NO. : ";
        		cin>>tn; 
				       		
        		cout<<"\n\n\t\t\t\t  ENTER TRAIN NO. : ";
        		cin>>pnr;
        		
        		cout<<"\n\n\t\t\t\t  DATE OF CANCELLATION : ";
        		cin>>dd>>mm>>yy;
        		
    		}
    
    		void display_cancel()
    		{
        		Fc=120;
        		
				Sc=200;
				
				system("cls");
				
				cout<<"\n\n\n\n\t\t\t\t*************************TICKET CANCELLED*************************";
				
				cout<<"\n\n\t\t\t\t  TRAIN NO. : "<<pnr;
				
        		cout<<"\n\n\t\t\t\t  TRAIN NAME : "<<tname;
        		
        		cout<<"\n\n\t\t\t\t  BOARDING POINT : "<<bp;
        		
				cout<<"\n\n\t\t\t\t  DESTINATION POINT : "<<dest;
				
        		cout<<"\n\n\t\t\t\t  YOUR CLASS : "<<clas;
        	
        		cout<<"\n\nt\t\t\t  NUMBER OF SEATS TO BE CANCELLED : "<<n;
        	
        		for(i=0; i<n; i++)
        		{
            		cout<<"\n\n\t\t\t\t  PASSENEGR NAME : ";
            		puts(pname[i]);
            	
            		cout<<"\n\t  AGE : "<<age[i];
       			}
       		
        		cout<<"\n\n\t\t\t\t  DATE OF CANCELLATION :"<<d<<"-"<<m<<"-"<<y;
        	
        		if(strcmp(clas,"F")==0)
       			{
					cout<<"\n\n\t\t\t\t  CANCELLATION  CHARGE : Rs."<<Fc;
				
					cout<<"\n\n\t\t\t\t  YOU WILL GET Rs."<< amount-n*Fc <<" BACK IN YOUR ACCOUNT IN 2-3 DAYS ";
        	
				}
				
				else
				{
					cout<<"\n\n\t\t\t\t  CANCELLATION  CHARGE: Rs."<<Sc;
					
					cout<<"\n\n\t\t\t\t  YOU WILL GET Rs."<<amount-n*Sc<<" BACK IN YOUR ACCOUNT IN 2-3 DAYS";
			
				}
    		}

};



class food_menu  //Class to book Food
{
	public:	float bf,ln,dn,snk,price;
			int arr[5];
			/*void set_price()
			{
				cout<<"\t\t\t\tENTER THE PRICE OF BREAKFAST(SANDWICH): ";
				cin>>bf;
				cout<<"\n\n\t\t\t\tENTER THE PRICE OF LUNCH(RICE,DAL,MIX VEGETABLE,SALAD): ";
				cin>>ln;
				cout<<"\n\n\t\t\t\tENTER THE PRICE OF DINNER (ROTI,SHAHI PANNER,SALAD): ";
				cin>>dn;
				cout<<"\n\n\t\t\t\tENTER THE PRICE OF SNACKS(COKE,CHIPS,CAKE): ";
				cin>>snk;
			}*/
			
			void Show_price()
			{
				cout<<"\n\n\n\n\t\t\t\t  BREAKFAST ( SANDWICH ) : 100 ";
				cout<<"\n\n\n\t\t\t\t  LUNCH ( RICE, DAL, MIX VEGETABLE, SALAD) : 150 ";
				cout<<"\n\n\n\t\t\t\t  DINNER ( ROTI, SHAHI PANNER, SALAD) : 150 ";
				cout<<"\n\n\n\t\t\t\t  SNACKS( COKE , CHIPS , CAKE ) : 120 ";
			}
			
			void Show_menu()
			{
				cout<<"\n\n\t\t\t\t1. BREAKFAST: SANDWICH  ";
				cout<<"\n\n\t\t\t\t2. LUNCH : RICE, DAL, MIXVEGETABLE, SALAD ";
				cout<<"\n\n\t\t\t\t3. DINNER: ROTI, SHAHI PANEER, SALAD ";
				cout<<"\n\n\t\t\t\t4. SNACKS: COKE, CHIPS, CAKE ";
			}	
			
			void select_food()
			{
				int i,ch;
				for(i=1;i<5;i++)
				{
					cout<<"\n\n\t\t\t\t  DO YOU WANT MEAL "<<i <<"? PRESS :- 1.YES 0.NO  ";
					cin>>ch;
					arr[i]=ch;
					
				}
			}
			float printPrice()
			{
				price=arr[1]*100+arr[2]*150+arr[3]*150+arr[4]*120;
				return price;
				
			}
						
};

void admin();
void user();
void reserve_ticket();
void enquiry();
void reserve_detail();
void database();
void Food();
void Cancel();
void get_pnr();
void user_database();
void passenger_data();


// Function for Admin Login
void admin()
{
	char pass[20];
	char password[]="admin";
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t  ENTER THE PASSWORD : ";
	cin.ignore();
	cin>>pass;
	
	if(strcmp(pass,password)!=0)
	{
		cout<<"\n\n\t\t\t\t  ENTER  THE  PASSWORD  CORRECTLY... YOU  CANNOT  LOGIN  IN  THIS  MODE. \n";
		getch();
		system("cls");
		cout<<"\n\n";
		//goto P;
		
	}
		
	else
    {
        int c;
        cout<<"\n\n\t\t\t\t*************************  ADMIN  LOGIN  SUCCESSFULLY  *************************";
       	getch();
		do
		{
			
        	system("cls");
			cout<<"\n\n\n*************************************************************************************************************************************************************************************************************\n";
  			cout<<"\n**********************************************************************  W E L C O M E   T O   T H E   A D M I N   M E N U  *************************************************************************************\n";
    		cout<<"\n****************************************************************************************************************************************************************************************************************\n\n";
           	
			cout<<"\n\n\n\t\t\t\t  1. ENTER DETAILS IN TRAIN DATABASE \n";
    		cout<<"\n\n\t\t\t\t  2. PRINT TRAIN DATABASE \n";
    		cout<<"\n\n\t\t\t\t  3. PRINT USER DATABSE \n";
    		cout<<"\n\n\t\t\t\t  4. PRINT PASSENGER DATABSE \n";
    		cout<<"\n\n\t\t\t\t  5. LOG  OUT \n";
    		cout<<"\n\n\t\t\t\t  ENTER CHOICE : ";
    		cin>>c;
    		
    		switch(c)
    		{
    			case 1:	database();
						system("cls");
						break;
							
				case 2:	enquiry();
						getch();
						break;
								
				case 3: user_database();
						break;
						
				case 4 : passenger_data();
						 break;
						 
				case 5 : break;
						 //goto h;
			}
			
		}while(1);
	}
					
}

// Function for User Login
void user()
{
	login a, b;
	
	char id[20], password[10];
	
	int d=0, c;
	
	system("cls");
	
	cout<<"\n\n\n*****************************************************************************************************************************************************************************************************************\n";
    cout<<"\n*************************************************************************  W E L C O M E   T O   T H E   U S E R   M E N U  **************************************************************************************\n";
    cout<<"\n******************************************************************************************************************************************************************************************************************\n\n";
    
	cout<<"\n\n\n\t\t\t\t1.  LOGIN \n";
    cout<<"\n\n\t\t\t\t2.  CREATE  ACCOUNT\n\n";
    cout<<"\n\n\t\t\t\t  ENTER CHOICE : ";
    cin>>c;
    
    
    if(c==1)
    {
j:    	system("cls");

		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t  ENTER  ID : ";
    	cin>>id;
    	
    	cout<<"\n\n\n\n\t\t\t\t  ENTER  PASSWORD : ";
    	cin>>password;
    	
    	ifstream f;
    	f.open("login.txt");
    	
    	if(!f)
    		cout<<"\t\t\t\t  FILE NOT FOUND";
    		
    	else
    	{
    		f.read((char *)&b,sizeof(b));
    		
    		while(!f.eof())
    		{
    			if((strcmp(b.id,id)==0)&&(strcmp(b.pass,password)==0))
    			{
			 				
	  				cout<<"\n\n\n\t\t\t\t******************************LOGIN SUCCESSFUL******************************";
					
				
					
					do
					{
						getch();
						system("cls");
						cout<<"\n\n\n\n\n\n\n\t\t\t\t1. RESERVE  TICKET" ;
						cout<<"\n\n\n\t\t\t\t2. CANCEL  TICKET ";
						cout<<"\n\n\n\t\t\t\t3. ORDER FOOD ";
						cout<<"\n\n\n\t\t\t\t4. ENQUIRY ABOUT TRAINS  ";
						cout<<"\n\n\n\t\t\t\t5. RESERVATION  DEATILS ";
						cout<<"\n\n\n\t\t\t\t6. GET PNR ";
						cout<<"\n\n\n\t\t\t\t7. LOG OUT ";
					
               			cout<<"\n\n\n\t\t\t\t ENTER  CHOICE: ";
                		cin>>c;
               		
                		switch(c)
                		{
                			case 1:
                    				reserve_ticket();
                    				break;
                    				
                			case 2:
                    				Cancel();
                    				break;
                    				
                    		case 3: 
                    				Food();
                    				break;
                    				
                			case 4:	
                    				enquiry();
                    				break;
                    		
							case 5: reserve_detail();
                    				break;	
                    	
                    			
                    		case 6: get_pnr();
                    				break;
                    		
                    		case 7 : break;
								//	goto h;
                		}
						
					}while(1);
				}
				else
				
			 		d=1;
			 		
			    f.read((char *)&b,sizeof(b));		
			}
		
			if(d==1)
			{
				cout<<"\n\n\t\t\t\t  ID AND PASSWORD INVALID!!";
				getch();
				system("cls");
				
			}
			
				
			
			f.close();
		    	
    		
		}
    
    }
    else
    {
		system("cls");
		
		ofstream f;
    	f.open("login.txt",ios::app);
    	a.get_details();
    	a.get_id();
    	a.get_pass();
    			
    	f.write((char *)&a, sizeof(a));
    	
    	f.close();
    	
    	cout<<"\n\n\t\t\t\t****************************** ACCOUNT  CREATED!! ******************************";
    	cout<<"\n\n\n\t\t\t\t****************************** LOGIN  NOW!! ******************************";
    	getch();
    	goto j;
    	
    
    	
	}
}


// Function For Reservation of Tickets
void reserve_ticket()
{
	int d=0, add, j=0;
	
	float amount;
	
	detail a, c;
	reserve b;
	
	fstream f1,f2;

	
	f1.open("trains.txt",ios::in|ios::out);
	f2.open("passengers.txt",ios::in|ios::out|ios::app);
	
	f1.seekg(0);
	
	b.get_reserve();
	
	f1.read((char *)&a,sizeof(a));
	
	while(!f1.eof())
	{
		if((strcmp(b.bp,a.bp)==0) && (strcmp(b.dest,a.dest)==0))
		{
			d=1;
			
			if((strcmp(b.clas,"F")==0)) // If Reservation is in First Class
			{
				if(a.cu_c1>=b.n)
				{
					strcpy(b.tname,a.tname);
					b.tno=a.tno;
	
					amount=b.n*a.c1fare;
					b.amount=amount;
					
					strcpy(c.bp,a.bp);
					strcpy(c.dest,a.dest);
					c.c1=a.c1;
					c.c1fare=a.c1fare;
					c.c2=a.c2;
					c.c2fare=a.c2fare;
					c.cu_c2=a.cu_c2;
					strcpy(c.tname,a.tname);
					c.tno=a.tno;
					c.cu_c1=a.cu_c1-b.n; // Updating number of seats available in First class
					
					add=f1.tellg();
                   	f1.seekp(add-(sizeof(a)));
                    f1.write((char *) &c,sizeof(c));
					
					
					cout<<"\n\n\t\t\t\t  YOU MUST PAY : "<<amount;
					
					srand(time(0));
					b.ticket_no=rand();
        			cout<<"\n\n\n\t\t\t\t  GENERATED TICKET NUMBER : "<<b.ticket_no;
        			
					f2.write((char *) &b,sizeof(b));
					
					cout<<"\n\n\n\t\t\t\t................................RESERVATION SUCCESSFULL................................\n";
					
					
					getch();
					b.display_reserve();
					break;
					
				}
				else
				{
					cout<<"\n\n\t\t\t\t................................SEATS NOT AVAILABLE................................";
					
					cout<<"\n\n\t\t\t\t................................NO RESERVATION................................";
					
					break;
					
				}
					
			}
			else
			{
				if((strcmp(b.clas,"S")==0)) // If Reservation is in Second Class
				{
					if(a.cu_c2>=b.n)
					{
						strcpy(b.tname,a.tname);
						b.tno=a.tno;
					
						
						amount=b.n*a.c2fare;
						b.amount=amount;
						
						strcpy(c.bp,a.bp);
						strcpy(c.dest,a.dest);
						c.c1=a.c1;
						c.c1fare=a.c1fare;
						c.c2=a.c2;
						c.c2fare=a.c2fare;
						c.cu_c1=a.cu_c1;
						strcpy(c.tname,a.tname);
						c.tno=a.tno;
						c.cu_c2=a.cu_c2-b.n; // Updating number of seats available in Second class
					
					
						add=f1.tellg();
                   		f1.seekp(add-(sizeof(a)));
                    	f1.write((char *) &c,sizeof(c));
					
                		cout<<"\n\n\t\t\t\t  YOU MUST PAY : "<<amount;
                		f2.write((char *) &b,sizeof(b));
                		
						cout<<"\n\n\t\t\t\t................................RESERVATION SUCCESSFULL................................";
						break;
					
					}
					else
					{
						cout<<"\n\n\t\t\t\t................................SEATS NOT AVAILABLE................................";
						
						cout<<"\n\n\t\t\t\t................................NO RESERVATION................................";
						
						break;
					
					}
					
				}
				
			}
			
		}
		
		f1.read((char *)&a,sizeof(a));
	}
	
	f1.close();
	f2.close();
	
	if(d==0)
		cout<<"\n\n\t\t\t\t................................TRAIN NOT FOUND................................";
	//goto kk;
	
	
}


//Function for cancellation of ticket
void Cancel()
{
	detail a,d;
	reserve b;
    canc c;
    
    int add;
    
    fstream f1,f2;
    ofstream f;
    
    f1.open("trains.txt",ios::in|ios::out);
    f1.seekg(0);
    
    f2.open("passengers.txt",ios::in|ios::out);
    
    f.open("pass.txt");
    f.seekp(0);
    
	c.get_cancel();
	
	f2.read((char *) & b,sizeof(b));
	
	while(!f2.eof())
	{
		
		if((c.tn==b.ticket_no) && (c.pnr==b.tno))
		{
			f1.read((char *)& a,sizeof(a));
			while(!f1.eof())
			{
				
				if(c.pnr==a.tno)
				{
					if((strcmp(c.clas,"F")==0)) // If Reservation is in First Class
					{
						strcpy(d.tname,a.tname);
						d.tno=a.tno;
						strcpy(d.bp,a.bp);
						strcpy(d.dest,a.dest);
						d.c1=a.c1;
						d.c1fare=a.c1fare;
						d.c2=a.c2;
						d.c2fare=a.c2fare;
						d.cu_c2=a.cu_c2;
						d.cu_c1=a.cu_c1+b.n; // Updating number of seats available in First class
					
						add=f1.tellg();
                   		f1.seekp(add-(sizeof(a)));
                   		
                    	f1.write((char *) &d,sizeof(d));
                	}
                	else
                	{
                		strcpy(d.tname,a.tname);
						d.tno=a.tno;
						strcpy(d.bp,a.bp);
						strcpy(d.dest,a.dest);
						d.c1=a.c1;
						d.c1fare=a.c1fare;
						d.c2=a.c2;
						d.c2fare=a.c2fare;
						d.cu_c1=a.cu_c1;
						d.cu_c2=a.cu_c2+b.n; // Updating number of seats available in First class
					
						add=f1.tellg();
                   		f1.seekp(add-(sizeof(a)));
                   		
                    	f1.write((char *) &d,sizeof(d));
                		
					}
					
					
					
				}
				f1.read((char *)& a,sizeof(a));
				
			}
		}
		else
		{
			f.write((char *) &b,sizeof(b));
			
			
		}
		f2.read((char *) & b,sizeof(b));
		
	}
	
	f1.close();
	f2.close();
	f.close();
	
	remove("passengers.txt");
	rename("pass.txt","passengers.txt");
	cout<<"\n\n\t\t\t\t................................RESERVATION CANCELLED................................";
	
}

//Function for enquiring about available trains
void enquiry()
{

    ifstream f;
    
    f.open("trains.txt");

    detail a;
    
    system("cls");
    
    f.read((char *) & a,sizeof(a));
    
    while(!f.eof())
    {
		
		a.displaydetail();
		f.read((char *) & a,sizeof(a));
		
        
    };
    
    f.close();
}


// Function for getting Reservation details
void reserve_detail()
{
	system("cls");
	
	int t, p=0;
	
	reserve a;
	
	cout<<"\n\n\n\n\n\n\t\t\t\t  ENTER TICKET NUMBER : ";
	cin>>t;
	
	ifstream f;
	f.open("passengers.txt");
	
	f.read((char *)&a, sizeof(a));
	
	while(!f.eof())
	{
	
		
		if(t==a.ticket_no)
		{
			p=1;
			
			a.display_reserve();
			break;
		}
		
			f.read((char *)&a, sizeof(a));
		
	}
	
	f.close();	
	if(p==0)
		cout<<"\n\n\t\t\t\t  ................................  NO RESERVATION FOUND ................................";	
	
	
}


// Function for admin to add trains in database
void database()
{
	system("cls");
	
	detail a;
	
	ofstream f;
	
	f.open("trains.txt",ios::app);
	
	a.getdetail();
	f.write((char *)&a, sizeof(a));
	a.displaydetail();
	getch();
	
    	
    f.close();

	
	
}


// Function for ordering Food
void Food()
{
	int ch;
	food_menu ff;
	
	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\t\t\t\t  1. SEE THE FOOD MENU \n\n\n\n\t\t\t\t  2. RETURN TO MAIN MENU\n";
	cout<<"\n\n\n\n\t\t\t\t  ENTER YOUR CHOICE : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
				//Displaying Menu
				system("cls");
				ff.Show_price();
				printf("\n\n");
				
				//Selection of food items
				
				ff.select_food();
				//Printing total price
				cout<<"\n\n\t\t\t\t  TOTAL PRICE IS: "<<ff.printPrice();
		
				break;
				
		case 2: break;
	}
}

// Function to see the record of all users
void user_database()
{
	fstream m;
	
	m.open("login.txt",ios::in|ios::out);
	
	login l;
	system("cls");
	m.read((char *) & l,sizeof(l));
									
	while(!m.eof())
	{
		cout<<"\n\n\t\t\t\t******************************  USER  DETAILS  ******************************";
		
		l.show_details();
		l.show_id();
		
		cout<<"\n\n\t\t\t\t*****************************************************************************";			
		m.read((char *) & l,sizeof(l));
	}
	m.close();
	
	getch();
	
}


// Function to see the reservation records of all passengers
void passenger_data()
{
	ifstream p;
	
	p.open("passengers.txt");
	
	reserve a;
	system("cls");
	p.read((char *) & a,sizeof(a));
									
	while(!p.eof())
	{
	
		a.display_reserve();
			
		p.read((char *) & a,sizeof(a));
		
	}
	getch();
	
	p.close();
	
}

// Function to find PNR of train from its name
void get_pnr()
{
	ifstream p;
	char n[20];
	int  f=0;
	
	p.open("trains.txt");
	
	detail a;
	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\t\t\t\t  ENTER  TRAIN  NAME : ";
	cin.ignore();
	cin.getline(n,20);
		
	p.read((char *) & a,sizeof(a));
									
	while(!p.eof())
	{
		if(strcmp(n,a.tname)==0)
		{
			f=1;
			cout<<"\n\n\n\n\t\t\t\t  PNR  OF  TRAIN : "<<a.tno;
			break;
			
		}		
		p.read((char *) & a,sizeof(a));
		
	}
	
	if(f==0)
		cout<<"\n\n\t\t\t\t................................  NO  TRAIN  FOUND  OF SUCH TRAIN  ................................ ";
		
	
	p.close();
	
}



int main()
{
	int ch;
	
	cout<<"\n\n\n\n\n\n*******************************************************************************************************************************************************************************************************************";
    cout<<"\n*****************************************************************  W E L C O M E   T O   R A I L W A Y   R E S E R V A T I O N   S Y S T E M  ********************************************************************";
    cout<<"\n\n*******************************************************************************************************************************************************************************************************************";
    
	do
    {
        cout<<"\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  M A I N   M E N U  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        
		cout<<"\n\n\t\t\t\t1. ADMIN  MODE\n\n\t\t\t\t2. USER  MODE\n\n\t\t\t\t3. EXIT\n";
        cout<<"\n\n\t\t\t\tENTER  CHOICE : ";
        cin>>ch;
        
		cout<<endl;
        switch(ch)
		{
        
			case 1:	admin();
					break;
				
            		
        	case 2:
            		user();
            		break;
        
			case 3:
            		exit(0);
        }
    }
    while(1);

	return 0;
}


