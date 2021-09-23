#include<stdio.h>
#include<conio.h>
#define INPUT printf("\n Enter the numbre: "); scanf("%d", &num);
#define EQUALS ==
#define PRINT1 printf("\n Great")
#define PRINT2 printf("\n Try again")
#define START main() {
#define END getch(); \
    return 0; }

START
    int num;
    INPUT
    if(num EQUALS 100)
        PRINT1;
    else
        PRINT2;
    END

#include<stdio.h>
#define PRINT(num) printf(#num " = %d",num)
main()
{
    PRINT(20);
}

#include<stdio.h>
void main()
{
    printf("\n Current File's Path name: %s",__FILE__);
    printf("\n Line Number in the current file: %d",__LINE__);
    printf("\n Date of Compilation: %s",__TIME__);
    
    #ifdef __STDC__
        printf("\n Your C compiler conforms with ANSI C standard");
    #else
        printf("\n You C compiler doesn't conform with the ANSI C standard");
    #endif

    printf("\nDetails of Day and Date of Compilation: %s",__TIMESTAMP__);
}
