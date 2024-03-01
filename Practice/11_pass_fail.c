#include <stdio.h>
 int main()
 {
    float m,p,c,e,t;

    printf("Enter your marks in Maths: ");
    scanf("%f", &m);

    printf("Enter your marks in Physics: ");
    scanf("%f", &p);

    printf("Enter your marks in Chemistry: ");
    scanf("%f", &c);

    printf("Enter your marks in English: ");
    scanf("%f", &e);

    t = ((m+p+c+e)/400)*100;

    printf("Your total percentage is %f %% \n", t);

    if (t < 40 )
        {
            printf("Your total percentage is less than 40 %%. Hence you Fail. ");
        }

    else if (t < m, p, c, e < 33)
        {
            printf("Your subject wise percentage is less than 33%%. Hence you Fail");
        }

    else 
        {
            printf("Great! you Pass. ");
        }

    return 0;
 }