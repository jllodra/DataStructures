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
#include <algorithm>

/* Definition */

template<class T>
class SStack
{
public:
     SStack(int size = 100)
     : m_size(size), m_n(-1)
     {
          m_memSpace = new T[m_size];
     }
     ~SStack()
     {
          delete [] m_memSpace;
     }
     SStack(const SStack &copy)
     : m_size(copy.m_size), m_n(copy.m_n), m_memSpace(new T[copy.m_size])
     {
          std::copy(copy.m_memSpace, copy.m_memSpace + copy.m_size, m_memSpace);
     }
     void empty();
     void push(const T &item);
     void pop();
     T top() const;
     bool isEmpty() const;
private:
     T *m_memSpace;
     int m_n;
     int m_size;
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
