#include "Linked-List.h"

int main(int argc, char* argv[])
{
	LinkedList<int> mylist;

	mylist.InsertFront(10);
	mylist.InsertFront(11);
	mylist.InsertFront(12);
	mylist.InsertFront(13);
	mylist.InsertBehind(20);

	mylist.Write();

	return 0;
}