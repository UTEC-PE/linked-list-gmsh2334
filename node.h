#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf(){
        if(next != nullptr){
            next = NULL;
            killSelf(next);
        }
    };

};

#endif