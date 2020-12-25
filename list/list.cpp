//
// Created by vladislav on 25.12.2020.
//
#include <iostream>
#include "list.h"

List::List() {
    _head = nullptr;
    _tail = nullptr;

    _size = 0;
}

void List::insert(int value) {
    Node *temp = new Node;

    if (_head == nullptr) {
        _head = new Node;
        _tail = _head;
    } else {
        _tail->next = temp;
        _tail = temp;
    }

    _tail->data = value;
    _tail->next = nullptr;
    _size++;
}

void List::push(int value) {
    Node *temp = new Node;

    temp->data = value;
    temp->next = _head;
    _head = temp;

    if (_tail == nullptr) {
        _tail = _head;
    }

    _size++;
}

void List::display() {
    if (_size == 0) {
        std::cout << "List is empty" << std::endl;
    } else {
        Node *pointer = _head;
        while (pointer != nullptr) {
            std::cout << pointer->data << "->";
            pointer = pointer->next;
        }
        std::cout << std::endl;
    }
}

int List::size() {
    return _size;
}


