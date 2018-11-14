/*********************************************************************
** Program name: Circular Linked List 
** Author: Ryan DiRezze
** Date: November 11, 2018
** Description: Implements the main menu and other menu-like
   functions.
*********************************************************************/

#include "menu.hpp"
#include "inputValidation.hpp"
#include "CircularLinkedList.hpp"

// primary menu that users use to navigate the program
void GameMenu(int& option) {
   // introduction
   string program_name = "Doubly-linked List";
   cout << "Hello! Welcome to the " << program_name << "!" << endl << endl;

   while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
      // menu prompt
      cout << "Please select an option from the following choices:" << endl;
      cout << "Input the option's corresponding letter to make a selection..." << endl << endl;
      
      // menu choices
      cout << "    1. Add a value to the back of the queue" << endl;
      cout << "    2. Display the front value" << endl;
      cout << "    3. Remove the front node" << endl;
      cout << "    4. Display the queue's content" << endl;
      cout << "    5. Exit" << endl;

      cout << endl << "Selection: ";
      cin >> option;
      intValidation(option);

      if(option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
         cout << endl;
         while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
            cout << "Uh oh! It looks like you didn't input a valid menu option... Please try again." << endl << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            cout << "Selection: "; 
            cin >> option;
            cout << endl;
         }
      }
   }
}


// the main/primary menu that users arrive at after starting the program;
// this menu allows the user to navigate to various areas of the program
// to perform different transactions and view different data.
void OLD_GameMenu(char& option1) {
   // introduction
   string program_name = "Doubly-linked List";
   cout << "Hello! Welcome to the " << program_name << "!" << endl << endl;

   while(tolower(option1) != 'a' && tolower(option1) != 'b' && tolower(option1) != 'c' && tolower(option1) != 'd' && tolower(option1) != 'e' && tolower(option1) != 'f' && tolower(option1) != 'g' && tolower(option1) != 'h') {
      // menu prompt
      cout << "Please select an option from the following choices:" << endl;
      cout << "Input the option's corresponding letter to make a selection..." << endl << endl;
      
      // menu choices
      cout << "    a. Add a new node to the head" << endl;
      cout << "    b. Add a new node to the tail" << endl;
      cout << "    c. Delete the first node in the list" << endl;
      cout << "    d. Delete the last node in the list" << endl;
      cout << "    e. Traverse the list reversely (tail to head)" << endl;
      cout << "    f. Print the head node's value" << endl;
      cout << "    g. Print the tail node's value" << endl;
      cout << "    h. Exit the program" << endl << endl;

      cout << "Selection: ";
      cin >> option1;
      charValidation(option1);

      if(tolower(option1) != 'a' && tolower(option1) != 'b' && tolower(option1) != 'c' && tolower(option1) != 'd' && tolower(option1) != 'e' && tolower(option1) != 'f' && tolower(option1) != 'g' && tolower(option1) != 'h') {
         cout << endl;
         while(tolower(option1) != 'a' && tolower(option1) != 'b' && tolower(option1) != 'c' && tolower(option1) != 'd' && tolower(option1) != 'e' && tolower(option1) != 'f' && tolower(option1) != 'g' && tolower(option1) != 'h') {
            cout << "Uh oh! It looks like you didn't input a valid menu option... Please try again." << endl << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            cout << "Selection: "; 
            cin >> option1;
            cout << endl;
         }
      }
      else {
         cout << endl;
      }
      if(tolower(option1) == 'f') {
         break;
      }
   }
}

// a small prompt that asks the user if he/she would like to return to the main
// menu; this was intended to appear after the user performs some transaction
void mainMenuReturn(int& option) {
   option = 0;
   while(option != 9 && option != 5) {
      cout << "Do you want to return to the main menu?" << endl;
      cout << "   1. Yes" << endl;
      cout << "   2. No" << endl;
      cout << endl << "Selection: ";
      cin >> option;
      validYesNo(option);

      if(option == 1) {
         option = 9;       // let the program escape the 'while loop' & return to the menu
      }
      
      else if(option == 2) {
         cout << "Do you want to exit the program?" << endl;
         cout << "   1. Yes" << endl;
         cout << "   2. No" << endl;
         cout << endl << "Selection: ";
         cin >> option;
         validYesNo(option);
         
         // escape the 'while loop' & quit the program
         if(option == 1) {
            option = 5;
         }
         
         // do nothing and let the program run back through the 'while loop'
         else if(tolower(option) == 2) {
            //option = 'n'
         }
      }
   }
}
