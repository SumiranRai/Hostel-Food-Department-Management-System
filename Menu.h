class Menu
{
private:
	int day;

public:
	Menu(){};

	void Screen();
	void get_data();
	void print_data();
	void Monday_Menu();
	void Tuesday_Menu();
	void Wednesday_Menu();
	void Thursday_Menu();
	void Friday_Menu();
	void Saturday_Menu();
	void Sunday_Menu();
	void Full_Menu();
	void RM_Interface();

	~Menu(){};
};

void Menu::Screen()
{				
	miscellaneous::logo();
	
	cout << "\n\t\t\t+ --------------------------------- +" << endl;   
		cout << "\n\t\t\t              REGULAR MENU" << endl;
		cout << "\n\t\t\t+ --------------------------------- +" << endl;
		cout << "\n\t\t\t| --------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    MONDAY                    |" << endl;
		cout << "\t\t\t|   2)    TUESDAY                   |"   << endl;
		cout << "\t\t\t|   3)    WEDNESDAY                 |"	<< endl;
		cout << "\t\t\t|   4)    THURSDAY                  |"	<< endl;
		cout << "\t\t\t|   5)    FRIDAY                    |"	<< endl;
		cout << "\t\t\t|   6)    SATURDAY                  |"	<< endl;
		cout << "\t\t\t|   7)    SUNDAY                    |"	<< endl;
		cout << "\t\t\t|   8)    ALL DAYS                  |"	<< endl;
		cout << "\t\t\t|   9)    Exit                      |"	<< endl;
		cout << "\n\t\t\t| --------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ --------------------------------- +\n\n" << endl;
		
	

};

void Menu::get_data()
{
	cout <<" Please Enter the Day (1-8) for the Menu: ";
	cin>>day;
}

void Menu::print_data()
{
	system("CLS");
	switch(day)
	{
		case 1:
			Monday_Menu();
			break;
		
		case 2:
			Tuesday_Menu();
			break;
		
		case 3:
			Wednesday_Menu();
			break;
		
		case 4:
			Thursday_Menu();
			break;
	
		case 5:
			Friday_Menu();
			break;

		case 6:
			Saturday_Menu();
			break;

		case 7:
			Sunday_Menu();
			break;

		case 8:
			Full_Menu();
			break;
		
	default:
		try
		{
		if(day<=0||day>8)
			throw day;	
		}
		catch(int day)
		{ 
		cout<<"\n\t\t\t\t\t\t Please select within the options (1-8)\n\n";
		}
	break;
	}
}

void Menu::Full_Menu() 
{
	Monday_Menu();
	Tuesday_Menu();
	Wednesday_Menu();
	Thursday_Menu();
	Friday_Menu();
	Saturday_Menu();
	Sunday_Menu();
}

