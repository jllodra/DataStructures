//
//  SStack.h
//  DataStructures
//
//  Created by Josep Llodrà Grimalt on 18/04/2018.
//  Copyright © 2018 Josep Llodrà Grimalt. All rights reserved.
//

#ifndef SStack_h
#define SStack_h

#include <assert.h>
#include <vector>

/* Definition */

template<class T>
class SStack
{
public:
    SStack(int max = 100) : m_memSpace(max), m_n(-1) {}
    void empty();
    void push(const T &item);
    void pop();
    T top() const;
    bool isEmpty() const;
private:
    std::vector<T> m_memSpace;
    int m_n;
};

/* Implementation */

template<class T>
void SStack<T>::empty()
{
    m_n = -1;
}
template<class T>
void SStack<T>::push(const T &item)
{
    ++m_n;
    m_memSpace[m_n] = item;
}
template<class T>
void SStack<T>::pop()
{
    assert(!isEmpty());
    --m_n;
}
template<class T>
T SStack<T>::top() const
{
    assert(!isEmpty());
    return m_memSpace[m_n];
}
template<class T>
bool SStack<T>::isEmpty() const
{
    return m_n==-1;
}


#endif /* SStack_h */
