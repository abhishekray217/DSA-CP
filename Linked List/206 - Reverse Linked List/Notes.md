# **206. Reverse Linked List**

[Link to question]()

## Problem Statement 

Given the ```head``` of a singly linked list, reverse the list, and return the reversed list.

## Solution : 

In Layman terms we need to invert the link from`->` to `<-`.

We have to take two pointers.
- current - which holds the current head value
- previous - which is initialised to NULL.

Algo : 
-   Assign current value of head to current pointer.
- change head to head->next.
- Now we need to point current ->next to our previous pointer.
- At last update the previous pointer.

## Note :

If we change the order of statements of while loop, it will lead to different solution.
>If we assign values of head to a variable then changing the variable value will lead to change in values of of head value.
>For Example 
``` 
ListNode* result = head;
result->next = NULL;
```
It changes values of ```head->next``` to NULL
