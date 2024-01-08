#include <iostream>
#include <fstream>
#include <conio.h>
#include<ctime>
#include<string.h>
#include <stdlib.h>

using namespace std;

namespace miscellaneous
{
	int validation()
	{
    	system("CLS");	
   		string valid ="";
   		char ch;
   		cout <<"\n\n\n\n\n\n\n\t\t\t\t\t=====Admin Login=====";
   		cout << "\n\n\n\n\n\t\t\t\t\tEnter Password: ";
   		ch = _getch();
   
   		while(ch != 13)
   		{
      		valid.push_back(ch);//push_back() is a library function of "vector" header, it is used to insert/add an element at the end of the vector, it accepts an element of the same type and adds the given element at the end of the vector and increases the size of the vector.
      		cout << '*';
      		ch = _getch();
   		}
   
   		if(valid == "sairam")
   		{
      		cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      		system("PAUSE"); //system(“pause”) which is used to execute pause command and make the screen/terminal wait for a key press, and system(“cls”) which is used to make the screen/terminal clear.
   		}
   		try
   		{
   			if(valid != "sairam")
   			throw valid;
   		}
   
   		catch(string valid)
   		{
   			cout << "\n\n\n\n\t\t\t\t\tAccess DENIED!!!...Please Try Again!!\n";
      		system("PAUSE");
      		system("CLS");
      		validation();	
   		}
   
	}
	
	void Time()
	{
		//time
		time_t now = time(0);

   		tm *ltm = localtime(&now);
		cout << "  Date: "<< ltm->tm_mday <<" / ";
 		cout << 1 + ltm->tm_mon << " / ";
 		cout << 1900 + ltm->tm_year << "                                      ";

  		cout << "Time: "<<ltm->tm_hour << ":";
   		cout <<ltm->tm_min << ":";
 		cout <<ltm->tm_sec << endl;
 		//end of time
	}
	
	void logo()
	{
		cout << "                       " << "    _____\n";
   		cout << "                       " << "   /     \\   ____   ____    __ __\n";
   		cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
  		cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
  		cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";
	}	


}

#include "Attendance.h"
#include "Menu.h"
#include "Feedback.h"
#include "Inventory.h"

class Report : public admin, public review, public suggestions, public inventory, public Whole_Menu
{
	public:
		void Rep_Interface();
		
};


void Report :: Rep_Interface()
{
	int choice, h = 1;
    
    Whole_Menu w;
    
    while(h == 1)
    {
    	system("cls");
    	
    	cout << "\n\t\t\t+ --------------------------------- +" << endl;  
    	cout << "\n\t\t\t              REPORT" << endl;
		cout << "\n\t\t\t+ --------------------------------- +" << endl;  
		cout << "\n\t\t\t| --------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Display Ingredients         |" << endl;
		cout << "\t\t\t|   2)  Display Utensils            |"   << endl;
		cout << "\t\t\t|   3)  Display Full Menu           |"	<< endl;
		cout << "\t\t\t|   4)  Display Food Reviews        |"	<< endl;
		cout << "\t\t\t|   5)  Display Food Suggestions    |"   << endl;
		cout << "\t\t\t|   6)  Display Sick Student Report |"   << endl;
		cout << "\t\t\t|   7)  Display Department Members  |"	<< endl;
		cout << "\t\t\t|   8)  Exit                        |"   << endl;
		cout << "\n\t\t\t| --------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ --------------------------------- +\n\n" << endl;
		
        
        cout<<"Please enter your choice: ";
        cin>>choice;
        
        switch (choice)
        {
            case 1:
            	Display_Ingredients();
        		break;
        		
            case 2:
                Display_Utensils();
                break;
            
            case 3:
                w.Full_Menu();
                break;
                
            case 4:
                R_Display();
                break;
                
            case 5:
                S_Display();
                break;
                
            case 6:
                Print_Records();
                break;
                
            case 7:
                Display();
                break;
                
            case 8:
            	h = 0;
            	break;
            	
            default:
            	cout<<"\nInvalid Input!! Please try again between 1-5\n";
                cout<<"\nPress Enter to continue";
        }
        getch();
    }
	
}

int main()
{
	Report r;
	r.Rep_Interface();
}