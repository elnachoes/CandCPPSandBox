#include <stdi.h>

int main(void){
    //costs of items per item and lb of item
    const double costOfOrangesPerLb = 0.95;
    const double costOfEnergyDrinks = 1.50;
    const double costOfYogurts = 0.75;
    
    //The tax percentage for energy drinks and yogurts
    const double specialTaxPercentage = 0.065;

    //stores numbers of items being checked out
    int yogurts;
    int energyDrinks;
    double lbsOranges;

    //stores taxes on items being checked out
    double energyDrinksTax;
    double yogurtsTax;
 
    //stores totals on items being checked out
    double totalLbsOranges;
    double totalEnergyDrinks;
    double totalYogurts;
    double salesTaxTotal;
    double itemTotal;
    double grandTotal;

    //welcomes user and gets user input
    printf("\nWelcome to the Greecy Gas Station!");
    printf("\n\nHow Many pounds of oranges do you have? : ");
    scanf("%lf", &lbsOranges);
    printf("\nHow many energy drinks do you have? : ");
    scanf("%i", &energyDrinks);
    printf("\nHow many yogurts do you have? : ");
    scanf("%i", &yogurts);
    
    //calculates totals for items in cart
    totalLbsOranges = lbsOranges * costOfOrangesPerLb;
    totalYogurts = yogurts * costOfYogurts;
    totalEnergyDrinks = energyDrinks * costOfEnergyDrinks;

    //calculates taxes on taxable items
    energyDrinksTax = totalEnergyDrinks * specialTaxPercentage;
    yogurtsTax = totalYogurts * specialTaxPercentage;

    //calculates grand totals on taxes items and the grand total
    salesTaxTotal = energyDrinksTax + yogurtsTax;
    itemTotal = totalLbsOranges + totalEnergyDrinks + totalYogurts;
    grandTotal = salesTaxTotal + itemTotal;

    //prints out the receipt 
    printf("\nItem\t\tCost\tTax");
    printf("\nOranges\t\t%3.2f",totalLbsOranges);
    printf("\nEnergy Drinks\t%3.2f\t%3.2f",totalEnergyDrinks,energyDrinksTax);
    printf("\nYogurts\t\t%3.2f\t%3.2f",totalYogurts,yogurtsTax);
    printf("\n\nTotals\t\t%3.2f\t%3.2f",itemTotal,salesTaxTotal);
    printf("\n\nGrand Total\t%3.2f\n",grandTotal);

    return 0;
}