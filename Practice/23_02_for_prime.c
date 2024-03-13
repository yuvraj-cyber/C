# include <stdio.h>

int main()
    {
        int n,i, prime = 1;
        //Here, [prime] is initialized to 1, we are assuming that the number is prime.
        printf("Enter a number: ");
        scanf("%d",&n);

        for(i =2; i<n;i++)
        //Here, we initiate a 'for' loop with i starting from 2 and continues until i = n-1.
            {
                if (n%i == 0)
                //This checks if n is divisible by i where 2 <= i <n. 
                {
                prime = 0;
                break;
                //If n id divisible by i, then 'prime' is set to '0' and 'break' statement is used to exit the loop.
                }
            }
        
        if(prime == 0 && n!=2)
            {
                printf("%d is not a prime number.", n);
            }
        else
            {
                printf("%d is a prime number.", n);
            }


        return 0;
    }
