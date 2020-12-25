#include <iostream>
#include "./list/list.h"

// указатель - переменная, в которой хранится адрес

//struct Node {
//    int value;
//    struct Node* next;
//};
//
//void task1 () {
//    Node *head = NULL;
//    Node *tmp = NULL;
//
//    int number = 0;
//
//    while (number != 10) {
//        std::cout << "Input number: ";
//        std::cin >> number;
//
//        tmp = new Node;
//        tmp->value = number;
//        tmp->next = head;
//        head = tmp;
//    }
//
//    tmp = head;
//    while (tmp != NULL) {
//        std::cout << tmp->value << "->";
//        tmp = tmp->next;
//    }
//}

//void task2 () {
//    Node *head = NULL;
//    Node *till = NULL;
//    Node *temp = NULL;
//
//    int number = 0;
//
//    while (number != 10) {
//        std::cout << "Input number: ";
//        std::cin >> number;
//        temp = new Node;
//
//        if (head == NULL) {
//            head = new Node;
//            till = head;
//        } else {
//            till->next = temp;
//            till = temp;
//        }
//        till->value = number;
//        till->next = NULL;
//    }
//
//    temp = head;
//    while (temp != NULL) {
//        std::cout << temp->value << "->";
//        temp = temp->next;
//    }
//}

int main() {
    List *list = new List();

    list->push(8);
    list->push(9);
    list->insert(10);
    list->insert(20);
    list->push(1);

    // 1 -> 9 -> 8 -> 10 -> 20
    list->display();
//    list->size();
    return 0;
}
