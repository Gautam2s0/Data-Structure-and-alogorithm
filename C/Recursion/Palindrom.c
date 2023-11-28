#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindrom(char str[],int start,int last){
    if(str[start]!=str[last]) {
        printf("false -->  start = %d\tlast = %d\n",start,last);
        return false;

    }
    else if(start>=last) {
    printf("true -->  start = %c\tlast = %c\n",str[start],str[last]);
        return true;
    }
    else{
        start++;
        last--;
        palindrom(str,start,last);
    }
    


}

void main(){
    char str[30]="ABCCBA";
    int len=strlen(str);
    bool p=palindrom(str,0,len-1);
    p?printf("Palindrom"):printf("Not a palindrom");
}