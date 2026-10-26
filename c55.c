#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    do
    {
        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                    printf("Remaining balance: Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;

            case 3:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    int marks[3], i, total = 0;
    float average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks!\n");
            return 0;
        }

        total += marks[i];
    }

    average = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    for (i = 0; i < 3; i++)
    {
        if (marks[i] < 35)
        {
            printf("Result: Fail\n");
            return 0;
        }
    }

    printf("Result: Pass\n");

    float temperature;
    int n = 1;

    while (n <= 5)
    {
        printf("Enter temperature: ");
        scanf("%f", &temperature);

        if (temperature < 0 || temperature > 150)
        {
            printf("Invalid reading!\n");
        }
        else if (temperature < 40)
        {
            printf("Status: Normal\n");
        }
        else if (temperature < 70)
        {
            printf("Status: High temperature\n");
        }
        else
        {
            printf("Status: Critical! Alert!\n");
        }

        n++;
    }


    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units!\n");
    }
    else if (units <= 100)
    {
        bill = units * 2.0;
        printf("Bill = Rs. %.2f\n", bill);
    }
    else if (units <= 200)
    {
        bill = 100 * 2.0 + (units - 100) * 3.0;
        printf("Bill = Rs. %.2f\n", bill);
    }
    else
    {
        bill = 100 * 2.0 + 100 * 3.0
               + (units - 200) * 5.0;
        printf("Bill = Rs. %.2f\n", bill);
    }


void controlLED()
{
    printf("LED is ON\n");
}

void controlFan()
{
    printf("Fan is ON\n");
}

void controlBuzzer()
{
    printf("Buzzer is ON\n");
}

    int choic;

    do
    {
        printf("\n1. Turn ON LED");
        printf("\n2. Turn ON Fan");
        printf("\n3. Turn ON Buzzer");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choic);

        switch (choic)
        {
            case 1: controlLED(); break;
            case 2: controlFan(); break;
            case 3: controlBuzzer(); break;
            case 4: printf("Device stopped\n"); break;
            default: printf("Invalid choice\n");
        }

    } while (choic != 4);

    return 0;
}
