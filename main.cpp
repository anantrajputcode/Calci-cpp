#include <iostream>
#include <fstream>
#include "template.h"
using namespace std;
int main()
{   
    string password;
    string input_pass;
    int choice{1};
    auto x = 1.1, y = 2.1;
    int sys_ch = 1;
    fstream myfile("password.txt", ios::app);
    myfile.seekp(0, ios::end);
    if (myfile.tellp() == 0)
    {
        myfile << "a";
    }
    myfile.close();
    cout << "\t\t\t\t\t\tWELCOME TO CALCI" << endl;
    cout << "\t\t\t\t\t\t****************" << endl;
    cout << "Enter the password to login: ";
    cin >> input_pass;
    fstream f2 ("password.txt", ios::in);
    getline(f2, password);
    f2.close();
    if (password == input_pass)
    {
        while (choice != 0)
        {
            cout << "\t\t\t\t\t\tHome" << endl;
            cout << "\t\t\t\t\t\t*****" << endl << endl;
            cout << "Select the appropriate choice for the operation:-" << endl;
            cout << "1.Addition" << endl;
            cout << "2. Subtraction" <<endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "5. String concatination" << endl;
            cout << "6. System Settings" << endl;
            cout << "0. Exit" << endl;
            cout << endl;
            cout << "Enter your choice : " << endl;
            cin >> choice;
            if (choice != 0 && choice != 5 && choice != 6){
                cout << "Enter the first Number : " << endl;
                cin >> x;
                cout << "Enter the second Number : " << endl;
                cin >> y;
            }
            switch (choice)
            {
                case 1:{
                   auto result = add(x, y);
                   cout << "the result of addition between " << x << " and " << y << " is : " << result << endl;
                    break;
                }
                case 2: {
                    auto result = sub(x, y);
                    cout << "the result of subtraction between " << x << " and " << y << " is : " << result << endl;
                    break;
                }
                case 3:{
                    auto result = mult(x, y);
                    cout << "the result of multiplication between " << x << " and " << y << " is : " << result << endl;
                    break;
                }
                case 4:{
                    auto result = div(x, y);
                    cout << "the result of division between " << x << " and " << y << " is : " << result << endl;
                    break;
                }
                case 5:{
                    string s1;
                    string s2;
                    cout << "Ente the first string : ";
                    cin >> s1;
                    cout << "Enter the second string : ";
                    cin >> s2;
                    auto result = add (s1, s2);
                    cout << "the result of concatination between """ << s1 << """ and """ << s2 << """ is : """ << result << """" << endl;
                    break;
                }
                case 6:{

                    while (sys_ch != 2 && sys_ch != 3)
                    {
                        cout << "\t\t\t\t\t\tWelcome to System Settings" << endl;
                        cout << "\t\t\t\t\t\t**************************" << endl;
                        cout << "\t\t\t\t1. Change Password" << endl;
                        cout << "\t\t\t\t2. Return to previous menu" << endl;
                        cout << "\t\t\t\t3. Log Out" << endl;
                        cout << endl;
                        cout << "\t\t\t\tEnter the choice : " << endl;
                        cin >> sys_ch;
                        switch (sys_ch)
                        {
                            case 1:{
                                string pass1;
                                string pass2;
                                string pass_check;
                                cout << "\t\t\t\t\t\tEnter the current password : ";
                                cin >> pass_check;
                                if (pass_check == password)
                                {
                                    cout << "Enter the New password : ";
                                    cin >> pass1;
                                    cout << "Re-Enter the above password : ";
                                    cin >> pass2;
                                    if (pass1 == pass2)
                                    {
                                        fstream f3("password.txt", ios::out);
                                        f3 << pass1;
                                        f3.close();
                                    }
                                    else{
                                        cout << "TRY AGAIN." << endl;
                                    }
                                }
                            }
                        }
                    }

                }
            }
        }

    }
    return 0;
}