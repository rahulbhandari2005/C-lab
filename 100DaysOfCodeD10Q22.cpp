#include <stdio.h>

int main() {
    
    float costPrice, sellingPrice, amount;

    
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);

    
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    

    if (sellingPrice > costPrice) {
        
        
        amount = sellingPrice - costPrice;
        
        float profitPercentage = (amount / costPrice) * 100;
        printf("\nIt's a Profit! ??\n");
        printf("Profit Amount = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", profitPercentage);
    } 
    else if (costPrice > sellingPrice) {
        
        
        amount = costPrice - sellingPrice;
        
        float lossPercentage = (amount / costPrice) * 100;
        printf("\nIt's a Loss. ??\n");
        printf("Loss Amount = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", lossPercentage);
    } 
    else {
        
        printf("\nNo Profit, No Loss.\n");
    }

    return 0;
}
