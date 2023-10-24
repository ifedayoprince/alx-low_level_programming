# C - More singly linked lists

In this project, I further practiced building and using singly linked lists in C.

## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  | Definition/Prototype                                                             |
| -------------------------- | -------------------------------------------------------------------------------- |
| `struct listint_s`         | <ul><li>`int n`</li><li>`struct listint_s *next`</li></ul>                       |
| `typedef listint_t`        | `struct listint_s`                                                               |
| `0-print_listint.c`        | `size_t print_listint(const listint_t *h);`                                      |
| `1-listint_len.c`          | `size_t listint_len(const listint_t *h);`                                        |
| `2-add_nodeint.c`          | `listint_t *add_nodeint(listint_t **head, const int n);`                         |
| `3-add_nodeint_end.c`      | `listint_t *add_nodeint_end(listint_t **head, const int n);`                     |
| `4-free_listint.c`         | `void free_listint(listint_t *head);`                                            |
| `5-free_listint2.c`        | `void free_listint2(listint_t **head);`                                          |
| `6-pop_listint.c`          | `int pop_listint(listint_t **head);`                                             |
| `7-get_nodeint.c`          | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`          |
| `8-sum_listint.c`          | `int sum_listint(listint_t *head);`                                              |
| `9-insert_nodeint.c`       | `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);` |
| `10-delete_nodeint.c`      | `int delete_nodeint_at_index(listint_t **head, unsigned int index);`             |
| `100-reverse_listint.c`    | `listint_t *reverse_listint(listint_t **head);`                                  |
| `101-print_listint_safe.c` | `size_t print_listint_safe(const listint_t *head);`                              |
| `102-free_listint_safe.c`  | `size_t free_listint_safe(listint_t **h);`                                       |
| `103-find_loop.c`          | `listint_t *find_listint_loop(listint_t *head);`                                 |

## Tasks :page_with_curl:

* **0. Print list**

* **1. List length**

* **2. Add node**

* **3. Add node at the end**

* **4. Free list**

* **5. Free**

* **6. Pop**

* **7. Get node at index**

* **8. Sum list**

* **9. Insert**

* **10. Delete at index**

* **11. Reverse list**

* **12. Print (safe version)**

* **13. Free (safe version)**

* **14. Find the loop**
