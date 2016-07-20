#include <stdio.h>
#include <string.h>
 
int main(void)
{
    printf("Enter message for encryption: \n");
    char p[50];
    fgets(p, 50, stdin);
    printf("Select keyword (no caps): \n");
    char key[15];
    fgets(key, 15, stdin);
    int i, n, j;
    for(i = 0, j = 0, n = strlen(p); i < n; i++, j++)
        {
            if(p[i] <= 'a' && p[i] >= 'z')
                printf("%c", (((p[i] - 'a') + (key[j] - 'a' ) %26) + 'a'));
            else if(p[i] >= 'a' && p[i] <= 'z')
                printf("%c", (((p[i] - 'a') + (key[j] - 'a') %26) + 'a'));
            else
                printf("%c", p[i]);
        }
    printf("\n");
    return 0;
}
