#include<stdio.h>

//FUNCTION PROTOTYPES
float DeterminetheUnit(int units);
float CalculateUnitCharge(int units, float cChargePerUnit);
float CalculateSurcharge(float UnitCharge);
float TotalCustomerBill(float ucharge, float scharge);

int main(){

    int choice;
    int CustomerId, UnitsConsumed;
    float ChargePerUnit, UnitCharge, Surcharge, TotalBill;

    do {

    printf("Enter Customer ID: ");
    scanf("%d",&CustomerId);
    printf("Enter Units Consumed: ");
    scanf("%d",&UnitsConsumed);

    //FUNCTION CALL
    ChargePerUnit = DeterminetheUnit(UnitsConsumed);
    UnitCharge = CalculateUnitCharge(UnitsConsumed, ChargePerUnit);
    Surcharge = CalculateSurcharge(UnitCharge);
    TotalBill = TotalCustomerBill(UnitCharge, Surcharge);

    // RESULT
    printf("--- Electricity Bill ---\n");
    printf("Customer ID\t : %d", CustomerId);
    printf("\nUnits Consumed\t : %d", UnitsConsumed);
    printf("\nUnit Charge\t : P %.2f", UnitCharge);
    printf("\nSurcharge\t : P %.2f", Surcharge);
    printf("\nTotal Bill\t : P %.2f", TotalBill);
    printf("\n----------------------\n");
    printf("----------------------\n");


    //DO U WANT TO CONTINUE..?
    printf("Do you want to process again?\n");
    printf("[1] Yes [2] No : ");
    scanf("%d",&choice);
    printf("\n\n");

    } while(choice==1);


    return 0;
}

//1ST FUNCTION
float DeterminetheUnit(int units)
{

    if(units>=600)
    {
        return 2.00; //600 AND ABOVE
    }

    else if (units >= 450 && units < 600)
    {
        return 1.85;// 450 TO 599
    }

    else if (units >= 250 && units <= 449)
    {
        return 1.60; // 250 ATO 449
    }

    else if (units >= 199 && units <= 249)
    {
        return 1.50; // 199 TO 249
    }


    else if(units < 199)
    {
        return 0.0; // BELOW 199
    }

}

//2ND FUNCTION
float CalculateUnitCharge(int units, float cChargePerUnit)
{
    return units * cChargePerUnit;

}

//3RD FUNCTION
float CalculateSurcharge(float UnitCharge)
{
    if(UnitCharge>=400)
    {
        return UnitCharge * 0.10; //IF THE BILL EXCEEDS P400
    }

    return 0;
}


//4TH FUNCTION
float TotalCustomerBill(float ucharge, float scharge)
{
    float TotalBill;
    TotalBill = ucharge + scharge; // unit charge + surcharge

    if (TotalBill < 100)
    {
        return 100; // RETURNS 100 IF UNITS ARE 198 AND BELOW
    }
    return TotalBill;

}
