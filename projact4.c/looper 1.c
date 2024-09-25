#include <stdio.h>

void main(){

char even='a';

do{
    printf("%c\t",even);

    even=even+4;
}while(even<='z');

}
