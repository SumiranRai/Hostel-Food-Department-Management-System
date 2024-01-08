class Ingredients;
class Utensils;
class Dishes;

class Ingredients
{
	private:
		string ingre, quant, id;
		
	public:
		void Ingredients_List();
		void Modify_List();
		void Display_Ingredients();
		void Ing_Interface();
			
};


void Ingredients :: Ingredients_List()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Ingredients Details ---------------------------------------------" << endl;
    
    cin.ignore();
    
    cout << "\t\t\tEnter Paricular Ingredients: ";
    getline(cin ,ingre);
    
    cout<<"\t\t\tEnter Ingredient ID: ";
    cin>>id;
    
    cin.ignore();
    
    cout << "\t\t\tEnter the amount available: ";
    getline(cin ,quant);
    
    file.open("ingredients.txt", ios::app | ios::out);
    file << ingre << "\n" << id << "\n" << quant << endl;
    file.close();
}

void Ingredients :: Modify_List()
{
	system("cls");
    fstream file, file1;
    string itemno, line;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Modify Ingredient Details ------------------------------------------" << endl;
    file.open("ingredients.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Serial No. of Ingredient to be modified: ";
        cin >> itemno;
        file1.open("temp.txt", ios::app | ios::out);
        
        getline(file >> ws, ingre);
    	getline(file, id);
    	getline(file, quant);
    	
        while (!file.eof())
        {
            if (itemno != id)
               file1 << ingre << "\n" << id << "\n" << quant << endl;
               
            else
            {
                cout << "\n\t\t\tEnter Ingredient Name: ";
                cin.ignore();
                getline(cin ,ingre);
                
                cout << "\t\t\tEnter Ingredient ID: ";
                cin >> id;
                
            	cout<<"\t\t\tEnter Amount Available: ";
            	cin.ignore();
            	getline(cin ,quant);
                
                file1 << ingre << "\n" << id << "\n" << quant << endl;
                found++;
            }
            getline(file, ingre);
    		getline(file, id);
    		getline(file, quant);
    		
        }
        
        if (found == 0)
        {
            cout << "\n\n\t\t\t Ingredients Not Found....";
        }
        file1.close();
        file.close();
        remove("ingredients.txt");
        rename("temp.txt", "ingredients.txt");
    }
}


