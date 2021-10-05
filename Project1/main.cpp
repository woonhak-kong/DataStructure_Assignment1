#include <iostream>
#include "OrderedArray.h"
#include "UnorderedArray.h"


using namespace std;

int main()
{

	OrderedArray<int> array(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23); // <-- Should expand here			// 3 23 82
	array.push(82); // <-- Should expand here

	cout << array.GetSize();
	array[2] = 112;

	array.pop();
	array.remove(2);

	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	cout << "Search for 23 was found at index: ";
	cout << array.search(23);

	cout << endl << endl;


	UnorderedArray<int> uArray(30);

	uArray.push(10);
	uArray.push(12);
	uArray.push(1);
	uArray.push(6);
	uArray.push(46);
	uArray.push(30);
	uArray.push(100);
	uArray.push(50);
	uArray.push(10);


	uArray[5] = 110;

	uArray.pop();
	uArray.remove(5);

	cout << "Unordered array contents: ";

	for (int i = 0; i < uArray.GetSize(); i++)
	{
		cout << uArray[i] << " ";
	}

	cout << endl;

	cout << "Search for 50 was found at index: ";
	cout << uArray.search(50);

	cout << endl << endl;

	return 0;
}