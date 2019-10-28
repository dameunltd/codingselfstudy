#include <iostream>
#include <math.h>

using namespace std;


class Choices
{
public:
	int Addition = 1;
	int Subtraction = 2;
	int Multiplication = 3;
	int Division = 4;
	int Exit = 5;
	
	int userchoice;
	int usernumber1;
	int usernumber2;
	int equationanswer;
	int useranswer;
	

public:
	void add(int Addition)
	{
		if(userchoice==1)
            {  
                cout << "Enter two numbers: ";
                cin >> usernumber1;
                cin >> usernumber2;
                          
				equationanswer == usernumber1 + usernumber2;
            	

                cout << usernumber1 << "+" << usernumber2 << "= ? ";
                cin >> useranswer;
                

                    if (useranswer==equationanswer)
                        {
                            cout << "Yes, correct" << endl << endl;
                        }
                    else
                        {
                        cout << "Sorry, incorrect" << endl << endl;
                        }

                            cout << "Math Practice Program Main Menu\n\n\n" << endl;

                                cout << "1. Addition" << endl;
                                cout << "2. Subtraction" << endl;
                                cout << "3. Multiplication" << endl;
                                cout << "4. Division" << endl;
                                cout << "5. Exit" << endl;

                                    cout << "Select an option: " ;
                                    cin >> userchoice;
            }
	}
		
	void sub(int Subtraction)
	{
		if(userchoice==2)
            {
            	
                cout << "Enter two numbers: ";
                cin >> usernumber1;
                cin >> usernumber2;
                
                equationanswer == usernumber1 - usernumber2;

                cout << usernumber1 << "-" << usernumber2 << "= ? ";
                cin >> useranswer;
            

                    if (useranswer==equationanswer)
                        {
                            cout << "Yes, correct" << endl << endl;
                        }
                    else
                        {
                        cout << "Sorry, incorrect" << endl << endl;
                        }

                            cout << "Math Practice Program Main Menu\n\n\n" << endl;

                                cout << "1. Addition" << endl;
                                cout << "2. Subtraction" << endl;
                                cout << "3. Multiplication" << endl;
                                cout << "4. Division" << endl;
                                cout << "5. Exit" << endl;

                                    cout << "Select an option: " ;
                                    cin >> userchoice;
 			}
	}
	
void mul(int Multiplication)
	{
			if(userchoice==3)
            {          
                cout << "Enter two numbers: ";
                cin >> usernumber1;
                cin >> usernumber2;
                
                equationanswer = usernumber1 * usernumber2;

                cout << usernumber1 << "x" << usernumber2 << "= ? ";
                cin >> useranswer;
                

                    if (useranswer==equationanswer)
                        {
                            cout << "Yes, correct" << endl << endl;
                        }
                    else
                        {
                        cout << "Sorry, incorrect" << endl << endl;
                        }

                            cout << "Math Practice Program Main Menu\n\n\n" << endl;

                                cout << "1. Addition" << endl;
                                cout << "2. Subtraction" << endl;
                                cout << "3. Multiplication" << endl;
                                cout << "4. Division" << endl;
                                cout << "5. Exit" << endl;

                                    cout << "Select an option: " ;
                                    cin >> userchoice;
            }
	}

        
void div(int Division)
	{
			if(userchoice==4)
            {                 
	            cout << "Enter two numbers: ";
                cin >> usernumber1;
                cin >> usernumber2;

                cout << usernumber1 << "/" << usernumber2 << "= ? ";
                cin >> useranswer;
                
                equationanswer == usernumber1 % usernumber2;
				
                    if (useranswer==equationanswer)
                        {
                            cout << "Yes, correct" << endl << endl;
                        }
                    else
                        {
                        cout << "Sorry, incorrect" << endl << endl;
                        }

                            cout << "Math Practice Program Main Menu\n\n\n" << endl;

                                cout << "1. Addition" << endl;
                                cout << "2. Subtraction" << endl;
                                cout << "3. Multiplication" << endl;
                                cout << "4. Division" << endl;
                                cout << "5. Exit" << endl;

                                    cout << "Select an option: " ;
                                    cin >> userchoice;
            }
	}
	
};

int main()
{
	Choices c;
	
	cout << "Math Practice Program Main Menu\n\n\n" << endl;

                                cout << "1. Addition" << endl;
                                cout << "2. Subtraction" << endl;
                                cout << "3. Multiplication" << endl;
                                cout << "4. Division" << endl;
                                cout << "5. Exit" << endl;

                                    cout << "Select an option: " ;
                                    cin >> c.userchoice;
    
    
    
	if(c.userchoice==1)
	{
		c.add(c.Addition);
	}
		
		else if (c.userchoice==2)
			{
				c.sub(c.Subtraction);
			}
			
				else if (c.userchoice==3)
					{
						c.mul(c.Multiplication);
					}
					
						else if (c.userchoice==4)
							{
								c.div(c.Division);
							}
	

}
