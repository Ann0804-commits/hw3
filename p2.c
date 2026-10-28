/* CS100 Fall 2026 - HW3 Problem 2: Palindrome
 *
 * Read n strings and test whether each of them is a palindrome.
 * Print "Yes" / "No" on one line per string.
 * Use dynamic memory to store each input string (no fixed-size arrays).
 * Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int len;
        scanf("%d",&len);
        char *str=malloc(len+1);
        scanf("%s",str);
        int ju=0;
        for(int j=0;j<len/2;j++){
            if(str[j]!=str[len-j-1]){
                ju=1;
                break;
            }
        }
        if(ju==0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        free(str);
    }
    /* TODO: your code here */
    return 0;
}
