#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int compare (char * str1, char * str2){
    int i;

    i = 0;
    while(str1[i] == str2[i]){
        if(str1[i] == '\0' && str2[i] == '\0') break;

        i++;
    }

    return str1[i]-str2[i];

}

int main(){
        char str1[MAX_SIZE],str2[MAX_SIZE];
    int i,j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // int res = strcmp(str1,str2);

    int res = compare(str1,str2);

    if(res == 0){
        printf("Both strings are equal");
    } else if (res < 0){
        printf("First string is smaller than second");
    } else {
        printf("First string greater than second string");
    }

    return 0;
}