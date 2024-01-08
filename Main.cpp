#include <iostream>
#include <fstream>
#include <conio.h>
#include<string.h>
#include <ctime>

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
#include "Inventory.h"
#include "Feedback.h"
#include "Report.h"

int main()
{
	admin a;
	member m;
	Whole_Menu w;
	review r;
	suggestions s;
	
	Report *ptr = new Report();
	int choice, h = 1;
	
	while(h == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ --------------------------------- +" << endl;  
    	cout << "\n\t\t\t            SFC DEPARTMENT" << endl;
		cout << "\n\t\t\t+ --------------------------------- +" << endl;  
		cout << "\n\t\t\t| --------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Registration and Attendance |" << endl;
		cout << "\t\t\t|   2)  Food Menu                   |"   << endl;
		cout << "\t\t\t|   3)  Inventory                   |"	<< endl;
		cout << "\t\t\t|   4)  Suggestions and Reviews     |"	<< endl;
		cout << "\t\t\t|   5)  Report                      |"   << endl;
		cout << "\t\t\t|   6)  Exit                        |"   << endl;
		cout << "\n\t\t\t| --------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ --------------------------------- +\n\n" << endl;
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            	Interface(a,m);
        		break;
        		
            case 2:
               w.M_Menu_Interface();
                break;
                   
            case 3:
                ptr->Inv_Interface();
                break;
                   
            case 4:
                Interface(r,s);
                break;
                   
            case 5:
                ptr->Rep_Interface();
                break;
                   
            case 6:
                h = 0;
                break;
                   
            default:
	            cout<<"\nInvalid Input!! Please try again between 1-6\n";
                cout<<"\nPress Enter to continue";
        }
		getch();
    }
    
    delete ptr;
	ptr = NULL;
	return 0;
}