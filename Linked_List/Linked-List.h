#pragma once
#include <iostream>

//----Interface----//

template <typename T>
class LinkedList
{
	private:

		// Internal class
		class Node
		{
			public:
				T data;
				Node* next;

				// Constructors
				Node(const T& newData) noexcept;
				Node(const T& newData, Node* nextNode) noexcept;
		};

	public:

		// Data members
		Node* head;
		Node* tail;
		size_t count;

		// Constructor and destructor
		LinkedList() noexcept;
		~LinkedList() noexcept;

		// Methods
		void InsertFront(const T&) noexcept;
		void InsertBehind(const T&) noexcept;
		bool RemoveFront() noexcept;
		bool RemoveBehind() noexcept;
		bool IsEmpty() const noexcept;
		bool IsSorted() noexcept;
		bool IsAscending() const noexcept;
		bool IsDescending() const noexcept;
		Node ReverseList() noexcept;
		void MySwap(Node*, Node*) noexcept;
		void Write() const noexcept;
		void Release() noexcept;

		T& getFront() const noexcept;
		T& getBehind() const noexcept;
		size_t getCount() const noexcept;

		// Sorting algorithms
		void BubbleSort() noexcept;
};

#include "Linked-List.inl"