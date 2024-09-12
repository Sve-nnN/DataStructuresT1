#pragma once
#include "Node.h"
#include "Bus.h"
template <typename T>
class List {
private:
    Node<T>* head;

public:
    List() {
        head = nullptr;
    }

    // M�todo para agregar un nuevo autob�s al final de la lista
    void addBus(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // M�todo para mostrar todos los autobuses en la lista
    void displayBuses() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            temp->data.displayInfo();
            temp = temp->next;
        }
    }

    // M�todo para buscar un autob�s por n�mero
    T* searchBus(int busNumber) const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data.getBusNumber() == busNumber) {
                return &temp->data;
            }
            temp = temp->next;
        }
        return nullptr; // No se encontr� el autob�s
    }

    // M�todo para eliminar un autob�s por n�mero
    void removeBus(int busNumber) {
        if (head == nullptr) return;

        if (head->data.getBusNumber() == busNumber) {
            Node<T>* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != nullptr && temp->next->data.getBusNumber() != busNumber) {
            temp = temp->next;
        }

        if (temp->next != nullptr) {
            Node<T>* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
};
