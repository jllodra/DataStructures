//
//  DStack.h
//  DataStructures
//
//  Created by Josep Llodrà Grimalt on 20/04/2018.
//  Copyright © 2018 Josep Llodrà Grimalt. All rights reserved.
//

#ifndef DStack_h
#define DStack_h

#include <assert.h>

/* Definition */

template<class T>
class DStack
{
public:
    DStack() : m_top(nullptr) {}
    ~DStack() { empty(); }
    DStack(const DStack &copy) : m_top(nullptr)
    {
        if (copy.m_top == nullptr)
            return;
        cell *dstCell, *prevDstCell, *srcCell;
        srcCell = copy.m_top;
        dstCell = new cell{srcCell->x};
        m_top = prevDstCell = dstCell;
        while ((srcCell = srcCell->next) != nullptr) {
            dstCell = new cell{srcCell->x};
            prevDstCell->next = dstCell;
            prevDstCell = dstCell;
        }
    }
    void empty();
    void push(const T &item);
    void pop();
    T top() const;
    bool isEmpty() const;
private:
    struct cell {
        T x;
        cell *next = nullptr;
    };
    cell *m_top;
};

/* Implementation */

template<class T>
void DStack<T>::empty()
{
    while (!isEmpty())
        pop();
}
template<class T>
void DStack<T>::push(const T &item)
{
    cell *c = new cell;
    c->x = item;
    c->next = m_top;
    m_top = c;
}
template<class T>
void DStack<T>::pop()
{
    assert(!isEmpty());
    cell *temp = m_top;
    m_top = m_top->next;
    delete temp;
}
template<class T>
T DStack<T>::top() const
{
    assert(!isEmpty());
    return m_top->x;
}
template<class T>
bool DStack<T>::isEmpty() const
{
    return m_top==nullptr;
}


#endif /* DStack_h */
