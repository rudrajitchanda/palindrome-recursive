#include<stdio.h>
#include<math.h>
int fact();
int s=0;
int main()
{
    int n,f=0;
    printf("Enter a number to check palindrome:\n");
    scanf("%d",&n);
    f=fact(n);
    if(f==n)
    printf("palindrome number: %d ",f);
    else
        printf("Not a palindrome number: %d ",f);
    return 0;
}
int fact(int x)
{

    if(x==0)
        return s;
    else
        s=(s*10)+(x%10);
        fact(x/10);

}
