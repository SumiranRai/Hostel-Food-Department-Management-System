class Report : public admin, public review, public suggestions, public inventory, public Whole_Menu
{
	public:
		void Rep_Interface();
		
};


inline void Report :: Rep_Interface()
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
