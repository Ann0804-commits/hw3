/* CS100 Fall 2026 - HW3 Problem 3: String and character manipulation
 *
 * Implement the hw3_* functions below. Do NOT write a main function here:
 * the autograder compiles this file together with its own test driver.
 * Implementations must conform to the C standard (see cppreference) and
 * must not call any standard library string/character functions.
 * Do not rename this file.
 */
#include <stddef.h>

int hw3_islower(int ch)  { /* TODO */
    return ch >= 'a' && ch <= 'z';
}
int hw3_isupper(int ch)  { /* TODO */ 
    return ch >= 'A' && ch <= 'Z';
}
int hw3_isalpha(int ch)  { /* TODO */
    return hw3_islower(ch)||hw3_isupper(ch);
}
int hw3_isdigit(int ch)  { /* TODO */ 
    return ch>= '0' && ch <= '9';
}
int hw3_tolower(int ch)  { /* TODO */
    return ch>='A' && ch<='Z'?ch+('a'-'A'):ch;
}
int hw3_toupper(int ch)  { /* TODO */
    return ch>='a' && ch<='z' ? ch-('a'-'A'):ch;
}

size_t hw3_strlen(const char *str)                       { /* TODO */ 
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return  count;
}
char *hw3_strchr(const char *str, int ch)                { /* TODO */ 
    while(*str!='\0'){
        if(*str==(char)ch){
            return (char*)str;
        }
        str++;
    }
    if(ch=='\0'){
        return(char*)str;
    }
    return NULL;
}
char *hw3_strcpy(char *dest, const char *src)            { /* TODO */ 
    char*d=dest;
    const char*s=src;
    while(*s!='\0'){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
    return dest;
}
char *hw3_strcat(char *dest, const char *src)            { /* TODO */ 
    char*p=dest;
    while(*p!='\0'){
        p++;
    }
    while(*src!='\0'){
        *p=*src;
        p++;
        src++;
    }
    *p='\0';
    return dest;
}
int   hw3_strcmp(const char *lhs, const char *rhs)       { /* TODO */ 
    while(*lhs != '\0' && *rhs != '\0' && *lhs==*rhs){
        lhs++;
        rhs++;
    }
    return (unsigned char)*lhs-(unsigned char)*rhs;
}
