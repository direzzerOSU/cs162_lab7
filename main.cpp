/*********************************************************************
** Program name: Circular Linked List 
** Author: Ryan DiRezze
** Date: November 11, 2018
** Description: 
*********************************************************************/

#include "menu.hpp"
#include "inputValidation.hpp"
#include "CircularLinkedList.hpp"

int main() {
   // (menu choice) initialize the variable for determining which function will be 'called'
   int selection;

   Queue* list = new Queue();

   // only break the loop if the user opts to exit the program
   while(selection != 5) {
      // reset the value after each iteration through the loop
      selection = 0;

      // start the menu of recursive functions
      GameMenu(selection);

      // add a value to the back of the queue
      if(selection == 1) {
         cout << "What number would you like to add to the back of the queue?\n  Number: ";
         int val;
         cin >> val;
         intValidation(val);
         list->addBack(val);
      }

      // display the front value
      else if(selection == 2) {
         if(list->isEmpty() == true) {
            cout << "List is empty..." << endl;
         }
         else {
            cout << "Front value: " << list->getFront() << endl;
         }
      }

      // remove the front node
      else if(selection == 3) {
         list->removeFront();
         if(list->isEmpty() == false) {
            list->printQueue();
         }
      }

      // display the queue's contents
      else if(selection == 4) {
         list->printQueue();
      }

      // break the loop & end the program
      else if(selection == 5) {
         break;
      }

      cout << endl << endl;
      mainMenuReturn(selection);      
      cout << endl;
   }
   
   delete list;
   return 0;
}
