#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf(){
        if(next != nullptr){ // Así no es esta función, esto no va a borrar nada
            next = NULL;
            killSelf(next);
        }
    };
    void printReverse(){
        if(next != nullptr)
            next -> printReverse();
        std::cout<<data;
    }
};

#endif