void Menu::Monday_Menu()
{
	int total_calories=0, calories;	
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                MONDAY - MENU                  |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	
	//Breakfast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Pesara Dosa         |\t       |           Upma             |"<<endl;
	cout<<"\t|           (01)             |\t       |           (02)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |"<<endl;
	cout<< "\t+----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140 + 190;
	total_calories = total_calories+calories;

	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+ \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (03)             |\t       |             (04)            |\t       |            (06)             |\t       |             (07)            |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 300 + 190 + 150 + 30;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
 	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (08)             |\t       |             (09)            |\t       |            (10)             |\t       |             (11)            |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 300 + 190 + 150 + 30;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
 	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|          (12)              |\t       |            (13)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::Tuesday_Menu()
{
	int total_calories=0, calories;
	//Brekafast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                TUESDAY - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|         Plain Dosa         |\t       |           Pongal            |"<<endl;
	cout<<"\t|             (14)           |\t       |            (15)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 210 kcal     |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";
	
	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (16)             |\t       |             (17)            |\t       |            (18)             |\t       |             (19)            |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	 
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (20)             |\t       |             (21)            |\t       |            (22)             |\t       |             (23)            |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|           (24)             |\t       |            (25)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::Wednesday_Menu()
{
	int total_calories=0, calories;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                WEDNESDAY - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|           Vada             |\t       |           Semiya            |"<<endl;
	cout<<"\t|           (26)             |\t       |            (27)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 70 kcal      |\t       |     Calories : 110 kcal     |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (28)             |\t       |             (29)            |\t       |            (30)             |\t       |            (40)             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|           (41)             |\t       |              (42)           |\t       |            (43)             |\t       |             (45)            |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|           (46)             |\t       |            (47)             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;
}

void Menu::Thursday_Menu()
{	
	int total_calories=0, calories;
	//Breakfast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                THURSDAY - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|            Idli            |\t       |           Bonda             |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 40 kcal      |\t       |     Calories : 70 kcal      |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::Friday_Menu()
{
	int total_calories=0, calories;
	//Breakfast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                FRIDAY - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+\t       +---------- DISH 3 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|         Chapati            |\t       |          Dum Aloo           |\t       |           Poha              |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 70 kcal      |\t       |     Calories : 180 kcal     |\t       |     Calories : 150 kcal     |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |\t       |         (Per Piece)         |"<<endl;
	cout<< "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::Saturday_Menu()
{
	int total_calories=0, calories;
	
	//Breakfast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                SATURDAY - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|           Set Dosa         |\t       |          Lemon Rice         |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 120 kcal     |\t       |     Calories : 175 kcal     |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|        Ragi Malt           |\t       |            Tea              |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 140 kcal     |\t       |     Calories : 190 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 
	
	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::Sunday_Menu()
{
	int total_calories=0, calories;

	//Breakfast
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                SUNDAY - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BREAKFAST - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|           Bread            |\t       |         Noodles             |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 90 kcal      |\t       |     Calories : 140 kcal     |"<<endl;
	cout<<"\t|       (Per Piece)          |\t       |        (Per Serving)        |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Lunch
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  LUNCH - MENU                 |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;
	
	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n";

	//Dinner
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                  DINNER - MENU                |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+ \t       +---------- DISH 3 -----------+  \t      +---------- DISH 4 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|           Rice             |\t       |            Sambar           |\t       |            Poha             |\t       |            Papad            |"<<endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<< endl;
	cout<<"\t|                            |\t       |                             |\t       |                             |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 300 kcal     |\t       |     Calories : 190 kcal     |\t       |     Calories : 150 kcal     |\t       |     Calories : 30 kcal      |"<<endl;
    cout<<"\t|       (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Serving)        |\t       |        (Per Piece)          |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+\t       +-----------------------------+\t       +-----------------------------+" << endl;

	//Beverages
	cout<<"\n\t        -----------------------------------------------"<<endl;
	cout<<"\t       |                BEVERAGES - MENU               |"<<endl;
	cout<<"\t        -----------------------------------------------\n"<<endl;
	cout<<"\n\n        +---------- DISH 1 ----------+ \t       +---------- DISH 2 -----------+"<<endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|          Tea               |\t       |            Coffee           |"<<endl;
	cout<<"\t|                            |\t       |                             |" << endl;
	cout<<"\t|                            |\t       |                             |"<<endl;
	cout<<"\t|    Calories : 100 kcal     |\t       |     Calories : 110 kcal     |"<<endl;
    cout<<"\t|       (Per Glass)          |\t       |        (Per Cup)            |"<<endl;
	cout << "\t+----------------------------+\t       +-----------------------------+" << endl;

	calories = 140+190;
	total_calories = total_calories+calories;
	
	cout<<"\n\t| Total Calories : "<<calories<<" kcal. |\n\n"; 

	cout<<"\n\t| Estimated Total Calories consumed within the day : "<<total_calories<<" kcal. |\n\n";
}

void Menu::RM_Interface()
{
back:
	char A;
	system("cls");
	miscellaneous::Time();
	Screen();
	get_data();
	print_data();
	cout<<"\n\n\t\t\t\t\t\t Do you want to go back (y/n) : ";
	cin>>A;
	A=tolower(A);
	if(A!='n')
	{
      	goto back;
	}
}

class Festival_Menu
{
protected:
	string occasion, date, info;
	float t_calories, d_calories;
	string dish, id, type;
	float calories;

	int n, i, no;


public:
	Festival_Menu()
	{
        t_calories=0;
		d_calories=0;
	};
 	void Set_Menu();
 	void Display_Menu();
	void FM_Interface();
	~Festival_Menu(){};
};

void Festival_Menu::Set_Menu()
{
	system("cls");

	fstream file, file1;
	file.open("festival_names.txt", ios::app | ios::out);

	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

    cout<< "\n\t\t\t\t\t\t A) Mention the name of the occasion : ";
	getline(cin, occasion);

   	cout<< "\n\t\t\t\t\t\t B) Input the date of the occasion (D/M/Y): ";
   	getline(cin, date);

   	file<<occasion<<"\n"<<date<<endl;

retry:
   	try
   	{
		cout<< "\n\t\t\t\t\t\t C) Enter no. of dishes being prepared (1-9) : ";
		cin>>no;

		if(n>=0 && n<=9)
   		{
     		n = no;
   		}
   		else if(n>9)
   		{
		    throw 16;
   		}
   		else if(n<=0)
   		{
   			throw 1.5;
   		}
   		else
   		{
   			throw 'A';
   		}
   	}

   	catch(int more)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Too many dishes!"<<endl;
		goto retry;
   	}
   	catch(float less)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Invalid no of dishes!"<<endl;
		goto retry;
   	}
   	catch(...)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Invalid input!"<<endl;
		goto retry;
   	}

	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

   	for(i=1;i<=n;i++)
   	{
   		file1.open("festival_menu.txt", ios::app | ios::out);

		cin.ignore();
   		cout<<"\n\n\t\t\t\t\t\t>> Name of dish "<<i<<" : ";
   		getline(cin, dish);

   		cout<<"\n\t\t\t\t\t\t>> Set ID no. for the dish (001 - 999) : ";
   		getline(cin, id);

		cout<<"\n\t\t\t\t\t\t>> Enter calories for the dish per serving (kcal) : ";
   		cin>>calories;

		cin.ignore();
        cout<<"\n\t\t\t\t\t\t>> Mention type of the dish (Breakfast, Lunch, Dinner) : ";
   		getline(cin, type);

   		file1<<dish<<"\n"<<id<<"\n"<<calories<<type<<endl;
	}

   	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

	cin.ignore();
	cout<< "\n\n\t\t\t\t\t\t D) Enter your comments for the occasion : ";
   	getline(cin, info);

   	file<<info<<endl;

   	file.close();
   	file1.close();
}

//Display_Menu function
void Festival_Menu::Display_Menu()
{
	system("cls");

	fstream file, file1;

	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t------------------------------------------- Special Menu --------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl<<endl;

    file.open("festival_names.txt", ios::in);
	file1.open("festival_menu.txt", ios::in);

    if(!file||!file1)
    {
    	cout<<"\n\n\t\t\t\t\t\t No data available."<<endl;
    	file.close();
    }
    else
   	{
   		int count=1;

  		getline(file, occasion);
   		getline(file, date);
   		getline(file, info);

		getline(file1, dish);
   		getline(file1, id);
   		file1>>calories;
   		getline(file1, type);


		while(!file.eof() && !file1.eof() )
   		{
   			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl;
   			cout<<"\t\t\t\t\t\t   Festival name - "<<occasion<<endl;
   			cout<<"\t\t\t\t\t\t   Date - "<<date<<endl;
   			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl;

   			getline(file, occasion);
   			getline(file, date);

			cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------";
    		cout << "\n\t\t\t\t\t\t| Dish No. |           Dish Name            |    ID    | Calories (per serving) |        Type        |";
    		cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------"<<endl<<endl;;

         
				cout<<endl;
   				cout<<"\t\t\t\t\t\t   "<<count++;
   				cout<<")\t\t\t"<<dish;
   				cout<<"\t\t\t"<<id;
   				cout<<"\t\t"<<calories;
				cout<<"\t               "<<type;


   				getline(file1, dish);
   				getline(file1, id);
   				file1>>calories;
   				getline(file1, type);


   				t_calories=t_calories + calories;

			d_calories=t_calories;
			t_calories=0;

			cout<<"\n\n";
			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl<<endl;
   			cout<< "\t\t\t\t\t\t\t Total calories throughout the day : "<<d_calories<<endl<<endl;
   			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl<<endl;
			cout<< "\t\t\t\t\t\t    "<<info<<endl<<endl;
   			cout<< "\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl<<endl;

			d_calories=0;
   			getline(file, info);
   		}
	}
	file.close();
	file1.close();
}


//Sick Student Class
class Sick_Student: public Festival_Menu
{
private:
	string name, regd_no, date_ad, symptoms, date_wd;
	string mem_name, mem_id;
	int x, xo;

public:
	Sick_Student(){};

	void Register_Student();
	void Print_Records();
	void Set_Menu();
	void Display_Menu();
	void SM_Interface();

	~Sick_Student(){};
};

//Register_Student function
void Sick_Student::Register_Student()
{
	system("CLS");
 	fstream file;
	file.open("Records.txt", ios::app | ios::out);

 	int check, check2;

	cout << "\n\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t\t-------------------------------------------- Registration -------------------------------------------";
	cout << "\n\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;

	cout<<"\n\t\t\t\t\t\t1) Enter the name of the sick student: ";
	getline(cin, name);

	cout<<"\n\t\t\t\t\t\t2) Enter student's regd. no: ";
	getline(cin, regd_no);

	cout<<"\n\t\t\t\t\t\t3) Enter the date of admission of the student: ";
	getline(cin, date_ad);

	cout<<"\n\t\t\t\t\t\t4) Enter student's symptoms: ";
	getline(cin, symptoms);

	cout<<"\n\t\t\t\t\t\t\5) Enter the date of withdrawal of the student: ";;
	getline(cin, date_wd);

    cout<< "\n+======================================================================================================+"<<endl<<endl;

	file<<name<<"\n"<<regd_no<<"\n"<<date_ad<<"\n"<<date_wd<<"\n"<<symptoms<<endl;
	file.close();
}

void Sick_Student::Print_Records()
{
	system("CLS");
	fstream file;
	file.open("Records.txt", ios::in);

	if (!file)
    {
        cout << "\nNo data entered yet."<<endl;
        file.close();
    }
	else
	{
		int count = 1;
		cout << "\n\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------";
    	cout << "\n\t\t\t\t\t\t---------------------------------------------- Records ----------------------------------------------";
		cout << "\n\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;

        cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------";
    	cout << "\n\t\t\t\t\t\t| Serial No. |          Student Name          |  Regd. No.  | Date of admission | Date of withdrawal |";
    	cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------"<<endl<<endl;;

        getline(file, name);
		getline(file, regd_no);
		getline(file, date_ad);
		getline(file, date_wd);
		getline(file, symptoms);

		while(!file.eof())
		{
			cout<<endl;
            cout<<"\t\t\t\t\t\t     "<<count++;
            cout<<")\t\t"<<name;
			cout<<"\t\t\t "<<regd_no;
            cout<<"\t\t "<<date_ad;
            cout<<"\t\t"<<date_wd<<endl;


			cout<<"\n\n\t\t\t\t\t\t     Symptoms : "<<symptoms<<endl<<endl;

			getline(file, name);
			getline(file, regd_no);
			getline(file, date_ad);
			getline(file, date_wd);
			getline(file, symptoms);
		}
	}
	file.close();
}

void Sick_Student::Set_Menu()
{
	system("cls");

	Print_Records();
	cout<<"\n\n\n\n\n";

	fstream file, file1, file2;
	file.open("Sick_Student.txt", ios::app | ios::out);

	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

    cout<< "\n\t\t\t\t\t\t A) Mention the name of the student : ";
	getline(cin, name);

   	cout<< "\n\t\t\t\t\t\t B) Input the registration no : ";
   	getline(cin, regd_no);

   	file<<name<<"\n"<<regd_no<<endl;

check:
   	try
   	{
   		cout<< "\n\t\t\t\t\t\t C) How many members are preparing the food (1-5) : ";
   		cin>>xo;

   		if(xo>=1 && xo<=5)
   		{
   			x=xo;
   		}
   		else
   		{
   			throw 'O';
   		}
	}
	catch(...)
	{
		cout<<"\n\t\t\t\t\t\t Invalid Input!";
		goto check;
	}

	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

   	for(i=1;i<=x;i++)
   	{
   		file2.open("Sick_In_Charge.txt", ios::app | ios::out);

		cin.ignore();
   		cout<<"\n\n\t\t\t\t\t\t>> Name of member "<<i<<" : ";
   		getline(cin, mem_name);

   		cout<<"\n\t\t\t\t\t\t>> Regd No of member "<<i<<" : ";
   		getline(cin, mem_id);

 	file2<<mem_name<<"\n"<<mem_id<<endl;
	}

	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

retry:
   	try
   	{
   		cout<< "\n\t\t\t\t\t\t D) Enter no. of dishes being prepared (1-15) : ";
   		cin>>no;
   		cin.ignore();

   		if(no>=1 && no<=15)
   		{
   			n=no;
   		}
   		else if(no>15)
   		{
   			throw 16;
   		}
   		else if(no<=0)
   		{
   			throw 1.5;
   		}
   		else
   		{
   			throw 'A';
   		}
   	}

   	catch(int more)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Too many dishes!"<<endl;
   		goto retry;
   	}
   	catch(float less)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Invalid no of dishes!"<<endl;
   		goto retry;
   	}
   	catch(...)
   	{
   		cout<<"\n\n\t\t\t\t\t\t Invalid input!"<<endl;
   		goto retry;
   	}

	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

   	for(i=1;i<=n;i++)
   	{
   		file1.open("Sick_Menu.txt", ios::app | ios::out);

		cin.ignore();
   		cout<<"\n\n\t\t\t\t\t\t>> Name of dish "<<i<<" : ";
   		getline(cin, dish);

   		cout<<"\n\t\t\t\t\t\t>> Set ID for the dish (001-999) : ";
     	getline(cin, id);

        cout<<"\n\t\t\t\t\t\t>> Enter calories for the dish per serving (kcal) : ";
   		cin>>calories;

		cin.ignore();
		cout<<"\n\t\t\t\t\t\t>> Mention type of the dish (Breakfast, Lunch, Dinner) : ";
   		getline(cin, type);

   		file1<<dish<<"\n"<<id<<"\n"<<calories<<type<<endl;
	}

   	system("cls");

   	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t----------------------------------------------- Set Menu --------------------------------------------" << endl<<endl;

	cin.ignore();
	cout<< "\n\n\t\t\t\t\t\t E) Enter words of encouragement for the sick student : ";
   	getline(cin, info);

   	file<<info<<endl;

   	file.close();
   	file1.close();
}

