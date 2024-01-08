#include <iostream>
#include <fstream>
#include <conio.h>
#include<ctime>
#include<string.h>

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

class review;
class suggestions;

class review
{
	private:
		string name, rev;
		
	public:
		review(){}
		void R_Insert();
		void R_Display();
		void Rev_Interface();
		friend void Interface(review r, suggestions s);
		~review(){}
	
};

void review :: R_Insert()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Review Details ---------------------------------------------" << endl;
    
    cin.ignore();
    cout << "\t\t\tEnter Paricular Item you want to review: ";
    getline(cin, name);
    
    cin.ignore();
    cout << "\t\t\tEnter your Review: ";
    getline(cin,rev);
    
    file.open("review.txt", ios::app | ios::out);
    file << name << "\n" << rev << endl;
    file.close();
}

void review :: R_Display()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Review Log --------------------------------------------" << endl<<endl;
    file.open("review.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
    	
    	getline(file >> ws, name);
    	getline(file, rev);
        
        cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Item No.                                Item Name                                 Review"<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
        while (!file.eof())
        {
            cout << "\n\n" << count++;
            cout << "\t\t\t\t\t" << name;
            cout << "\t\t\t\t\t"<<rev; 
            getline(file, name);
    		getline(file, rev);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();

}

class suggestions
{
	private:
		string item, sug;
		
	public:
		suggestions(){}
		void S_Insert();
		void S_Display();
		friend void Interface(review r, suggestions s);
		~suggestions(){}
		
};

void suggestions :: S_Insert()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Review Details ---------------------------------------------" << endl;
    
    cin.ignore();
	cout << "\t\t\tEnter any Item you want to be included in the menu: ";
    getline(cin, item);
    
    cin.ignore();
    cout << "\t\t\tOn which occasion should the item be served: ";
    getline(cin, sug);
    
    file.open("suggestions.txt", ios::app | ios::out);
    file << item << "\n" << sug << endl;
    file.close();
}

void suggestions :: S_Display()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Suggestion Log --------------------------------------------" << endl<<endl;
    file.open("suggestions.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
    	
    	getline(file >> ws, item);
    	getline(file, sug);
        
        cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Item No.                                Item Name                                           Occasion"<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
        while (!file.eof())
        {
            cout << "\n\n" << count++;
            cout << "\t\t\t\t\t" << item;
            cout << "\t\t\t\t\t\t    " << sug;
            getline(file, item);
    		getline(file, sug);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();	
}

void Interface(review r, suggestions s)
{
	int choice, h = 1;
    
    while(h == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;   
    	cout << "\n\t\t\t      SUGGESTIONS AND REVIEWS" << endl;
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Enter Review              |" << endl;
		cout << "\t\t\t|   2)  Display Reivew            |"   << endl;
		cout << "\t\t\t|   3)  Enter Suggestion          |"	<< endl;
		cout << "\t\t\t|   4)  Display Suggestion        |"	<< endl;
		cout << "\t\t\t|   5)  Exit                      |"	<< endl;
		cout << "\n\t\t\t| ------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------- +\n\n" << endl;
	    
        cout<<"Please enter your choice: ";
        cin>>choice;
        
        switch (choice)
        {
            case 1:
            	r.R_Insert();
        		break;
        		
            case 2:
                r.R_Display();
                break;
            
            case 3:
                s.S_Insert();
                break;
                
            case 4:
                s.S_Display();
                break;
                
            case 5:
            	h = 0;
            	break;
            	
            default:
            	cout<<"\nInvalid Input!! Please try again between 1-3\n";
                cout<<"\nPress Enter to continue";
        }
        getch();
    }
}

int main()
{
	review r;
	suggestions s;
	Interface(r,s);
}




