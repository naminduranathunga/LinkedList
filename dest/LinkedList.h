/**
 * @mainpage Linked List
 * 
 * This simple library is allowing to handle linked lists more easily. The library provides necessary 
 * functions to do operations on a linked list.
 *      @version 1.0.0
 *      @author Namindu S. Ranathunga (http://namindu.tk)
 * 
 * The open source library is published on GitHub under MIT license and is open to use or modify for personal and commercial purposes.
*/



#ifndef LINKED_LIST
#define LINKED_LIST 1

#include <exception>
/**
 * @class LinkedListException
 * 
 * @brief LinkedListException handles exceptions from the Linked list class
*/

class LinkedListException :public std::exception{
    private:
        const char* msg;
    public:
        LinkedListException():LinkedListException("Unknown Linked List Exception"){}

        LinkedListException(const char* msg): msg(msg){}

        /**
         * @fn what
         * @brief This will return the exception message.
         * @return const char* message
        */
        const char* what() const noexcept override;
};

/**
 * @class Node 
 * 
 * This class is the base class for linked list node. You can inherite the class to make your own class;
 * by default the class privide "next" variable for linking the list.
*/

class Node{
    public:
        Node* next;
        Node();
};

/*
template <typename T> 
class DataNode:Node{
    public:
        T* data = nullptr;
        Node* next;
        Node(){
            next = nullptr;
        }
};*/

/**
 * @class LinkedList
 * 
 * This linked list is the main handling class for providing easy handling for linked list. 
*/
class LinkedList{
    private:
        Node* list;
        Node* last_node;
        int length;

    public:
        LinkedList();
        
        /**
         * @fn GetItem
         * @brief This fuction will return the Node object from the linked list with requested index. This will return nullptr if the index is outof range.
         * 
         * @param index - the index of the required element.
         * 
         * @return Node pointer element of from the linked list.
         * 
         * Alternatively, this library provide direct access for element with the operator [].
         * eg: (Node*)linkedList[i];
         * 
        */
        Node* GetItem(int index) const;


        /**
         * @fn prepend
         * 
         * @brief This will add a node to the starting position of the linked list
         * 
         * @param n - (Node*) pointer for Node object
        */
        void prepend(Node* n);

        /**
         * @fn append
         * 
         * @brief This will add a node to the last position of the linked list
         * 
         * @param n - (Node*) pointer for Node object
        */
        void append(Node* n);


        /**
         * @fn insert
         * 
         * @brief This will add a node to the given position position of the linked list
         * 
         * @param n - (Node*) pointer for Node object
         * @param position - (int) position of the element
        */
        void insert(Node* n, int position);

        /**
         * @fn insertAfter
         * 
         * @brief This will add a node after the given position position of the linked list
         * 
         * @param n - (Node*) pointer for Node object
         * @param position - (int) position of the element
        */
        void insertAfter(Node* n, int position);

        /**
         * @fn insertBefore
         * 
         * @brief This will add a node before the given position position of the linked list
         * 
         * @param n - (Node*) pointer for Node object
         * @param position - (int) position of the element
        */
        void insertBefore(Node* n, int position);


        /**
         * @fn remove
         * 
         * @brief This will remove an element in the given position of the linked list.
         * 
         * @param index - (int) position of the element
        */
        void remove(int index);

        
        /**
         * @fn size
         * 
         * @brief This will return the length of the linked list.
         * 
        */
        int size() const;

        Node* operator[](int i) const;
};

#endif