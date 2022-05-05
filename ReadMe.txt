Hello there,

Firstly, I have divided my project into two parts. HW3_LIST and HW3_TREE folders has the corresponding implementations of the schedulers. I do not know how to give references for the code parts that I use but here are the sources that I use:

1. For the sorted insert of the linked list implementation, I have used the "sortedInsert" function from the 		  geekforgeeks website. https://www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/  

2. For some of the functions for the tree, I have used code blocks from the same website. https://www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/

Both of my schedulars work just fine. They produce the same execution order. However, as you can see after running, the total nodes visited in list implementation for insert, delete & search are way more than the tree version. This is due to complexity. Tree structure has complexity of O(log(n)) and list has O(n). Therefore, as expected, it has lower node numbers. My implementations has larger node visit numbers. I believe that, it is due to my methods. They consists loops, therefore, it increses the number of node visits. In the list implementation, for both the current process assignment and deletion I have used the same method "MinPrio". The reason for that is to halven the execution. Since it is sorted list, current process will always be the last item of the list and the last item will be deleted. Therefore, deleting while assigning to current process was the most logical thing to do. 
