#include<iostream>
#include <fstream>
using namespace std;
int login();
int registr();
int forgot();
class Student
{
	private:
		int roll1;
		string name1;
		string program1;
	public:	
		void setname(string n)
		{
			name1=n;
		}
		string getname()
		{
			return name1;
		}
		void setroll(int r)
		{
			roll1 = r;
		}
		int getroll()
		{
			return roll1;
		}
		void Setptogram(string p)
		{
			program1=p;
		}
		string getprogram()
		{
			return program1;
		}
		
};
class GPA:public Student
{
	private:
	float gpa;
	public:
	void setgpa(float g)
		{
			gpa=g;
		}
		float getgpa()
		{
			return gpa;
		}
};
	int x=0;
int main()
{
	int checker;//use in displaying or deletin for loop
	int roll,j,rollno,choicem,k;
	string name;
	float result1,result;
	string program;
	float gpa;	
	int choice;
    int choice1;
	if(x==0)//this will help when we are ecalling main in our main function just to change number 
	//of student
	{
	system("cls");
    cout<<"\n\n\n";
    cout<<"----| Welcome to Student Managment System |----"<<endl<<endl;
    cout<<"***********        MENU        ***********\n\n";
    cout<<"	1. SIGN IN"<<endl;
    cout<<"	2. SIGN UP"<<endl;
    cout<<"	3. FORGOT PASSWORD"<<endl;
    cout<<"	4. Exit"<<endl;
    cout<<"\n  Enter your choice: ";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
        case 1:
        {
			int x=login();
        break;
    	}
    	case 2:
    	{
        	registr();
            break;
        }
        case 3:
        {
            forgot();
            break;
        }
        case 4:
        {
			cout<<"Thanks for using Student Managment System.\n\n";
        	break;
    	}
        default:
        {
			system("cls");
            cout<<"ERROR, Try Again\n"<<endl; 
            main();
        }
    }
    	}
    // ***********************************
    // ***********************************
    
    //here login system ends and student system starts
    
    // ***********************************
    // ***********************************
    // ***********************************
   	//	system("cls");
				
			
		do
		{ 
		checker=0;
			system("CLS");
			cout<<"\t\t\t___________________________________"<<endl;
			cout<<"\t\t\tWelcome to Student Managment System"<<endl;
			cout<<"\t\t\t___________________________________"<<endl;
			GPA *std;
			cout<<"\n\n\t\t|-`-`-`-`| Menue |-`-`-`-`|"<<endl<<endl;
			cout<<"0)Exit\n";
			cout<<"1)Add Student Data\n";
			cout<<"2)Search Student Data\n";
			cout<<"3)Delete Student Data\n";
			cout<<"4)Result\n";
			cout<<"\nEnter Choice:";
			cin>>choice1;
			cout<<endl;
			
			switch(choice1)
    {
        case 0:
        {
			cout<<"\t|-~-~-~| Thanks for using Student Managment System. |-~-~-~|\n\n";
        break;
    	}
    	case 1:
    	{
           	cout<<"Enter Number of Students: ";
        	cin>>j;
        		std=new GPA[j];
			for(int i=0;i<j;i++)
				{
					cout<<"\n\t\t Enter Data Student: "<<i+1;
					cout<<"\nEnter Name: ";
					cin.ignore();
					getline(cin,name);
					cout<<"\nEnter Roll no: ";
					cin>>roll;
					cout<<"\nProgram: ";
					cin.ignore();
					getline(cin,program);
					cout<<"\nGPA: ";
					cin>>gpa;
					std[i].setname(name);
					std[i].Setptogram(program);
					std[i].setroll(roll);
					std[i].setgpa(gpa);
					system("cls");
				}
			
            break;
        }
        case 2:
        {
        	system("cls");
         	cout<<"\n\nSearch Student by Roll No."<<endl;
			cout<<"\nEnter Roll-No: ";
			cin>>rollno;
			for(int i=0;i<j;i++)
				{
					if (rollno==std[i].getroll())
					{
						cout<<"\nName: "<<std[i].getname()<<endl;
						cout<<"Roll no: "<<std[i].getroll()<<endl;
						cout<<"Program: "<<std[i].getprogram()<<endl;
						cout<<"GPA: "<<std[i].getgpa()<<endl<<endl<<endl;
						cout<<"Press Enter To Continue: ";
						cin.get();
						cin.get();	
						checker=5;
					}
					
				}
				if(checker!=5)
					{
						cout<<"\n\n\t\tNo Student of this Roll-Num Found!"<<endl<<endl<<endl;
						cout<<"\nPress Enter To Continue... ";
						cin.get();
						cin.get();
					}
				system("cls");
            break;
        }
        case 3:
        {
			cout<<"\n\nSearch Student by Roll No to Delete its Data."<<endl<<endl;
				cout<<"\n\nRoll No: ";
				cin>>rollno;
				for(int i=0;i<j;i++)
				{
					if (rollno==std[i].getroll()
					)
					{
						int a=0;
						float z=0;
						string n="Deleted";
						std[i].setname(n);
						std[i].Setptogram(n);
						std[i].setgpa(z);
						std[i].setroll(a);
						cout<<"\n\nName: "<<std[i].getname()<<endl;
						cout<<"Roll no: "<<std[i].getroll()<<endl;
						cout<<"Program: "<<std[i].getprogram()<<endl;
						cout<<"GPA: "<<std[i].getgpa()<<endl;
						cout<<"DELETE SUCCESFULLY"<<endl;
							cout<<"Press Enter To Continue: ";
						cin.get();
						cin.get();	
							checker=5;
					}
				
				}
					if(checker!=5)
					{
						cout<<"\n\n\t\tNo Student of this Roll-Num Found!"<<endl<<endl<<endl;
						cout<<"\nPress Enter To Continue... ";
						cin.get();
						cin.get();
					}
				system("CLS");
        	break;
    	}
  		case 4:
        {
        	system("cls");
        	int touse;
         	for(int i=0;i<j;i++)
				{
					result1=std[0].getgpa();
				
				
					if(result1<=std[i].getgpa() )
					{
						result=result1;
						touse=i;
							
					}
					
				}
					cout<<"Student Details are:"<<endl;
				cout<<"\nName: "<<std[touse].getname()<<endl;
						cout<<"Roll no: "<<std[touse].getroll()<<endl;
						cout<<"Program: "<<std[touse].getprogram()<<endl;
						cout<<"GPA: "<<std[touse].getgpa()<<endl<<endl<<endl;

						cout<<"Press Enter To Continue: ";
						cin.get();
						cin.get();	
		system("CLS");
            break;
        }
        default:
        {
			system("cls");
            cout<<"ERROR, Try Again\n"<<endl; 
			main();
        }
    }
		}while(choice1!=0);
}
int login()
{
        int count,value,choice;
        string user,pass,u,p;
        system("cls");
        cout<<"Enter Following Details"<<endl;
        cout<<"EMAIL :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;        
        ifstream input("Accounts.txt");
        while(input>>u>>p)
        {
            if(u==user && p==pass)
            {
                count=3;
				value=2;
			    return value;    
            }
        }
        if (count==3)
        {
		}
		else
        {
        cout<<"\nSIGN IN ERROR!, Check! Email and Password\n";
        cin.get();
        cin.get();
        main();
        }
        input.close();
}
int registr()
{
    string user,x,reguser,regpass,ru,rp;
    system("cls");
    cout<<"Enter UserName :";
    cin.ignore();
	getline(cin, user);
	cout<<"\nEnter Email :";
    cin>>reguser;
    cout<<"\nEnter Password :";
    cin>>regpass;
    ofstream reg("Accounts.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\nAccount Created!\n";
    main();
}
int forgot()
{
    int ch;
    system("cls");
    cout<<"Forgotten?\n";
    cout<<"1.Search Your Account by Email"<<endl;
    cout<<"2.Back"<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int count=0;
            string searchuser,su,sp;
            cout<<"\nEnter Your Email :";
            cin>>searchuser;
            ifstream searchu("Accounts.txt");
            while(searchu>>su>>sp)
            {
                if(su==searchuser)
                {
                    count=1;
                }
            }
            searchu.close();
            if(count==1)
            {
                cout<<"\n\nAccount is Founded\n";
                cout<<"\nPassword is: "<<sp;
                cin.get();
                cin.get();
                system("cls");
                main();
            }
            else
            {
                cout<<"\nEmail is Not Found!\n";
                cout<<"\nContact Your System Administrator For More Details \n";
                cin.get();
                cin.get();
                main();
            }
            break;
            }
            case 2:
            {
            cin.get();
            main();
        	}
            default:
            {
				cout<<"Wrong Choice, Try Again"<<endl;
                forgot();
			}
    }
}
