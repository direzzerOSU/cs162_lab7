/*********************************************************************
** Program name: Circular Linked List 
** Author: Ryan DiRezze
** Date: November 11, 2018
** Description: 
*********************************************************************/

#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;

struct QueueNode {
   QueueNode* next = nullptr;
   QueueNode* prev = nullptr;
   int val;
};

class Queue {
 public:
    Queue() { head = nullptr; }
    Queue(int x);
    ~Queue();
    bool isEmpty();
    void addBack(int val);
    int getFront();
    void removeFront();
    void printQueue();
 private:
    QueueNode* head = nullptr;
};

#endif
