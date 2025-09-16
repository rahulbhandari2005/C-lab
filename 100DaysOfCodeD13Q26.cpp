#include <stdio.h>

int main() {
    float cp, sp;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (cp <= 0) {
        printf("Invalid input: Cost price must be greater than zero.\n");
        return 1;
    }

    if (sp > cp) {
        float profit = sp - cp;
        float profitPercent = (profit / cp) * 100.0;
        printf("You have made a profit! ??\n");
        printf("Profit Percentage: %.2f%%\n", profitPercent);

    } else if (cp > sp) {
        float loss = cp - sp;
        float lossPercent = (loss / cp) * 100.0;
        printf("You have incurred a loss. ??\n");
        printf("Loss Percentage: %.2f%%\n", lossPercent);

    } else {
        printf("There is no profit and no loss. ??\n");
    }

    return 0;
}
