//
// Created by vladislav on 25.12.2020.
//
// указатель - переменная, в которой хранится адрес

#ifndef GRAPH_LIST_H
#define GRAPH_LIST_H

#endif //GRAPH_LIST_H

class List {

private:
    struct Node {
        int data;
        struct Node* next;
    };


    Node *_head;
    Node *_tail;

    int _size;

public:
    List();
    void insert(int value);
    void push(int value);
    void display();
    int size();
};
