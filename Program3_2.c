// Write a program which accept one number from user and print that number of even factors on screen.

// Input : 24
// Output : 1 2 4 6 8 12 

#include<Stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
     
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}