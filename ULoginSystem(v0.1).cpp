#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <curses.h>


using namespace std;

class createUser
{
  char uname[20];
  char pword[20];
  char name[30];
	int token;

public:
  void printString(std::string& string) // Function to print string 
  {
    std::cout<<string<<std::endl;
  }

// Function to set user's name 
  void setName()
  {
    std::cout << "Enter your name: ";
    std::cin>>name;
    std::cout<<std::endl;
  }

// Function to set username 
  void setUname()
  {
    std::string acceptName = "Thank you! What will your username be?";
    printString(acceptName);
    std::cout<<std::endl;
    std::cout<<"Create a username: ";
    std::cin>>uname;std::cout<<std::endl;

	string uname1 = uname;

    std::string acceptUname = "Great! You're username is ";
    acceptUname += uname1 += "!";
    printString(acceptUname);
  }

// Function to set user password 
  void setPword()
  {
    std::cout<<"Create a password: ";
    std::cin>>pword;std::cout<<std::endl;
  }

// Function to show user details (Password not displayed)
	void show_user()
	{
		std::cout<<"\nName: "<<name;
		std::cout<<"\nUsername: "<<uname;
	}

// Function to modify user's name 
	void modify_name()
	{
		std::cout<<"\nEnter current name: ";
    std::cin>>name;
		std::cout<<"\nModify name: ";
		std::cin>>name;

	 	string name1 = name;

    std::string acceptname = "Your name has been updated ";
    acceptname += name1 += "!";
		printString(acceptname);
	}

// Function to modify username 
	void modify_uname()
	{
		std::cout<<"\nEnter current username: ";
		std::cin>>uname;
		std::cout<<"\nModify username: ";
		std::cin>>uname;

		string uname2 = uname;

    std::string acceptUname = "Your username has been updated to ";
    acceptUname += uname2 += "!";
		printString(acceptUname);
	}

// Function to modify user password 
	void modify_pword()
	{
		std::cout<<"\nEnter current username: ";
		std::cin>>uname;
		std::cout<<"\nEnter new password: ";
		std::cin>>pword;
	}

// Function to create user account 
  void createAccount()
  {
    std::string welcome = "\tHey U! What is your name?"; std::cout<<std::endl;std::cout<<std::endl;
    setName();
    setUname();
    setPword();

    std::cout<<"Your account is now set up!..";
  }

	char* retuname()
	{
		return uname;
	}

	int rettoken()
	{
		return token;
	}
	
	void addtoken()
	{token=1;}
	
	void resettoken()
	{token=0;}

	void report()
	{
		cout<<"\t"<<uname<<setw(20)<<setw(10)<<name<<endl;
	}
};

// global declaration for stream object, object 

fstream fp, fp1;
createUser cu;

