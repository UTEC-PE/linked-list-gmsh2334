#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        T nodes;

        void print_reverse(Node<T>* head);


    public:
        List(){
            nodes = 0;
            head= nullptr;
            tail= nullptr;
        };

        T front()
        {
            if(!head){
                throw "Lista vacia";
            }
            return head->data;
        };

        T back()
        {
            Node<T>* temp = head;
                if(!head){
                    throw "Lista vacia";
                }else if(nodes==1){
                    tail=head;
                }else{
                    while(temp -> next){
                        temp=temp->next;
                    }
                }
                tail=temp->data;
                delete temp;
            return tail;
        };
        void push_front(T value){
                Node<T>* temp=new Node<T>;
                temp -> data = value;
                temp -> next = head;
                head = temp;
                delete temp;
                nodes++;
        };

        void push_back(T value){
            Node<T>* temp=new Node<T>;
            temp -> data = value;
            Node<T>* nn = head;
            if (!head){
                head = temp;
            }else{
                while(nn -> next){
                    nn=nn->next;
                }
            }
            nn->next = temp;
            temp -> next= NULL;
            tail=temp;
            nodes++;
            delete temp, nn;
        };

        void pop_front(){
            Node<T> *temp = head;
            if(!head){
                throw "Lista vacia";
            }
            if(nodes == 1){
                head=nullptr;
            }else{
                head=temp->next;
            }
            delete temp;
            nodes--;
        };

        void pop_back(){
            Node<T> *temp = head;
            if(!head){
                throw "Lista vacia";
            }
            if(nodes == 1){
                head=tail=nullptr;
            }else{
                while(temp->next!=tail){
                    temp=temp->next;
                };
                tail = temp;
                temp=temp -> next;
            }
            delete temp;
            nodes--;
        };

        T get(int position){
            if(position>= nodes||position<0){
                throw "Poss... null";
            }
            int index =0;
            Node<T>* temp = head;
            while(temp){
                if(index == position){
                                return temp->data;
                }
                        temp=temp->next;
                        index ++;
                }
        };

        void concat(List<T> &other){
            Node<T>* temp = head;
            while (temp -> next){
                temp=temp -> next;
            }
            temp -> next=other.head;
            nodes=nodes+other.nodes;
            tail = other.tail;
            other.head = nullptr;
        };
        bool empty(){
            if(!head){
                throw "Lista vacia";
            }else{
                throw "La lista contiene elementos";
            }
        };
        int size(){
            Nodo<T>* temp=head;
            int num=0;
            if(!head){
                throw "El tamaño de la lista es 0";
            }else {
                while (temp->next){
                    temp=temp->next;
                    num++;
                }
            }
            delete temp;
            return num;
        };
        void print(){
            Node<T>* current =head;
            while(current){
                    cout<<current->data<<"";
                    current = current -> next;
            }
        };
        void print_reverse(){
            if(head != nullptr)
                head -> printReverse();
            cout<<head->data;
        };
        void clear(){
            while(head) {
                head = head->killSelf();
            }
        };
        Iterator<T> begin(){

        };
        Iterator<T> end(){

        };
        ~List(){
           clear();
        };
};
#endif
