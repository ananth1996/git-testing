#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv)
{
    if (argc <2)
    {
        printf("Incorrect number of arguments\n");
        printf("Please utilize as ./a.out N");
        exit(1);
    };
    int N = atoi(argv[1]);
    long int count =0;
    for(long int n =2; ; n++)
    {
        long int abundant_sum = 0;
        for (long int factor =1; factor<= n/2; factor++)
        {
            if(n % factor == 0)
            {
                abundant_sum += factor;
            }
        }
        if(abundant_sum > n)
        {    
            printf("%ld\n",n);
            count++;
        }
        if (count > N-1)
            break;

    }
}