void Ingredients :: Display_Ingredients()
{
	system("cls");
    fstream file;
    string line;
    
    cout << "\n-----------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Ingredient List --------------------------------------------" << endl<<endl;
    file.open("ingredients.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
    	
    	getline(file >> ws, ingre);
    	getline(file, id);
    	getline(file, quant);
        
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Item No.                |              Ingredient Name                   |       ID       |         Quantity"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        while (!file.eof())
        {
            cout << "\n\n" << count++;
            cout << "\t\t\t\t\t" << ingre;
            cout << "\t\t\t\t\t " << id;
            cout << "\t\t\t" << quant;
            getline(file, ingre);
    		getline(file, id);
    		getline(file, quant);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}

void Ingredients :: Ing_Interface()
{
	int cho, z = 1;
    
    while(z == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;   
    	cout << "\n\t\t\t            INGREDIENTS" << endl;
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Enter Ingredients         |" << endl;
		cout << "\t\t\t|   2)  Display Ingredients       |"   << endl;
		cout << "\t\t\t|   3)  Modify Ingredients List   |"	<< endl;
		cout << "\t\t\t|   4)  Exit                      |"	<< endl;
		cout << "\n\t\t\t| ------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------- +\n\n" << endl;
	    
        cout<<"Please enter your choice: ";
        cin>>cho;
        
        switch (cho)
        {
            case 1:
            	Ingredients_List();
        		break;
        		
            case 2:
            	Display_Ingredients();
                break;
            
            case 3:
                Modify_List();
                break;
                
            case 4:
            	z = 0;
            	break;
            	
            default:
            	cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress Enter to continue:";
        }
		getch();
    }
}

class Utensils
{
	private:
		string ut, amt, num;
		
	public:
		void Utensils_List();
		void Modify_Utensils();
		void Display_Utensils();
		void Ut_Interface();
			
};

void Utensils :: Utensils_List()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Utensils Details ---------------------------------------------" << endl;
    
    
    cin.ignore();
    cout << "\t\t\tEnter Utensil: ";
    getline(cin, ut);
    
    cout<<"\t\t\tEnter the Utensil ID: ";
    cin>> num;
    
    cout << "\t\t\tEnter the amount available: ";
    cin>> amt;
    
    file.open("utensils.txt", ios::app | ios::out);
    file << ut << "\n" << num << "\n" << amt << endl;
    file.close();
}

void Utensils :: Modify_Utensils()
{
	system("cls");
    fstream file, file1;
    string itemno;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Modify Utensils Details ------------------------------------------" << endl;
    file.open("utensils.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Serial No. of Ingredient to be modified: ";
        cin >> itemno;
        file1.open("temp1.txt", ios::app | ios::out);
        
    	getline(file >> ws, ut);
    	getline(file, num);
    	getline(file, amt);
        while (!file.eof())
        {
            if (itemno != num)
               file1 << ut << "\n" << num << "\n" << amt << endl;
               
            else
            {
                cout << "\n\t\t\tEnter Utensil Name: ";
                cin.ignore();
                getline(cin, ut);
                
                cout << "\t\t\tEnter Utensil ID: ";
                cin >> num;
                
            	cout<<"\t\t\tEnter No. of Utensils Available: ";
            	cin >> amt;
                
                file1 << ut << "\n" << num << "\n" << amt << endl;
                found++;
            }
            getline(file, ut);
    		getline(file, num);
    		getline(file, amt);
    		
        }
        
        if (found == 0)
        {
            cout << "\n\n\t\t\t Utensil Not Found....";
        }
        file1.close();
        file.close();
        remove("utensils.txt");
        rename("temp1.txt", "utensils.txt");
    }
}

void Utensils :: Display_Utensils()
{
	system("cls");
    fstream file;
    
    cout << "\n-----------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Utensil List --------------------------------------------" << endl<<endl;
    file.open("utensils.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;

    	getline(file >> ws, ut);
    	getline(file, num);
    	getline(file, amt);
        
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Item No.                |              Utensil Name                   |       ID       |         Quantity"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        while (!file.eof())
        {
            cout << "\n\n" << count++;
            cout << "\t\t\t\t\t" << ut;
            cout << "\t\t\t\t\t " << num;
            cout << "\t\t\t" << amt;
            getline(file, ut);
    		getline(file, num);
    		getline(file, amt);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}

void Utensils :: Ut_Interface()
{
	int b, u = 1;
    
    while(u == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;   
    	cout << "\n\t\t\t            UTENSILS" << endl;
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Enter Utensils            |" << endl;
		cout << "\t\t\t|   2)  Display Utensils          |"   << endl;
		cout << "\t\t\t|   3)  Modify Utensils List      |"	<< endl;
		cout << "\t\t\t|   4)  Exit                      |"	<< endl;
		cout << "\n\t\t\t| ------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------- +\n\n" << endl;
	
        cout<<"Please enter your choice: ";
        cin>>b;
        
        switch (b)
        {
            case 1:
            	Utensils_List();
        		break;
        		
            case 2:
            	Display_Utensils();
                break;
            
            case 3:
                Modify_Utensils();
                break;
                
            case 4:
            	u = 0;
            	break;
            	
            default:
            	cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress enter to continue:";
        }
        getch();
    }
}

class Dishes : public Menu
{
	private:
		string dish, srno, fr;	
	
	public:
		void Dishes_List();
		void Modify_Dishes();
		void Display_Dishes();
		void Dish_Interface();
};

void Dishes :: Dishes_List()
{
	system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Dish Details ---------------------------------------------" << endl;
    
    
    cin.ignore();
    cout << "\t\t\tEnter Dish: ";
    getline(cin, dish);
    
    cout<<"\t\t\tEnter the Dish ID: ";
    cin>> srno;
    
    cout << "\t\t\tEnter the frequency: ";
    cin>> fr;
    
    file.open("dishes.txt", ios::app | ios::out);
    file << dish << "\n" << srno << "\n" << fr << endl;
    file.close();
}

void Dishes :: Modify_Dishes()
{
	system("cls");
    fstream file, file1;
    string itemno;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Modify Dish Details ------------------------------------------" << endl;
    file.open("dishes.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Serial No. of Dish to be modified: ";
        cin >> itemno;
        file1.open("temp2.txt", ios::app | ios::out);
        
    	getline(file >> ws, dish);
    	getline(file, srno);
    	getline(file, fr);
        while (!file.eof())
        {
            if (itemno != srno)
               file1 << dish << "\n" << srno << "\n" << fr << endl;
               
            else
            {
            	cin.ignore();
                cout << "\n\t\t\tEnter Dish Name: ";
                getline(cin, dish);
                
                cout << "\t\t\tEnter the Dish Serial No.: ";
                cin >> srno;
                
            	cout<<"\t\t\tEnter the frequency: ";
            	cin >> fr;
                
                file1 << dish << "\n" << srno << "\n" << fr << endl;
                found++;
            }
            getline(file, dish);
    		getline(file, srno);
    		getline(file, fr);
    		
        }
        
        if (found == 0)
        {
            cout << "\n\n\t\t\t Dish Not Found....";
        }
        
        file1.close();
        file.close();
        remove("dishes.txt");
        rename("temp2.txt", "dishes.txt");
    }
}

void Dishes :: Display_Dishes()
{
	system("cls");
    fstream file;
    
    cout << "\n-----------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------- Dish List With Frequency --------------------------------------------" << endl<<endl;
    file.open("dishes.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	int count = 1;
    	
    	getline(file >> ws, dish);
    	getline(file, srno);
    	getline(file, fr);
        
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Item No.                |              Dish Name                   |       ID       |         Frequency"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        while (!file.eof())
        {
            cout << "\n\n" << count++;
            cout << "\t\t\t\t\t" << dish;
            cout << "\t\t\t\t\t " << srno;
            cout << "\t\t\t" << fr;
            getline(file, dish);
    		getline(file, srno);
    		getline(file, fr);
        }
        if (count == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}


void Dishes :: Dish_Interface()
{
	int z, h = 1;
    
    while(h == 1)
    {
    	system("cls");
    	
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ----------------------------------------- +" << endl;   
    	cout << "\n\t\t\t                   DISHES" << endl;
    	cout << "\n\t\t\t+ ----------------------------------------- +" << endl;
		cout << "\n\t\t\t| ----------------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Enter Dishes with Frequencies       |" << endl;
		cout << "\t\t\t|   2)  Display Dishes with Frequencies     |"   << endl;
		cout << "\t\t\t|   3)  Display Full Menu                   |"   << endl;
		cout << "\t\t\t|   4)  Modify Dish List                    |"	<< endl;
		cout << "\t\t\t|   5)  Exit                                |"	<< endl;
		cout << "\n\t\t\t| ----------------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ----------------------------------------- +\n\n" << endl;
		
        cout<<"Please enter your choice: ";
        cin>>z;
        
        switch (z)
        {
            case 1:
            	Dishes_List();
        		break;
        		
            case 2:
            	Display_Dishes();
                break;
            
            case 3:
                Full_Menu();
                break;
             
            case 4:
                Modify_Dishes();
                break;
                
            case 5:
            	h = 0;
            	break;
            	
            default:
            	cout<<"\nInvalid Input!! Please try again between 1-5\n";
                cout<<"\nPress enter to continue: ";
        }
        getch();
    }
}


class inventory : public Ingredients, public Utensils, public Dishes
{
	public:
		void Inv_Interface();
};

inline void inventory :: Inv_Interface()
{
	int choice, h = 1;
    
    
    while(h == 1)
    {
    	system("cls");
    	
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;   
    	cout << "\n\t\t\t            INVENTORY" << endl;
    	cout << "\n\t\t\t+ ------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)  Ingredients               |" << endl;
		cout << "\t\t\t|   2)  Utensils                  |"   << endl;
		cout << "\t\t\t|   3)  Dishes                    |"	<< endl;
		cout << "\t\t\t|   4)  Exit                      |"	<< endl;
		cout << "\n\t\t\t| ------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------- +\n\n" << endl;
	
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            	Ing_Interface();
        		break;
        		
            case 2:
                Ut_Interface();
                break;
                   
            case 3:
                Dish_Interface();
                break;
                   
            case 4:
                h = 0;
                break;
                   
            default:
	            cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress Enter to continue";
        }

    }
}
