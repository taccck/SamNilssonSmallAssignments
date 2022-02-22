#pragma once
template <class T>
class Bag
{
private:
	T* arr;
	size_t count;

	void resize(size_t newSize) 
	{
		if (newSize == count) return;

		T* newArr = new T[newSize];
		copy(arr, count, newArr, newSize);
		delete[] arr;
		arr = newArr;
		count = newSize;
	}

public:
	Bag()
	{
		count = 0;
		arr = new T[count];
	}

	Bag(T* items, size_t bagSize)
	{
		arr = items;
		count = bagSize;
	}

	~Bag()
	{
		delete[] arr;
	}

	T at(size_t index) 
	{
		return arr[index];
	}

	void copy(T* from, size_t fromSize, T* to, size_t toSize)
	{
		for (size_t i = 0; i < toSize; i++)
		{
			if (i >= fromSize) return;

			to[i] = from[i];
		}
	}

	void push_back(T item)
	{
		resize(count + 1);
		arr[count - 1] = item;
	}

	T pop_back()
	{
		if (count <= 0) return 0;
		T toPop = arr[count - 1];
		resize(count - 1);
		return toPop;
	}

	size_t size()
	{
		return count;
	}
};