#pragma once
#include <stdexcept>
namespace linked_list {
template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(T d){
        data=d;
        next=nullptr;
    }
};
template <typename T>
class List{
  private:
    Node<T>* head;
    Node<T>* tail;
    public:
    List(){
        head=nullptr;
        tail=nullptr;
    }
    void push(T data){
        if(head==nullptr){
            head=new Node<T>(data);
            tail=head;
        }
        else{
            tail->next=new Node<T>(data);
            tail=tail->next;
            tail->next=nullptr;
        }
    }
    T pop(){
        if(head==nullptr){
            throw std::invalid_argument("value doesn't exist");
        }
        else if(head==tail){
            head=nullptr;
            Node<T>* temp=tail;
            tail=nullptr;
            T value=temp->data;
            delete temp;
            return value;
            
        }
        else{
            Node<T>* value=head;
            while(value->next!=tail){
                value=value->next;
            }
            Node<T>* temp=tail;
            tail=value;
            tail->next=nullptr;
            T valuq=temp->data;
            delete temp;
            return valuq;
            
        }
    }
    T shift(){
        Node<T>* temp=head;
        if(head==nullptr){
                       throw std::invalid_argument("value doesn't exist");
        }
        head=head->next;
        if(head==nullptr){
            tail=nullptr;
        }
        T value=temp->data;
        delete temp;
        return value;
    }
    void unshift(T data){
        Node<T> * temp=new Node<T>(data);
        temp->next=head;
        head=temp;
        if(tail==nullptr){
            tail=head;
        }
    }
    int count(){
        int c=0;
        Node<T>* temp=head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        return c;
    }
    bool erase(T dat){
        Node<T>* temp=head;
        if(head==nullptr){
            return false;
        }else if(head==tail&&head->data==dat){
            this->shift();
            return true;
        }
        else if(head->data == dat){
        this->shift();
        return true;
    }
        else if(head==tail){return false;}
        while(temp->next!=nullptr&&temp->next->data!=dat){
            temp=temp->next;
        }
        if(temp->next==nullptr){
            return false;
        }
        else{
            Node<T>* value;
            value=temp->next;
            temp->next=temp->next->next;
            if(value == tail){
            tail = temp;
        }
            delete value;
            return true; 
        }
        
    }
};

}  // namespace linked_list
