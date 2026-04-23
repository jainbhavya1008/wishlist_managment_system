#include <stdio.h>
#include <string.h>

// Define structure for wishlist item
struct WishlistItem {
    int id;                 // Unique product ID
    char name[50];          // Product name
    float price;            // Product price
};

// Function to display menu
void menu() {
    printf("\n===== CUSTOMER WISHLIST MANAGEMENT SYSTEM =====\n");
    printf("1. Add Item to Wishlist\n");
    printf("2. View Wishlist\n");
    printf("3. Search Item by ID\n");
    printf("4. Delete Item\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    struct WishlistItem wishlist[100];  // Array to store items
    int count = 0;                      // Number of items in wishlist
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);

        // ADD ITEM
        if (choice == 1) {
            printf("\nEnter Product ID: ");
            scanf("%d", &wishlist[count].id);

            printf("Enter Product Name: ");
            scanf(" %[^\n]", wishlist[count].name);  // Take full string input

            printf("Enter Product Price: ");
            scanf("%f", &wishlist[count].price);

            count++;  // Increase item count

            printf("Item added successfully!\n");
        }

        // VIEW WISHLIST
        else if (choice == 2) {
            if (count == 0) {
                printf("\nWishlist is empty!\n");
            } else {
                printf("\n--- Your Wishlist ---\n");

                // Loop through all items
                for (int i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Price: %.2f\n",
                           wishlist[i].id,
                           wishlist[i].name,
                           wishlist[i].price);
                }
            }
        }

        // SEARCH ITEM
        else if (choice == 3) {
            int searchId, found = 0;

            printf("\nEnter Product ID to search: ");
            scanf("%d", &searchId);

            // Linear search
            for (int i = 0; i < count; i++) {
                if (wishlist[i].id == searchId) {
                    printf("Item Found!\n");
                    printf("Name: %s | Price: %.2f\n",
                           wishlist[i].name,
                           wishlist[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Item not found!\n");
            }
        }

        // DELETE ITEM
        else if (choice == 4) {
            int deleteId, found = 0;

            printf("\nEnter Product ID to delete: ");
            scanf("%d", &deleteId);

            for (int i = 0; i < count; i++) {
                if (wishlist[i].id == deleteId) {
                    // Shift elements to left
                    for (int j = i; j < count - 1; j++) {
                        wishlist[j] = wishlist[j + 1];
                    }
                    count--;  // Reduce count
                    printf("Item deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Item not found!\n");
            }
        }

        // EXIT PROGRAM
        else if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}