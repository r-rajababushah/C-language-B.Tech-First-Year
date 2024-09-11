#include <stdio.h>

int main(){
    printf("Input the character to test wheather its capital case or lower case : ");
    char inputChar, asciiChar;
    scanf("%c", &inputChar);

    int flag;

    for(int i=65; i<90; i++){
        asciiChar = (char) i;
        if(asciiChar == inputChar){
            flag = 1;
            break;
        }else{
            flag = 0;
        }
    }

    if(flag)
        printf("The Character is UPPERCASE \n");
    else 
        printf("The character is UPPERCASE \n");
    return 0;
}

