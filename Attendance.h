class admin;
class member;

class admin
{
	public:
        string name, rollnum;
        admin(){ }
        void Insert();
    	void Display();
    	void Modify();
    	void Search();
    	void Delete();
        void Login();
    	friend void Interface(admin a, member m);
    	~admin(){ }
    	  	
};

void admin::Login()
{
    int choice, h = 1;
    char c;
    
    while(h == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ --------------------------------- +" << endl;   
    	cout << "\n\t\t\t              ADMIN PORTAL" << endl;
    	cout << "\n\t\t\t+ --------------------------------- +" << endl;
		cout << "\n\t\t\t| --------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    Enter New Member          |" << endl;
		cout << "\t\t\t|   2)    Display Member Details    |"   << endl;
		cout << "\t\t\t|   3)    Modify Member Details     |"	<< endl;
		cout << "\t\t\t|   4)    Search Member             |"	<< endl;
		cout << "\t\t\t|   5)    Delete Member             |"	<< endl;
		cout << "\t\t\t|   6)    Exit                      |"	<< endl;
		cout << "\n\t\t\t| --------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ --------------------------------- +\n\n" << endl;
		
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            	do
        		{
            		Insert();
            		cout << "\n\t\t\t Add Another Member Record (Y,N): ";
            		cin >> c;
        		} 
				while (c == 'y' || c == 'Y');
        		break;
        		
            case 2:
                Display();
                break;
                   
            case 3:
                Modify();
                break;
                   
            case 4:
                Search();
                break;
                   
            case 5:
                Delete();
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
   
}

void admin::Insert()
{
    system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Add Member Details ---------------------------------------------" << endl;
    
    cin.ignore();
    cout << "\t\t\tEnter Name: ";
    getline(cin, name);
    
    cout<<"\t\t\tEnter Roll No.: ";
    cin>> rollnum;
    
    file.open("member.txt", ios::app | ios::out);
    file << name << "\n" << rollnum << endl;
    file.close();
    
}

void admin::Display() // display member details
{
    system("cls");
    fstream file;
    string line;
    
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Member Records --------------------------------------------" << endl;
    file.open("member.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
    	
    	getline(file >> ws, name);
    	getline(file, rollnum);
    	
        while (!file.eof())
        {
            cout << "\n\n\t\t\t Member No.: " << count++ << endl;
            cout << "\t\t\t Member Name: " << name << endl;
            cout << "\t\t\t Member Roll No.: " << rollnum << endl;
            getline(file, name);
    		getline(file, rollnum);
        }
        
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}

void admin::Modify() // Modify Members Details
{
    system("cls");
    fstream file, file1;
    string rollno, line;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    file.open("member.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Roll No. of member to be Modified: ";
        cin >> rollno;
        file1.open("dup.txt", ios::app | ios::out);
        
        getline(file >> ws, name);
    	getline(file, rollnum);
    	
        while (!file.eof())
        {
            if (rollno != rollnum)
               file1 << name << "\n" << rollnum << endl;
               
            else
            {
            	cin.ignore();
                cout << "\n\t\t\tEnter Name: ";
                getline(cin, name);
                cout << "\t\t\tEnter Roll No.: ";
                cin >> rollnum;
                file1 << name << "\n" << rollnum << endl;
                found++;
            }
            getline(file, name);
    		getline(file, rollnum);
    		
        }
        
        if (found == 0)
        {
            cout << "\n\n\t\t\t Member Roll No. Not Found....";
        }
        
        file1.close();
        file.close();
        remove("member.txt");
        rename("dup.txt", "member.txt");
    }
}
void admin::Search() // search data of member
{
    system("cls");
    fstream file;
    string line;
    int found = 0;
    file.open("member.txt", ios::in);
    if (!file)
    {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------  Search Member Data ------------------------------------------" << endl;
        cout << "\n\t\t\t No Data Is Present...";
    }
    else
    {
        string rollno;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------  Search Member Data ------------------------------------------" << endl;
        cout << "\n Enter Roll No. of member to be searched: ";
        cin >> rollno;
        
        getline(file >> ws, name);
    	getline(file, rollnum);
        while (!file.eof())
        {
            if (rollno == rollnum)
            {
                cout << "\n\t\t\t Member Name: " << name << endl;
                cout << "\t\t\t Member Roll No.: " << rollnum << endl;
                found++;
            }
            getline(file, name);
    		getline(file, rollnum);
        }
        if (found == 0)
        {
            cout << "\n\t\t\tMember Roll No. Not Found...";
        }
        file.close();
    }
}
void admin::Delete()
{
    system("cls");
    fstream file, file1;
    string line;
    int found = 0;
    string roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Member Details ------------------------------------------" << endl;
    file.open("member.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of member who you want to delete: ";
        cin >> roll;
        file1.open("dup.txt", ios::app | ios::out);
    
        getline(file >> ws, name);
    	getline(file, rollnum);
        while (!file.eof())
        {
            if (roll != rollnum)
            {
                file1 << name << "\n" << rollnum << endl;
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delete Data";
            }
            getline(file, name);
    		getline(file, rollnum);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Member Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("member.txt");
        rename("dup.txt", "member.txt");
    }
}

class member : public admin
{
	public:
		string att, date;
		member(){}
		void M_Login();
		friend void Interface(admin a, member m);
		void Attendance();
		void AttDisplay();
		~member(){}
		
};

void member :: Attendance()
{
	system("cls");
    fstream file, file1;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    file.open("member.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        file1.open("member1.txt", ios::app | ios::out);
        int count = 1;
        
        getline(file >> ws, name);
    	getline(file, rollnum);
        while (!file.eof())
        {
        	cout << "\n\n\t\t\t Member No.: " << count++ << endl;
            cout << "\t\t\t Member Name: " << name << endl;
            cout << "\t\t\t Member Roll No.: " << rollnum << endl;
            cout << "\t\t\t Present(p) or Absent(a): ";
            cin>>att;
            
            file1 << name << "\n" << rollnum << "\n" << att << endl;
            
            getline(file, name);
    		getline(file, rollnum);
    		
    	}
        	
        file1.close();
        file.close();
	}
}

void member :: AttDisplay()
{
	system("cls");
    fstream file;
	string date1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Attendance Records --------------------------------------------" << endl;

    file.open("member1.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
        getline(file >> ws, name);
    	getline(file, rollnum);
    	getline(file, att);
        while (!file.eof())
        {
            cout << "\n\n\t\t\t Member No.: " << count++ << endl;
            cout << "\t\t\t Member Name: " << name << endl;
            cout << "\t\t\t Member Roll No.: " << rollnum << endl;
            cout << "\t\t\t Attendance: " << att <<endl;
             
			getline(file >> ws, name);
    		getline(file, rollnum);
    		getline(file, att);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}   

void member :: M_Login()
{
	int a, l = 1;
   
    while(l == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ----------------------------- +" << endl;   
    	cout << "\n\t\t\t          MEMBER PORTAL" << endl;
    	cout << "\n\t\t\t+ ----------------------------- +" << endl;
		cout << "\n\t\t\t| ----------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    Display Members       |" << endl;
		cout << "\t\t\t|   2)    Attendance            |"   << endl;
		cout << "\t\t\t|   3)    Display Attendance    |"	<< endl;
		cout << "\t\t\t|   4)    Exit                  |"	<< endl;
		cout << "\n\t\t\t| ----------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ----------------------------- +\n\n" << endl;
        
        cout<<"Please enter your choice: ";
        cin>>a;
        
        switch (a)
        {
        	case 1:
            	Display();
        		break;
        		
            case 2:
            	Attendance();
        		break;
        		
            case 3:
                AttDisplay();
                break;
                
            case 4:
                l = 0;
                break;
                   
            default:
	            cout<<"\nInvalid Input!! Please try again between 1-3\n";
                cout<<"\nPress Enter to continue";
    	}
    	getch();
	}
        
        
}
void Interface(admin a, member m)
{
	int b, k = 1;
    
    while(k == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ----------------------------- +" << endl;   
    	cout << "\n\t\t\t   REGISTRATION AND ATTENDANCE" << endl;
    	cout << "\n\t\t\t+ ----------------------------- +" << endl;
		cout << "\n\t\t\t| ----------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    ADMIN PORTAL          |" << endl;
		cout << "\t\t\t|   2)    MEMBER PORTAL         |"   << endl;
		cout << "\t\t\t|   3)    EXIT                  |"	<< endl;
		cout << "\n\t\t\t| ----------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ----------------------------- +\n\n" << endl;

        cout<<"Please enter your choice: ";
        cin>>b;
        
        switch (b)
        {
            case 1:
            	miscellaneous::validation();
            	a.Login();
        		break;
        		
            case 2:
                m.M_Login();
                break;
                
            case 3:
                k = 0;
                break;
                   
            default:
	            cout<<"\nInvalid Input!! Please try again between 1-3\n";
                cout<<"\nPress Enter to continue";
    	}
    	getch();
	}
}
