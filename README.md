[![CodeFactor](https://www.codefactor.io/repository/github/nick-mikrou/linked_list/badge)](https://www.codefactor.io/repository/github/nick-mikrou/linked_list)

# Linked List
  
Linked list is a linear collection of data elements. More specifically, is a data structure consisting of a collection of nodes, which are not stored at contiguous memory location. Usually, node contains data and reference to the next node in the sequence.

## Advantages
* ___Dynamic Data Structure___ \
  It can grow and shrink at runtime by allocating and deallocating memory.
* ___Insertion and Deletion___ \
  Provide flexibility by rearranging the pointers.
  
## Drawbacks
* ___Random access is not allowed___ \
  We have to access elements sequentially starting from the head.
* ___Not cache friendly___ 

This project was created in the contex of learning how a linked list works. Supported methods : 

* ___InsertFront___ : Add a node in front of the list.
* ___InsertBehind___ : Add a node behind the list.
* ___RemoveFront___ : Removes the first node.
* ___RemoveBehind___ : Removes the last node.
* ___IsEmpty___ : Returns true if the list is empty, else returns false.
* ___IsSorted___ : Check if the list is sorted.
* ___IsAscending___ : Check if the list is sorted in ascending.
* ___IsDescending___ : Check if the list is sorted in descending.
* ___ReverseList___ : Reverse the list.
* ___MySwap___ : Swap elements (Bubble Sort)
* ___Bubble Sort___ : Sort the linked list.
* ___getFront___ : Returns the data of the first node.
* ___getBehind___ : Returns the data of the last node.
* ___getCount___ : Returns the number of nodes.
* ___Write___ : Display on screen.
* ___Release___ : Delete data members. (deallocate memory)

## Prerequisites
   You will need g++ compiler in order to compile this project.
   ### Clone the project
   ```
   git clone https://github.com/Nick-Mikrou/Linked-List.git
   ```
   ### Compile
   ```
   g++ -o LinkedList Main.cpp
   ```
   ### Run
   ```
   ./LinkedList.exe
   ```
## License 
Lincesed under [MIT Lincese](https://github.com/Nick-Mikrou/Linked_List/blob/main/LICENSE)
 

 
