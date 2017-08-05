#include <stdio.h>
int main()
{
    char q;
    printf("Enter a character: ");
    scanf("%q",&q);

    if( (q>='a' && q<='z') || (q>='A' && q<='Z'))
        printf("%q is an alphabet.",c);
    else
        printf("%q is not an alphabet.",c);

    return 0;
}
