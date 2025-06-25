#include <stdio.h>

int main() {
    int stock, order;
    char creditStatus;

    printf("Enter quantity in stock: ");
    scanf("%d", &stock);

    printf("Enter order quantity: ");
    scanf("%d", &order);

    printf("Is customer credit OK? (Y/N): ");
    scanf(" %c", &creditStatus);

    if (creditStatus >= 'a' && creditStatus <= 'z') {
        creditStatus -= 32;
    }

    if (creditStatus == 'N') {
        printf("Do not supply the order. Send intimation to the customer.\n");
    }
    else if (creditStatus == 'Y') {
        if (order <= stock) {
            printf("Supply the order completely.\n");
        }
        else {
            printf("Supply %d units (all available stock).\n", stock);
            printf("Intimate the customer that the balance of %d units will be shipped later.\n", order - stock);
        }
    }
    else {
        printf("Invalid credit status entered.\n");
    }

    return 0;
}