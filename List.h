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

    // Método para agregar un nuevo autobús al final de la lista
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

    // Método para mostrar todos los autobuses en la lista
    void displayBuses() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            temp->data.displayInfo();
            temp = temp->next;
        }
    }

    // Método para buscar un autobús por número
    T* searchBus(int busNumber) const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data.getBusNumber() == busNumber) {
                return &temp->data;
            }
            temp = temp->next;
        }
        return nullptr; // No se encontró el autobús
    }

    // Método para eliminar un autobús por número
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