//Display_Menu function
void Sick_Student::Display_Menu()
{
	system("cls");

	fstream file, file1, file2;

	cout<< "\t\t\t\t\t\t-----------------------------------------------------------------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t-------------------------------------------   Sick Menu  --------------------------------------------" << endl;
    cout<< "\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl<<endl;

    file.open("Sick_Student.txt", ios::in);
	file1.open("Sick_Menu.txt", ios::in);
	file2.open("Sick_In_Charge.txt", ios::in);

	if(!file||!file1||!file2)
    {
    	cout<<"\n\n\t\t\t\t\t\t No data available."<<endl;
    	file.close();
    	file1.close();
    	file2.close();
    }
    else
   	{
        int count=1;

  		getline(file, name);
   		getline(file, regd_no);
   		getline(file, info);

		getline(file1, dish);
   		getline(file1, id);
   		file1>>calories;
   		getline(file1, type);

		getline(file2, mem_name);
		getline(file2, mem_id);


		while(!file.eof())
   		{
   			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl;
   			cout<<"\t\t\t\t\t\t   Student Name     - "<<name<<endl;
   			cout<<"\t\t\t\t\t\t   Regdistration No - "<<regd_no<<endl;
   			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl;

   			getline(file, name);
   			getline(file, regd_no);

			cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------";
    		cout << "\n\t\t\t\t\t\t| Dish No. |           Dish Name            |    ID    | Calories (per serving) |        Type        |";
    		cout << "\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------"<<endl<<endl;;

            while(!file1.eof())
            {
				cout<<endl;
   				cout<<"\t\t\t\t\t\t   "<<count++;
   				cout<<")\t\t\t"<<dish;
   				cout<<"       \t\t"<<id;
   				cout<<"\t\t"<<calories;
				cout<<"       \t\t"<<type;


   				getline(file1, dish);
   				getline(file1, id);
   				file1>>calories;
   				file1.ignore();
   				getline(file1, type);


      			t_calories=t_calories + calories;
				d_calories=t_calories;
			}

			cout<<"\n\n";
			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl<<endl;
   			cout<< "\t\t\t\t\t\t\t Total calories throughout the day : "<<d_calories<<endl<<endl;

			while(!file2.eof())
			{
			cout<< "\t\t\t\t\t\t\t Prepared by : " <<mem_name<<endl;
   			cout<< "\t\t\t\t\t\t\t Registration No : "<<mem_id<<endl<<endl;

   			getline(file2, mem_name);
   			getline(file2, mem_id);
			}

			cout<< "\t\t\t\t\t\t=====================================================================================================" << endl<<endl;
			cout<< "\t\t\t\t\t\t    "<<info<<endl<<endl;
   			cout<< "\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl<<endl;

			getline(file, info);
   		}

		t_calories=0;
		d_calories=0;
	}
	file.close();
	file1.close();
	file2.close();
}

