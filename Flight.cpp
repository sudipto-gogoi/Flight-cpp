#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
    public:
       static string name,gender;
       int phoneNo;
       int age;
       string add;
       static int cId;
       char arr[100];

       void information()
       {
        cout<<"\n\tEnter the customer ID : ";
        cin>>cId;
        cout<<"\n\tEnter the name : ";
        cin>>name;
        cout<<"\n\tEnter the age : ";
        cin>>age;
        cout<<"\n\tAddress : ";
        cin>>add;
        cout<<"\n\tGender : ";
        cin>>gender;
        cout<<"\n\tYour details are saved with us\n\n"<<endl;
       }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
         static int choice;
         int choice1;
         int back;
         static float charges;

         void flights()
         {
            string flightN[]={"Dubai","Canada","UK","USA","Austratlia","Europe"};

            for(int a=0;a<6;a++)
            {
               cout<<"\t"<<(a+1)<<". Flight to "<<flightN[a]<<endl;

            }

            cout<<"\n\t\tWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight : ";
            cin>>choice;

            switch(choice)
            {
            case 1:
                {
                    cout<<"\t___________Welcome to Dubai Emirates___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enjoy the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:_____\n"<<endl;

                    cout<<"\t1. DUB - 498"<<endl;
                    cout<<"\t\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
                    cout<<"\t2. DUB - 658"<<endl;
                    cout<<"\t\t09-01-2022 4:00AM 10hrs Rs. 10000"<<endl;
                    cout<<"\t3. DUB - 508"<<endl;
                    cout<<"\t\t11-01-2022 8:00AM 10hrs Rs. 9000"<<endl;

                    cout<<"\n\tSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\n\n\tYou have succesfully Booked the flight DUB - 498"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges=10000;
                        cout<<"\n\n\tYou have succesfully Booked the flight DUB - 658"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                     else if(choice1==3)
                    {
                        charges=9000;
                        cout<<"\n\n\tYou have succesfully Booked the flight DUB - 508"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__ "<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }

                }

             case 2:
                {
                      cout<<"\t___________Welcome to Canadian Airlines___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enjoy the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:____\n"<<endl;

                    cout<<"\t1. CA - 198"<<endl;
                    cout<<"\t\t09-01-2022 2:00AM 20hrs Rs. 34000"<<endl;
                    cout<<"\t2. CA - 158"<<endl;
                    cout<<"\t\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
                    cout<<"\t3. CA - 208"<<endl;
                    cout<<"\t\t11-01-2022 12:00AM 21hrs Rs. 40000"<<endl;

                    cout<<"\n\tSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=34000;
                        cout<<"\n\tYou have succesfully Booked the flight CA - 198"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges=29000;
                        cout<<"\n\tYou have succesfully Booked the flight CA - 158"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                     else if(choice1==3)
                    {
                        charges=40000;
                        cout<<"\n\tYou have succesfully Booked the flight CA - 208"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__ "<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }
                }
            case 3:
                   {
                      cout<<"\t___________Welcome to UK Airways___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enjoy the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:____\n"<<endl;

                    cout<<"\t1. UK - 798"<<endl;
                    cout<<"\t\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;

                    cout<<"\n\tSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=44000;
                        cout<<"\n\tYou have succesfully Booked the flight UK - 798"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__ "<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }
                   }
             case 4:
                   {
                      cout<<"\t___________Welcome to US Airways___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enjoy the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:___ \n"<<endl;

                    cout<<"\t1. US - 567"<<endl;
                    cout<<"\t\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
                    cout<<"\t2. US - 587"<<endl;
                    cout<<"\t\t09-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
                    cout<<"\t3. US - 354"<<endl;
                    cout<<"\t\t12-01-2022 10:00AM 21hrs Rs. 42000"<<endl;

                    cout<<"\n\tSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=37000;
                        cout<<"\n\tYou have succesfully Booked the flight US - 567"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges=39000;
                        cout<<"\n\tYou have succesfully Booked the flight US - 587"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                     else if(choice1==3)
                    {
                        charges=42000;
                        cout<<"\n\tYou have succesfully Booked the flight US - 354"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }
                   }
          case 5:
                    {
                        cout<<"\t___________Welcome to Australian Airlines___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enter the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:____\n"<<endl;

                    cout<<"\t1. As - 698"<<endl;
                    cout<<"\t\t018-01-2022 9:00AM 20hrs Rs. 44000"<<endl;
                    cout<<"\t2. As - 158"<<endl;
                    cout<<"\t\t019-01-2022 4:00AM 22hrs Rs. 34000"<<endl;
                    cout<<"\t3. As - 708"<<endl;
                    cout<<"\t\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;

                    cout<<"\n\tSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=44000;
                        cout<<"\n\tYou have succesfully Booked the flight As - 698"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges=34000;
                        cout<<"\n\tYou have succesfully Booked the flight As - 158"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                     else if(choice1==3)
                    {
                        charges=42000;
                        cout<<"\n\tYou have succesfully Booked the flight As - 708"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__ "<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }
                    }
         case 6:
                    {
                      cout<<"\t___________Welcome to European Airlines___________\n"<<endl;

                    cout<<"\tYour comfort is our Priority. Enter the journey!"<<endl;

                    cout<<"\tFollowing are the Flights:___\n"<<endl;

                    cout<<"\t1. EU - 898"<<endl;
                    cout<<"\t\t02-01-2022 2:00AM 18hrs Rs. 36000"<<endl;
                    cout<<"\t2. EU - 958"<<endl;
                    cout<<"\t\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
                    cout<<"\t3. EU - 608"<<endl;
                    cout<<"\t\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;

                    cout<<"\n\tSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=36000;
                        cout<<"\n\n\tYou have succesfully Booked the flight EU - 898"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges=37000;
                        cout<<"\n\n\tYou have succesfully Booked the flight EU - 958"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                     else if(choice1==3)
                    {
                        charges=31000;
                        cout<<"\n\n\tYou have succesfully Booked the flight EU - 608"<<endl;
                        cout<<"\tYou can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\n\tInvalid input , shifting to the previous menu"<<endl;
                        flights();
                    }
                        cout<<"\n\tPress any key to go back to the main menu(Eg:1)__ "<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();

                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                    default :
                    {
                        cout<<"\tInvalid input, Shifting you to the Main Menu !"<<endl;
                        mainMenu();
                        break;
                    }
            }
         }
};
float registration::charges;
int registration::choice;


class ticket : public registration, Details
{
    public:

       void Bill()
       {
           string destination="";
           ofstream outf("records.txt");
           {
               outf<<"\t____________XYZ Airlines___________"<<endl;
               outf<<"\t_______________Ticket______________"<<endl;
               outf<<"\t___________________________________"<<endl;

               outf<<"\tCustomer ID: "<<Details::cId<<endl;
               outf<<"\tCustomer Name: "<<Details::name<<endl;
               outf<<"\tCustomer Gender: "<<Details::gender<<endl;
               outf<<"\t______Description______ "<<endl<<endl;

               if(registration::choice==1)
               {
                     destination="Dubai";
               }
               else if(registration::choice==2)
               {
                     destination="Canada";
               }
               else if(registration::choice==3)
               {
                     destination="UK";
               }
               else if(registration::choice==4)
               {
                     destination="USA";
               }
               else if(registration::choice==5)
               {
                     destination="Australia";
               }
                else if(registration::choice==6)
               {
                     destination="Europe";
               }

               outf<<"\tDestination :\t\t"<<destination<<endl;
               outf<<"\tFlight cost :\t\t"<<registration::charges<<endl;
           }
           outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File Error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};


void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t                   XYZ Airlines\n"
         << endl;
    cout << "\t_______________________Main Menu_________________" << endl;
    cout << "\t_________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details \t|" << endl;
    cout << "\t|\t Press 2 for flight registration     \t|" << endl;
    cout << "\t|\t Press 3 for ticket and charges      \t|" << endl;
    cout << "\t|\t Press 4 to Exit                     \t|" << endl;

    cout << "\t_________________________________________________" << endl;

    cout << "\tEnter the Choice : ";
    cin >> lchoice;
    cout<<"\n";

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "\t____________Customers____________\n"<< endl;
        d.information();
        cout<<"\tPress any key to go back to Main menu(Eg:1) ";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
       {
        cout<<"\t_________Book a flight using this system_________\n"<<endl;
        r.flights();
        break;
       }

       case 3:
       {
       cout<<"\t___________Get your Ticket___________\n"<<endl;
       t.Bill();

       cout<<"\tYour ticket is Printed, You can collect it. \n"<<endl;
       cout<<"\tPress 1 to Display your Ticket__";

       cin>>back;

           if (back==1)
           {
            t.dispBill();
            cout<<"\tPress any key to go to main menu(Eg:1)__ ";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
           }
           else
           {
            mainMenu();
           }
           break;
           }
      case 4:
      {
        cout<<"\n\n\n\n\t____________________Thank-you_____________________"<<endl;
        break;
      }

      default :
      {
        cout<<"\tInvalid input, Please Try Again!\n"<<endl;
      }
    }
}

int main()
{
    Management mobj;
    return 0;
}