// function to write in file
void write_user()
{
	char ch;
	fp.open("createUser.dat",ios::out|ios::app);
	do
	{
		std::cin.get();
		cu.createAccount();
		fp.write((char*)&cu,sizeof(createUser));
		std::cout<<"Do you want to add more record?..(y/n): ";
		std::cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	fp.close();
}

// Function to delete record of file
void delete_user()
{
	char uname[20];
	char pword[20];
	int flag=0;
	system("CLS");

	std::cout<<"\n\n\n\tDELETE USER";
	std::cout<<"\n\nEnter username: ";
	std::cin>>uname;
	std::cout<<"\n\nEnter password: ";
	std::cin>>pword;

	fp.open("createUser.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&cu,sizeof(createUser)))
	{
		if(strcmp(cu.retuname(),uname)!=0)
				fp2.write((char*)&cu,sizeof(createUser));
		else
				flag=1;
	}

	fp2.close();
		fp.close();
		remove("createUser.dat");
		rename("Temp.dat", "createUser.dat");
		if(flag==1)
		{
			std::cout<<"\n\n\tRECORD DETELED..";
		}
		else
		{
			std::cout<<"\n\nRECORD NOT FOUND..";
		}
		std::cin.get();
}
// Function to display user details 
void display_uDetails(char n[])
{
	std::cout<<"\nUSER DETAILS\n";
	int flag=0;
	fp.open("createUser.dat",ios::in);
	while(fp.read((char*)&cu,sizeof(createUser)))
	{
		if(strcmp(cu.retuname(),n) == 0)
		{
			cu.show_user();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
		std::cout<<"\n\nUser does not exist!";
	std::cin.get();
}

// Function to modify user account details 
void modify_user()
{
	char n[20];
	char pword[20];
	int found=0;
	system("CLS");
	std::cout<<"\n\n\tMODIFY USER...";
	std::cout<<"\n\n\tEnter username: ";
	std::cin>>n;
	fp.open("createUser.dat",ios::in|ios::out);
	while(fp.read((char*)&cu,sizeof(createUser)) && found==0)
	{
		if(strcmp(cu.retuname(),n)==0)
		{
			cu.show_user();
			std::cout<<"\nEnter new details of user"<<std::endl;
			cu.modify_name();
			cu.modify_uname();
			cu.modify_pword();
			int pos=-1*sizeof(cu);
					fp.seekp(pos,ios::cur);
					fp.write((char*)&cu,sizeof(createUser));
					std::cout<<"\n\n\t Record Updated";
					found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		std::cout<<"\n\n Record Not Found ";
	}
	std::cin.get();
}

// Function to display all users 
void display_allusers()
{
	system("CLS");
			fp.open("createUser.dat",ios::in);
			if(!fp)
			{
				std::cout<<"ERROR!!! USER COULD NOT BE SHOWN! ";
				std::cin.get();
				return;
			}
	std::cout<<"\n\n\tUNLTD USER LIST\n\n";
	std::cout<<"========================================================\n";std::cout<<std::endl;
	std::cout<<"\tUsername"<<setw(10)<<"Name";std::cout<<std::endl;
	std::cout<<"========================================================\n";

	while(fp.read((char*)&cu,sizeof(createUser)))
	{
		cu.report();
	}
	fp.close();
	std::cin.get();
}

// Program intro function 
void intro()
{
	//gotoxy(35,11);
	cout<<"\n\n\n\t.UNLTD LOGIN SYSTEM";
	//gotoxy(35,14);
	//cout<<"\n\n\tLOGIN";
	//gotoxy(35,17);
	//cout<<"\n\n\tSYSTEM";
	cout<<"\n\n\tMADE BY : Dame";
	cout<<"\n\n\tCOMPANY : RVMR.Unltd, LLC (Press any key to continue)";
	std::cin.get();
}

// Settings menu function
void settings_menu()
{
	system("CLS");
	int ch2;
	std::cout<<"\n\n\n\tSETTINGS MENU";
	std::cout<<"\n\n\t01. CHANGE PASSWORD";
	std::cout<<"\n\n\t02. CHANGE USERNAME";
	std::cout<<"\n\n\t03. CHANGE NAME";
	std::cout<<"\n\n\t04. DELETE ACCOUNT";
	std::cout<<"\n\n\t05. EXIT";
	std::cout<<"Choose an option(1-5): ";
	std::cin>>ch2;

	switch(ch2)
	{
		case 1: cu.modify_pword();break;
		case 2: cu.modify_uname();break;
		case 3: cu.modify_name();break;
		case 4: delete_user();std::cin.get();break;
		case 5: return;
	}
	settings_menu();
}

int main() 
{
  createUser cu;
	char ch;
	char uname[20];
	
	intro();
  do
	{
		std::cout<<"\n\n\n\tMAIN MENU";
		std::cout<<"\n\n\t01. CREATE ACCOUNT";
		std::cout<<"\n\n\t02. MODIFY ACCOUNT";
		std::cout<<"\n\n\t03. SHOW USER INFO";
		std::cout<<"\n\n\t04. SHOW ALL USERS";
		std::cout<<"\n\n\t05. SETTINGS";
		std::cout<<"\n\n\t06. EXIT";
		std::cout<<"\n\n\tPlease Select Your Option(1-6): ";
		
		ch=std::cin.get();
		switch(ch)
		{
			case '1': write_user();break;
			case '2': modify_user();break;
			case '3': 	system("CLS");
						std::cout<<"\n\n\tPlease enter username: ";
						std::cin>>uname;
						display_uDetails(uname);break;
			case '4': display_allusers();break;
			case '5': settings_menu();break;
			case '6':exit(0);		
		}
		
	}
	while(ch!='6');
}