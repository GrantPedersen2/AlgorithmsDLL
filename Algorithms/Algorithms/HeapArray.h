#include "Libraries.h"

template<class T>
class HeapArray
{
public:
	
	//Constructors
	HeapArray();
	HeapArray(const T & type);
	~HeapArray();
	
	//Class Index overload
	T& operator[] (const int& key);

	//Functions
	void Add(T & Value);
	void Remove(const T & Value);
	bool Contains(const T & Value) const;
	void SortHeap();

private:
	T * temp;

	//Struct template anyon nested in class
	template<class Y> struct Node
	{
		Y * data;
		Node * next;
	};

	//We can now create anyon types of templates and expand
	template<class Y> using TNode = Node < Y >;
	TNode<T> * head;
};