//                Student:Nestor Garcia
//                DATE: 09/09/2020
//     SYSTEM - HARDWARE: Intel i7 (4th gen)
//            - SOFTWARE: MS Windows 7, Dev-C++
//          Input Devices: Keyboard
//         Output Devices: Terminal screen                                                                    
/*   PROGRAM ASSUMPTIONS: This program is a login system for the administrator only.
		(While loop used, strings, if,else)
*/
#include <iostream>
#include <string>
using namespace std;
int main() {

	string username = "";
	string password = "";
	bool loginSuccess = false;

	//Welcome the user to the terminal screen.
	cout << "\tWelcome! Please login below.\n\n";

	do {		//Ask user for username.
		cout << "Username:  ";
		cin >> username;
		//Ask user for password.
		cout << "Password:  ";
		cin >> password;

		//If "nestor" and "garcia123" are true, then "Succcessful Login"
		if (username == "nestor" && password == "garcia123") {
			cout << "\nSuccessful Login\n\n";
			loginSuccess = true;
		}
		else	//Otherwise, Incorrect username or password.
		{
			cout << "\nIncorrect username or password \n";
			cout << "Please try again. \n\n";
		}

	} while (!loginSuccess);


	system("pause");
	return 0;
}