/*
a. MP1B.C
b. Charles Roy R. Phillips Jr. and 11/10/21
c. Description of the program: Converts Numbers Into Words as well as Lists and Combines Prime Numbers In a Specified Range
d. 2021-12336
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char MainMenu(void);
double CheckUserInput(char);
unsigned long long int PrimeUserInput1(char);
unsigned long long int PrimeUserInput2(char);
char CheckMaker(double intres); 
unsigned long long int GetOddNumbers();
int main()
{
    char opt, OPT;
    unsigned long long int ODD1, ODD2;
    double intres;
    do
    {
        OPT = MainMenu();
        switch (OPT)
        {
            case 'A':
            case 'a':;
                intres = CheckUserInput(OPT);
                CheckMaker(intres);
            break;
            case 'B':
            case 'b':;
                ODD1 = PrimeUserInput1(OPT);
                ODD2 = PrimeUserInput2(OPT);
                GetOddNumbers(ODD1,ODD2);
            break;
            case 'C':
            case 'c':
                printf("\nThank you for using the Program!");
            break;
            default:
                printf("\nEnter Valid Choice Please");
            break;
        }
    }
    while
    (OPT != 'C' && OPT !='c');
    return 0;
}
char MainMenu ()
{
    char opt;
    printf("\n\n Welcome to the Menu!");
    printf("\n\n A. Check Maker");
    printf("\n B. Combining Calculator");
    printf("\n C. Exit");
    printf("\n Enter your choice:  ");
    scanf("  %c", &opt);
    return opt;
}
double CheckUserInput(char OPT)
{
    double num;
    if (OPT == 'A')
    {
        printf("\nCheck Maker: "  );
        printf("\n\tInput an amount:"  );
        scanf("%lf", &num);
    }
    if (OPT == 'a')
    {
        printf("\nCheck Maker: "  );
        printf("\n\tInput an amount:"  );
        scanf("%lf", &num);
    }
    return num;
}
unsigned long long int PrimeUserInput1(char OPT)
{
    unsigned long long int num1;
    if (OPT == 'B')
    {
        printf("\nSum of Prime Odd Numbers: "  );
        printf("\n\tInput integer a:"  );
        scanf("%d", &num1);
    }
    if (OPT == 'b')
    {
        printf("\nSum of Prime Odd Numbers: "  );
        printf("\n\tInput integer a:"  );
        scanf("%d", &num1);
    }
    return num1;
}
unsigned long long int PrimeUserInput2(char OPT)
{
    unsigned long long int num2;
    if (OPT == 'B')
    {
        printf("\tInput integer b:"  );
        scanf("%d", &num2);
    }
    if (OPT == 'b')
    {
        printf("\tInput integer b:"  );
        scanf("%d", &num2);
    }
    return num2;
}
char CheckMaker(double intres)
{
    if (intres < 100000000)
    {
        int i,l;
        char *single_digits[] = 
        { 
            "", "one", "two",
            "three", "four","five",
            "six", "seven", "eight", 
            "nine"
        };
        char *two_digits[] = 
        {
            "", "ten", "eleven", "twelve",
            "thirteen", "fourteen",
            "fifteen", "sixteen",
            "seventeen", "eighteen", "nineteen"
            };
        char *tens_multiple[] = 
        {
            "", "", "twenty", "thirty", 
            "forty", "fifty", "sixty", 
            "seventy", "eighty", "ninety"
        };
        char *tens_power[] = 
        {
            "Hundred", "Thousand","","","Million"
        };
        char ress[13];
        char *res;
        res = &ress[13];
        printf("The amount ");
        sprintf(res, "%0.2lf", intres);
        l = strlen(res); 
        for (i=0;i<=l;++i)
        {     
            printf("%c", res[i]);
            if (l-i==10)
            {
                printf(",");
            }
            if (l-i==7)
            {
                printf(",");
            }
        }
        printf(" in words is ");
        if (*res != '0')
        {
            int b=0,b1=0,b2=0,b3=0,b4=0;
            while (*res != '\0') 
            {
                if (l == 2)
                {
                    printf(" and %s/100", res);
                }
                if (l == 4) 
                {
                    if (*res != '0')
                    {
                        if (b==1)
                        {
                            printf("- %s ", single_digits[*res-'0']);
                        }
                        else if (b==2)
                        {
                            b=2;
                        }
                        else 
                        {
                            b=0;
                        }
                        if (b==0)
                        {
                            printf(" %s ", single_digits[*res-'0']);
                        }
                    }
                }
                if (l == 5)
                {
                    if (*res != '0')
                    {
                        if (*res == '1') 
                        {
                            int sum = *res - '0' + *(res + 1)- '0';
                            printf("%s ", two_digits[sum]);
                            b=2;
                        }
                        else
                        {
                            printf("%s ", tens_multiple[*res - '0']);
                            b=1;
                        }
                    }
                    else
                    {
                        b=0;
                    }
                }
                if (l == 6)
                {
                    printf("%s ", (single_digits[*res - '0']));
                    if (*res != '0')
                    {
                        printf("%s ", tens_power[l-6]);
                        b=0;
                    }
                }
                if (l == 7)
                {
                    if (*res != '0')
                    {
                        if (b1==1)
                        {
                            printf("- %s ", single_digits[*res - '0']); 
                            printf("%s ", tens_power[l-6]);   
                        }
                        else if (b1==2)
                        {
                            b1=2;
                        }
                        else
                        {
                            b1=0;
                        }
                        if (b1==0)
                        {
                            printf(" %s ", single_digits[*res - '0']);
                            printf("%s ", tens_power[l-6]);
                        } 
                    }
                    else 
                    {
                        if (b3==1 && b4==1)
                        {
                        b3=1;
                        b4=1;
                        }
                        else if (b1==2)
                        {
                        b1=2;
                        }
                        else
                        {
                            printf("%s ", tens_power[l-6]);
                        }
                    }
                }
                if (l == 8)
                {
                    if (*res != '0')
                    {
                    b3=2;
                            if (*res == '1') 
                            {
                                int sum = *res - '0' + *(res + 1)- '0';
                                printf("%s ", two_digits[sum]);
                                printf("%s ", tens_power[l-7]);
                                b1=2;
                            }
                            else
                            {
                                printf("%s ", tens_multiple[*res - '0']);
                                b1=1;
                            }
                    }
                    else
                    {
                        b3=1;
                    }
                }
                if (l == 9)
                {
                    printf("%s ", single_digits[*res - '0']);
                    if (*res != '0')
                    {
                        printf("%s ", tens_power[l-9]);
                        b4=2;
                        b1=0;
                    }
                    else
                    {
                        b4=1;
                    }
                }
                if (l == 10)
                {
                    if (*res != '0')
                    {
                        if (b2==1)
                        {
                            printf("- %s ", single_digits[*res - '0']);
                            printf("%s ", tens_power[l-6]);
                        }
                        else if (b2==2)
                        {
                            b2=2;
                        }
                        else
                        {
                            b2=0;
                        }
                        if (b2==0)
                        {
                            printf("%s ", single_digits[*res - '0']);
                            printf("%s ", tens_power[l-6]);
                        }
                    }
                    else if (b2==2)
                        {
                            b2=2;
                        }
                    else
                    {
                        printf("%s ", tens_power[l-6]);
                    }
                }
                if (l == 11)
                {
                    if (*res != '0')
                    {
                        if (*res == '1') 
                        {
                            int sum = *res - '0' + *(res + 1)- '0';
                            printf("%s ", two_digits[sum]);
                            printf("%s ", tens_power[l-7]);
                            b2=2;
                        }
                        else
                        {
                            printf("%s ", tens_multiple[*res - '0']);
                            b2=1;
                        }
                    }
                    
                }
                --l;     
                ++res;
            }
        }
        else 
        {
            printf("zero");
        }
    return *res;
    }
}
unsigned long long int GetOddNumbers(unsigned long long int ODD1, unsigned long long int ODD2)
{
    int a,b,i,j,prime,check=0;
    a=ODD1;
    b=ODD2;
    if (0<=a && a<=b && b<=100)
    {
        printf("[%d,%d] = ",a,b);
        for (i=a; i<=b; i++)
        {
            prime=1;
            if ((i%2) ==!0) 
            {     
                for(j = 2; j <= i/2; ++j)
                while (i%j ==0)
                {
                    prime=0;
                    break;
                }
                if (prime==1)
                {
                    if(check==0)
                    {
                        printf("%d", i);
                        check=1;
                    }
                    else
                    {
                        printf(",%d", i);
                    }
                }
            }
        }
        printf(" = ");
        i=0;
        for (i=a; i<=b; i++)
        {
            prime=1;
            if ((i%2) ==!0) 
            {     
                for(j = 2; j <= i/2; ++j)
                while (i%j ==0)
                {
                    prime=0;
                    break;
                }
                if (prime==1)
                printf("%d", i); 
            }
        }
    }           
return i;
}





