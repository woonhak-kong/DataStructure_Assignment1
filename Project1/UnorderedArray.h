#pragma once
#include "BaseArray.h"


template <class T>
class UnorderedArray : public BaseArray<T>
{
public:
	UnorderedArray(int size) : BaseArray<T>(size)
	{

	}
	~UnorderedArray() override
	{
		std::cout << "UnorderedArray destructor()" << std::endl;
	}

	void push(T val) override
	{
		assert(this->m_array != nullptr); // Debugging purposes

		if (this->m_numElements >= this->m_maxSize)	// Check if the array has to expand to accommodate the new data.
		{
			this->Expand();
		}

		// My array has space for a new value. Let's add it!
		this->m_array[this->m_numElements] = val;
		this->m_numElements++;
	}
	int search(T searchKey) override
	{
		assert(this->m_array != nullptr);

		// Brute-force Search
		for (int i = 0; i < this->m_numElements; i++)
		{
			if (this->m_array[i] == searchKey)
			{
				return i;	// Return the index of where the item is located in the array
			}
		}

		return -1;
	}
};