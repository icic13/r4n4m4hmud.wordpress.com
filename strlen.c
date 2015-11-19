/*****************************
*   Author: Md.  Rana Mahmud *
*   r4n4m4hmud.wordpress.com *
*****************************/

#include <stdio.h>
#include <string.h>// We have to include this for strlen() library function

int main()
{

    char string[100];
    int stringLength;
    //Asks for a string input
    printf("Enter a string : \n");

    scanf("%s",string); //Takes string input

    stringLength = strlen(string);//We pass the string to strlen() function
                                //and store the return value of the function
    printf("Length of %s is %d.\n",string,stringLength);

    return 0;
}