void Festival_Menu::FM_Interface()
{
	
      int cho, z = 1;

    while(z == 1)
    {
    	system("cls");
    	miscellaneous::Time();
 		miscellaneous::logo();
 		
 		cout << "\n\t\t\t+ ------------------------------------- +" << endl;   
		cout << "\n\t\t\t           Festival Menu" << endl;
		cout << "\n\t\t\t+ ------------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    Set Menu                      |" << endl;
		cout << "\t\t\t|   2)    Display Menu                  |"   << endl;
		cout << "\t\t\t|   3)    Exit                          |"	<< endl;
		cout << "\n\t\t\t| ------------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------------- +\n\n" << endl;

        cout<<"Please enter your choice: ";
        cin>>cho;

        switch (cho)
        {
            case 1:
            	cin.ignore();
                Set_Menu();
        		break;

            case 2:
             	Display_Menu();
                break;

            case 3:
            	z = 0;
            	break;

            default:
            	cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress Enter to continue:";
        }
		getch();
    }
}

void Sick_Student::SM_Interface()
{
    int cho, z = 1;

    while(z == 1)
    {
    	system("cls");
    	miscellaneous::Time();
 		miscellaneous::logo();
 		
 		cout << "\n\t\t\t+ ------------------------------------- +" << endl;   
		cout << "\n\t\t\t           Sick Student Records" << endl;
		cout << "\n\t\t\t+ ------------------------------------- +" << endl;
		cout << "\n\t\t\t| ------------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    Register Student              |" << endl;
		cout << "\t\t\t|   2)    Set Menu for Sick Student     |"   << endl;
		cout << "\t\t\t|   3)    Display Student Records       |"	<< endl;
		cout << "\t\t\t|   4)    Display Sick Student's Menu   |"	<< endl;
		cout << "\t\t\t|   5)    Exit                          |"	<< endl;
		cout << "\n\t\t\t| ------------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ ------------------------------------- +\n\n" << endl;
	

        cout<<"Please enter your choice: ";
        cin>>cho;

        switch (cho)
        {
            case 1:
            	cin.ignore();
                Register_Student();
        		break;

            case 2:
            	cin.ignore();
              	Set_Menu();
                break;
			case 3:
				Print_Records();
				break;
			case 4:
				Display_Menu();
            case 5:
            	z = 0;
            	break;

            default:
            	cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress Enter to continue:";
        }
		getch();
    }
}

