#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 2
int main() {
    int i, buy;
    char c = 'a';
    struct product {
        char name[20];
        float price;
        int amount;
    } p[N];
    for (int i=0; i<N; i++) {
        printf("Product %d\n", i+1);
        printf("Name : ");
        scanf("%s", p[i].name);
        printf("Price : ");
        scanf("%f", &p[i].price);
        if (p[i].price < 0) {
            p[i].price = 0;
        }
        printf("Amount : ");
        scanf("%d", &p[i].amount);
        if (p[i].amount < 0) {
            p[i].amount = 0;
        }
        printf("\n");
    }
    do {
        printf("\n-=-=-=-=-=-=-Product List-=-=-=-=-=-=-\n");
        for (int i=0; i<N; i++) {
            printf("%d. %s | %.2f baht | %d items\n", i+1, p[i].name, p[i].price, p[i].amount);
        }
        printf("Enter Product Number : ");
        scanf("%d", &i);
        printf("How many ? : ");
        scanf("%d", &buy);
        if (buy > 0) {
            if ((p[i-1].amount - buy) >= 0) {
                printf("Stock of %s Remaining : %d items\n",p[i-1].name, p[i-1].amount - buy);
                printf("Total Price : %.2f ", p[i].price*buy);
                p[i-1].amount -= buy;
            }
            else {
                printf("Invalid");
            }
        }
        else {
            printf("Invalid");
        }
        printf("\nx : exit");
        c = getch();
    } while(c != 'x');
    return 0;
}