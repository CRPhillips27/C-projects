/*
a. MP1B.C
b. Charles Roy R. Phillips Jr. and 10/20/21
c. Description of the program: Converts Decimal, Binary, and Octal Values Into Each Other
d. 2021-12336
*/
#include<stdio.h>
char MainMenu(void);
unsigned long long int UserInput(char);
unsigned long long int Dec2BinOct();
unsigned long long int Bin2DecOct();
unsigned long long int Oct2BinDec();
int main()
{
char opt , OPT;
unsigned long long int DCML, BNRY, OCT;
    do
    {
OPT = MainMenu();
switch (OPT)
{
case 'A':
case 'a':;
    DCML = UserInput(OPT);
    Dec2BinOct(DCML);
break;


case 'B':
case 'b':;
    BNRY = UserInput(OPT);
    Bin2DecOct(BNRY);
break;


case 'C':
case 'c':;
    OCT = UserInput(OPT);
    Oct2BinDec(OCT);
break;


case 'D':
case 'd':
    printf("\nThank you for using Number Conversion!");
break;


default:
    printf("\nEnter Valid Choice Please");
break;
    }
    }
    while
    (OPT != 'D' && OPT !='d');
    return 0;
    }

char MainMenu ()
{
    char opt;
    printf("\n\n Welcome to Conversion Menu!");
    printf("\n\n A. Decimal to Binary and Octal");
    printf("\n B. Binary to Decimal and Octal");
    printf("\n C. Octal to Binary and Decimal");
    printf("\n D. Exit");
    printf("\n Enter your choice:  ");
    scanf("  %c", &opt);
    return opt;
}
unsigned long long int UserInput(char OPT)
{
unsigned long long int num;
if (OPT == 'A')
{printf("\n Enter a Number in Decimal:"  );}
if (OPT == 'a')
{printf("\n Enter a Number in Decimal:"  );}
if (OPT == 'B')
{printf("\n Enter a Number in Binary:"  );}
if (OPT == 'b')
{printf("\n Enter a Number in Binary:"  );}
if (OPT == 'C')
{printf("\n Enter a Number in Octal:"  );}
if (OPT == 'c')
{printf("\n Enter a Number in Octal:"  );}
scanf("%llu", &num);
return num;
}

unsigned long long int Dec2BinOct ( unsigned long long int DCML)
{
unsigned long long int
dcml=DCML, dcml2=0, bnry=0, rmndr, pos=1, rmndr2, 
pos2=1, oct=0, rmndr3, pos3=1;
if (dcml<100000001){
    printf ("\n %llu in Decimal ", dcml);
    for (dcml=dcml; dcml > 0;)
    {
    rmndr = dcml % 2;
    bnry = (rmndr * pos) + bnry;
    pos = pos * 10;
    dcml= dcml/2;
    }
    printf ("is %llu in Binary Form", bnry);
    for (bnry=bnry; bnry >0;)
    {
    rmndr2 = bnry % 10;
    dcml2 = (rmndr2 * pos2) + dcml2;
    pos2 = pos2 * 2;
    bnry = bnry/10;
    }
    printf ("\n %llu in Decimal ", DCML);
    for (dcml2=dcml2; dcml2 > 0;)
    {
    rmndr3 = dcml2 % 8;
    oct = (rmndr3 * pos3) + oct;
    pos3 = pos3 * 10;
    dcml2 = dcml2/8;
    }
    printf ("is %llu in Octal Form", oct);}
}



unsigned long long int Bin2DecOct (unsigned long long int BNRY)
{
unsigned long long int
bnry=BNRY, dcml=0, dcml2, rmndr, pos=1, rmndr2,
pos2=1, oct=0, rmndr3;
if (bnry<100000001){
    printf ("\n %llu in Binary ", BNRY);
    for (bnry=bnry;bnry >0;)
    {
    rmndr = bnry % 10;
    dcml = (rmndr * pos) + dcml;
    pos = pos * 2;
    bnry = bnry/10;
    }
    printf ("is %llu in Decimal Form", dcml);
    printf ("\n %llu in Binary ", BNRY);
    for (dcml=dcml;dcml > 0;)
    {
    rmndr2 = dcml % 8;
    oct = (rmndr2 * pos2) + oct;
    pos2 = pos2 * 10;
    dcml = dcml/8;
    }
    printf ("is %llu in Octal Form", oct);}
}

unsigned long long int Oct2BinDec (unsigned long long int OCT)
{
unsigned long long int
oct=OCT,dcml=0, bnry=0, rmndr, pos=1, rmndr2, 
pos2=1;
 if (oct<100000001){
    OCT=oct;
    printf ("\n %llu in Octal is", OCT);
    for (oct=oct;oct >0;)
    {
    rmndr = oct % 10;
    dcml = (rmndr * pos) + dcml;
    pos = pos * 8;
    oct = oct/10;
    }
    printf (" %llu in Decimal Form", dcml );
    printf ("\n %llu in Octal is", OCT);
    for (dcml=dcml;dcml > 0;)
    {
    rmndr2 = dcml % 2;
    bnry = (rmndr2 * pos2) + bnry;
    pos2 = pos2 * 10;
    dcml= dcml/2;
    }
    printf (" %llu in Binary Form", bnry);}
    }