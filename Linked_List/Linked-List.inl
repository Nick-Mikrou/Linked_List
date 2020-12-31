#include "Linked-List.h"

//----Implementation----//

template <typename T>
LinkedList<T>::Node::Node(const T& newData) noexcept
	:data(newData), next(nullptr)
{}	// Constructor

template <typename T>
LinkedList<T>::Node::Node(const T& newData, Node* nextNode) noexcept
	:data(newData), next(nextNode)
{}	// Constructor

template <typename T>
LinkedList<T>::LinkedList() noexcept
	:head(nullptr), tail(nullptr), count(0)
{}	// Default Constructor

template <typename T>
void LinkedList<T>::InsertFront(const T& data) noexcept
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
	++count;
}	// Add a node front of the lsit

template <typename T>
void LinkedList<T>::InsertBehind(const T& data) noexcept
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = tail->next;
	}
	++count;
}	// Add a node behind the list

template <typename T>
bool LinkedList<T>::RemoveFront() noexcept
{
	if (head == nullptr)
		return false;
	// Empty list

	if (head == tail)
	{
		delete head;
		head = nullptr;
		tail = nullptr;
	}	// List has one node
	else
	{
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}	// At least two node
	--count;

	return true;
}	// Removes the first node

template <typename T>
bool LinkedList<T>::RemoveBehind() noexcept
{
	if (tail == nullptr)
		return false;
	// Empty list

	if (head == tail)
	{
		delete tail;
		head = nullptr;
		tail = nullptr;
	}	// List has one node
	else
	{
		Node* tmp = head;

		while (tmp->next != tail)
			tmp = tmp->next;

		delete tail;
		tmp->next = nullptr;
		tail = tmp;
	}	// At least two node
	--count;

	return true;
}	// Removes the last node

template <typename T>
bool LinkedList<T>::IsEmpty() const noexcept
{
	return (count == 0);
}	// Returns true if the list is empty, else returns false

template <typename T>
bool LinkedList<T>::IsSorted() noexcept
{
	Node* tmp = head;
	bool isSorted = true;

	if (head == nullptr)
		return false;

	while (tmp->next && isSorted)
	{
		isSorted = (tmp->data <= tmp->next->data);
		tmp = tmp->next;
	}

	return isSorted;
}	// Check if list is sorted

template <typename T>
bool LinkedList<T>::IsAscending() const noexcept
{
	if (count < 2) return true;

	Node* current = head;
	Node* next = head->next;

	do
	{
		if (current->data > next->data)
			return false;
		current = next;
		next = next->next;
	} while (next != nullptr);

	return true;
}	// IsAscending

template <typename T>
bool LinkedList<T>::IsDescending() const noexcept
{
	if (count < 2) return true;

	Node* current = head;
	Node* next = head->next;

	do
	{
		if (current->data < next->data)
			return false;
		current = next;
		next = next->next;
	} while (next != nullptr);

	return true;
}	// IsDescending

template <typename T>
typename LinkedList<T>::Node LinkedList<T>::ReverseList() noexcept
{
	Node* prev = nullptr;
	tail = head;

	while (head)
	{
		Node* tmp = head->next;
		head->next = prev;
		prev = head;
		head = tmp;
	}
	head = prev;

	return *head;
}	// Reverse the list

template <typename T>
void LinkedList<T>::MySwap(Node* one, Node* two) noexcept
{
	T tmp = one->data;
	one->data = two->data;
	two->data = tmp;
}	// Swap elements

template <typename T>
void LinkedList<T>::BubbleSort() noexcept
{
	bool swapped;
	Node* left;
	Node* right = nullptr;

	if (head == nullptr)
		return;

	do
	{
		swapped = false;
		left = head;

		while (left->next != right)
		{
			if (left->data > left->next->data)
			{
				MySwap(left, left->next);
				swapped = true;
			}
			left = left->next;
		}
		right = left;
	} while (swapped);
}	// Sort linked list with bubble algorithm

template <typename T>
T& LinkedList<T>::getFront() const noexcept
{
	return (head->data);
}	// Returns the data of the first node

template <typename T>
T& LinkedList<T>::getBehind() const noexcept
{
	return (tail->data);
}	// Returns the data of the last node

template <typename T>
size_t LinkedList<T>::getCount() const noexcept
{
	return (count);
}	// Returns the number of nodes

template <typename T>
void LinkedList<T>::Write() const noexcept
{
	size_t i = 0;
	Node* tmp = head;

	std::cout << "   Head of the list: " << head << std::endl;
	std::cout << "   Tail of the list: " << tail << std::endl;
	std::cout << " Number of elements: " << count << std::endl;
	std::cout << std::endl;
	std::cout << "           Elements: " << "\tA/A |" << "\t" << "Data |" << "\t" << "Next Node         |" << std::endl;

	while (tmp != nullptr)
	{
		std::cout << "\t\t\t " << i << "  | " << "\t  " << tmp->data << " |  " << tmp->next << "  |" << std::endl;
		i++;
		tmp = tmp->next;
	}
}	// Display on screen

template <typename T>
void LinkedList<T>::Release() noexcept
{
	Node* tmp = head;

	while (head != nullptr)
	{
		head = head->next;
		delete tmp;
		tmp = head;
	}
	tail = nullptr;
	count = 0;
}	// Delete data members

template <typename T>
LinkedList<T>::~LinkedList() noexcept
{
	Release();
}	// Destructor