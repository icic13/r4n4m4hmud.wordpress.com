#include <stdio.h>
#include <stdlib.h>// We have to include this for abs() library function

int main()
{

    int number;
    int result;
    //Asks for a number input
    printf("Enter a integer number : \n");
    //Takes the intger number input and stores in number variable
    scanf("%d",&number);

    result = abs(number);//We pass the number variable to abs() function and
    //store the return value of the function
    printf("Absolute value of %d is %d\n",number,result);
    return 0;
}
