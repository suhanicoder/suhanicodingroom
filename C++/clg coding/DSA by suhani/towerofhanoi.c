#include<stdio.h>

void hanoi(int n,char _fromrod,char _torod,char _aux_rod)
{
    if(n==0)
    {
        return;
    }

    hanoi(n-1,_fromrod,_aux_rod,_torod);

     printf("move disk %d from rod %c to rod %c\n",n,_fromrod,_torod);
     hanoi(n-1,_aux_rod,_torod,_fromrod);

}

int main()
{
    int n=2;
    hanoi(n,'P','S','K');

    return 0;
}
