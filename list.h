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

        void print_reverse(Node<T>* head){

        }


    public:
        List();

        int front(Node *i, T v)
        {
                Node add;
                add = (Nodo *) malloc(sizeof (Node));
                add -> data=v;
                add -> next =*p;
                p*=add;
        };

        int back(Node *f, T v)
        {
                Node *add, *temp = f;
                add = new Node;
                add -> data = v;
                add -> next = NULL;
                if ( temp == NULL){
                        v=add;
                }
                else{
                        while(temp->next != NULL){
                                temp = temp ->next;
                        }
                        temp -> next = add;
                }
        };
        void push_front(T value){};
        void push_back(T value){};
        void pop_front(){};
        void pop_back(){};
        T get(int position){};
        void concat(List<T> &other){};
        bool empty(){};
        int size(){};
        void print(){};
        void print_reverse(){};
        void clear(){};
        Iterator<T> begin(){};
        Iterator<T> end(){};

        ~List(){};
};
#endif
