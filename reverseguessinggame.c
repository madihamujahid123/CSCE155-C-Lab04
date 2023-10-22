#include<stdio.h>
int main()
{
    int highestNum,lowestNum, guess;
    char decision;
    printf("user give the two number from lowest to highest number:"); 
    printf(" give the two number lowest and highest number:"); 
    scanf("%d,%d" , &highestNum,lowestNum);
    printf("pick a no between %d and %d to guess\n",lowestNum,highestNum);
    while(decision!='c'){
        guess=(highestNum+lowestNum)/3;
        printf("the guess number as %d\n, guess");
        printf("if the guess number is correct then press c ,highestNum than press'h',lowestnumber than press 'I'");
    scanf("%c",&decision);
    if(decision=='I')
    {
        highestNum+=2;
    } 
    else if (decision=='h')
    {
        lowestNum-=2;
    }
    else {
        printf("please tell them the number is correct or not \n");
    }
}
printf ("congratulation you guess the number %d\n",guess);
return 0;
}