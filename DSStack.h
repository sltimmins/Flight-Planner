//
// Created by Sammy Timmins on 10/20/20.
//

#ifndef INC_20F_FLT_PLN_DSSTACK_H
#define INC_20F_FLT_PLN_DSSTACK_H

#include "DSLinkedList.h"

template <typename T>
class DSStack
{
public:
    DSStack() = default;
    ~DSStack() = default;
    DSStack(const DSStack &copy);
    DSStack& operator=(const DSStack &copy);
    friend std::ostream& operator<<(std::ostream& os, DSStack& stack);
    void push(const T &toAdd);
    void pop();
    T& peek();
    bool isEmpty();
    int getSize();
    bool search(const T& toFind);
    DSLinkedList<T> getList();

private:
    DSLinkedList<T> list;
};

template <typename T>
DSStack<T>::DSStack(const DSStack<T> &copy)
{
     list = copy.list;
}

template <typename T>
DSStack<T> & DSStack<T>::operator=(const DSStack<T> &copy)
{
    for(int i = 0; i < copy.list.getSize(); i++)
    {
        list.add(copy.list.at(i));
    }
    return *this;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, DSStack<T>& stack)
{
    os << stack.list;
    return os;
}

template <typename T>
void DSStack<T>::push(const T &toAdd)
{
    list.add(toAdd);
}

template <typename T>
void DSStack<T>::pop()
{
    if(list.getSize() > 0)
    {
        list.remove(list.at(list.getSize() - 1));
    } else
    {
        throw std::out_of_range("Pop on stack of size 0");
    }
}

template <typename T>
T& DSStack<T>::peek()
{
    if(list.getSize() > 0)
    {
        return list.at(list.getSize() - 1);
    }
    else
    {
        throw std::out_of_range("Peek on stack of size 0");
    }
}

template <typename T>
bool DSStack<T>::isEmpty()
{
    return (list.getSize() == 0);
}

template <typename T>
int DSStack<T>::getSize()
{
    return list.getSize();
}

template<typename T>
bool DSStack<T>::search(const T& toFind) {
    return list.search(toFind) >= 0;
}

template<typename T>
DSLinkedList<T> DSStack<T>::getList() {
    DSLinkedList<T> toReturn;
    for(int i = 0; i < list.getSize(); i++)
    {
        toReturn.add(list.at(i));
    }
    return toReturn;
}

#endif //INC_20F_FLT_PLN_DSSTACK_H