class Whole_Menu : public Menu, public Sick_Student
{
	public:
		void M_Menu_Interface();
		
};

void Whole_Menu :: M_Menu_Interface()
{
    int choice, h = 1;

    while(h == 1)
    {
    	system("cls");
    	miscellaneous::Time();
    	miscellaneous::logo();
    	cout << "\n\t\t\t+ --------------------------------- +" << endl;   
		cout << "\n\t\t\t              FOOD MENU" << endl;
		cout << "\n\t\t\t+ --------------------------------- +" << endl;
		cout << "\n\t\t\t| --------------------------------- |" << endl;
		cout << "\n\t\t\t|   1)    Regular Menu              |" << endl;
		cout << "\t\t\t|   2)    Festival Menu             |"   << endl;
		cout << "\t\t\t|   3)    Sick Student Details      |"	<< endl;
		cout << "\t\t\t|   4)    Exit                      |"	<< endl;
		cout << "\n\t\t\t| --------------------------------- |"	<< endl;
		cout << "\n\t\t\t+ --------------------------------- +\n\n" << endl;
		

        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            	RM_Interface();
        		break;

            case 2:
				FM_Interface();
                break;

            case 3:
				SM_Interface();
                break;

            case 4:
                h = 0;
                break;

            default:
	            cout<<"\nInvalid Input!! Please try again between 1-4\n";
                cout<<"\nPress Enter to continue";
        }
		getch();
    }

}