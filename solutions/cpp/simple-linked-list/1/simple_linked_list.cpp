#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    return current_size;
    
}

void List::push(int entry) {
    if(head==nullptr){
        head=new Element(entry);
        tail=head;
    }
    else{
        tail->next=new Element(entry);
        tail=tail->next;
    }
    current_size++;
}

int List::pop() {
    if(head==nullptr){
        throw std::invalid_argument("value doesn't exist");
    }
    else if(head==tail){
        current_size--;
        int value=head->data;
        delete head;
        head=nullptr;
        tail=nullptr;
        return value;
    }
    else{
        current_size--;
        Element* value=head;
        while(value->next!=tail){
            value=value->next;
        }
        int data =tail->data;
        delete tail;
        value->next=nullptr;
        tail=value;
        return data;
    }
    
}

void List::reverse() {
    if(head==nullptr||head==tail){}
    Element* prev = nullptr;
    Element* current = head;
    Element* next = nullptr;
    tail=head;
    while(current!=nullptr){
        next = current->next;  // save next
        current->next = prev;  // reverse pointer
        prev = current;        // move prev forward
        current = next; 
    }
    head=prev;
    // TODO: Implement a function to reverse the order of the elements in the
    // list.
}

List::~List() {
    Element* value=head;
    while(value!=nullptr){
        Element* tmp;
        tmp=value;
        value=value->next;
        delete tmp;
    }
}

}  // namespace simple_linked_list
