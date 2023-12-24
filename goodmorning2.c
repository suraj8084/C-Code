#include<stdio.h>
void goodmorning();
void goodAfternoon();
void goodNight();

void main(){
    goodmorning();
    }
void goodmorning(){
    printf("Good Moning\n");
    goodAfternoon();
}
void goodAfternoon(){
    printf("Good Afternoon\n");
    goodNight();
}
void goodNight(){
    printf("Good Night\n");
}