#include "LinkedList.h"

const char* LinkedListException::what() const noexcept{
    return msg;
}

Node::Node(){
    next = nullptr;
}



/**LinkedList*/

LinkedList::LinkedList(){
    list = nullptr;
    last_node = nullptr;
    length = 0;
}

Node* LinkedList::GetItem(int index) const{
    if (index < length && index >= 0){
        Node* ele = list;
        for (int i = 0; i < length; i++){
            if (i == index){
                break;
            }else{
                ele = ele->next;
            }
        }
        return ele;

    }else{
            return nullptr;
    }
}

void LinkedList::prepend(Node* n){
    n->next = list;
    list = n;
    if (length == 0){
        last_node = n; //update last element tracking
    }
    length++;
}

void LinkedList::append(Node* n){
    last_node->next = n;
    last_node = n;
    length++;
}


void LinkedList::insert(Node* n, int position){
    if (position == 0){
        prepend(n);
    }else if (position == length){
        append(n);
    }else if (position > length || position < 0){
        //do nothing. throw exception
        throw new LinkedListException("Linked list out of index.");
    }else{
        Node* ele = list;

        for (int i = 0; i < length; i++){
            if (i == position - 1){
                n->next = ele->next;
                ele->next = n;
                length++;
            }else{
                ele = ele->next;
            }
        }
    }
}

void LinkedList::insertAfter(Node* n, int position){
    insert(n, position + 1);
}

void LinkedList::insertBefore(Node* n, int position){
    insert(n, position - 1);
}

void LinkedList::remove(int index){
    //underflow prevention
    if (length <= 0){
        throw new LinkedListException("Linked list out of index.");
    }
    Node* tmp = nullptr;

    if (index == 0){
        tmp = list;
        list = list->next;
        if (list == nullptr){
            last_node = nullptr;
        }

        length--;
    }else if (index >= length || index < 0){
        //do nothing. throw exception
        throw new LinkedListException("Linked list out of index.");
    }else{
        Node* tmp = list;

        for (int i = 0; i < index; i++){
            if (i == index - 1){
                last_node = tmp;
                tmp = tmp->next;
                last_node->next = tmp->next;
                length--;
                break;
            }else{
                tmp = tmp->next;
            }
        }
    }

    if (tmp != nullptr){
        delete tmp;
    }
}


int LinkedList::size() const{
    return length;
}

Node* LinkedList::operator[](int i) const{
    return GetItem(i);
}