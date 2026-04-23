# Customer Wishlist Management System 

## Project Overview

The **Customer Wishlist Management System** is a console-based application developed in the C programming language. This system allows users to manage their wishlist by adding, viewing, searching, and deleting items efficiently.

It demonstrates fundamental **Data Structures and Algorithms (DSA)** concepts suitable for second-semester students.

---

##  Objectives

* To implement a simple wishlist system using C
* To understand the use of **structures and arrays**
* To perform basic operations like insertion, deletion, searching, and traversal
* To simulate real-world applications using DSA concepts

---

##  Features

*  Add items to wishlist
*  View all wishlist items
*  Search item by Product ID
*  Delete item from wishlist
*  Exit the program

---

## Concepts Used

* **Structures (struct)** – for storing product details
* **Arrays** – for managing multiple wishlist items
* **Linear Search** – for searching items
* **Deletion using shifting** – for removing elements

---

## Technologies Used

* Programming Language: **C**
* Platform: Console / Terminal
* Compiler: GCC / Turbo C / VS Code

---

## Data Structure Design

Each wishlist item contains:

* Product ID (Integer)
* Product Name (String)
* Product Price (Float)

```c
struct WishlistItem {
    int id;
    char name[50];
    float price;
};
```

---

## Program Flow

1. Display menu
2. Take user input
3. Perform selected operation:

   * Add item
   * View items
   * Search item
   * Delete item
4. Repeat until user exits

---

## Time Complexity

| Operation   | Complexity |
| ----------- | ---------- |
| Add Item    | O(1)       |
| View Items  | O(n)       |
| Search Item | O(n)       |
| Delete Item | O(n)       |

---

##  How to Run

1. Open terminal or VS Code
2. Compile the program:

   ```
   gcc wishlist.c -o wishlist
   ```
3. Run the executable:

   ```
   ./wishlist
   ```

---

##  Sample Output

```
===== CUSTOMER WISHLIST MANAGEMENT SYSTEM =====
1. Add Item
2. View Wishlist
3. Search Item
4. Delete Item
5. Exit
```

---

##  Applications

* E-commerce platforms (Amazon, Flipkart)
* Shopping cart systems
* Personal product tracking

---

##  Limitations

* Fixed size array (limited storage)
* No database integration
* Data is not persistent after program exit

---

## Future Enhancements

* Use of **Linked List** for dynamic storage
* File handling for data persistence
* GUI-based interface
* Sorting and prioritization of wishlist

---

## Author

Developed as part of **DSA Project-Based Learning (PBL)**.

---

## Conclusion

This project provides a basic understanding of how data structures can be used to build real-world applications. It strengthens core programming and problem-solving skills in C.
