#include "HeapArray.h"

template<class T>
HeapArray<T>::HeapArray()
{
	head = new TNode<T>;
	head->next = nullptr;
	head->data = nullptr;
}

template<class T>
HeapArray<T>::HeapArray(const T & type)
{

}

template<class T>
HeapArray<T>::~HeapArray()
{

}

template<class T>
T& HeapArray<T>::operator[] (const int& key)
{
	return temp;
}

template<class T>
void HeapArray<T>::Add(T & Value)
{
	TNode<T> * newType = new TNode < T > ;
	newType->data = Value;
	newType->next = head;
	head = newType;
}