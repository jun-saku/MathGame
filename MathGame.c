#include <io.h>
#include <stdio.h>

void main(){
int add, dend, sum, c, blub, bla, none, xtra, ans;

printf (" Welcome to the Math Game!\n\n Test your math skills on the basic operations!\n No using of calculators!\n Choose your game mode:\n\n 1 - Addition\n\n 2 - Subtraction\n\n More Levels Coming Soon!\n Type number here:");
scanf ("%d", &bla);
srand(time(0));
int life;
for (life = 0; life >= 0; ){
/*Addition*/
if (bla==1){
    add = (1+(rand()%10)); dend = 1+(rand()%10);
    int blub=1;
    printf ("Start\n");
    if (blub=1){
            xtra = 1;
        for (c = 0; xtra == 1; c++, add, dend){
            if (c < 10) {
                add = (1+(rand()%10)); dend = 1+(rand()%10);
            }
            sum = add + dend;
            printf ( "%d plus %d is equal to?", add, dend) ;
            scanf ("%d", &ans);
                if (ans==sum){
                    printf  ("Correct!\n");
                    xtra = 1;
                }
                else {
                    xtra = 0;
                    life = life - 1;
                }
            if (c >= 10) {
                add = (1+(rand()%100)); dend = 1+(rand()%100);
            }
            if (c >= 30) {
                add = (1+(rand()%1000)); dend = 1+(rand()%1000);
            }
            if (c >= 70) {
                add = (1+(rand()%10000)); dend = 1+(rand()%10000);
            }
        }
    c= c-1;
    if (c < 100){
        printf ("Your Score: %d \n Try to get 100 next time :(", c);
    }
    else {
        printf ("Your Score: %d \n Congratulations! You are the real addition master. \n Save this password for following updates: MNBVCXZ", c);
    }
    printf ("\n\n Type ok to end.");
    scanf ("%d", &blub);
    }

}
/*Subtraction*/

if (bla==2){
    add = (1+(rand()%10)); dend = 1+(rand()%10);
    int blub=1;
    printf ("Start\n");
    if (blub=1){
            xtra = 1;
        for (c = 0; xtra == 1; c++, add, dend){
            if (c < 10) {
                add = (1+(rand()%10)); dend = 1+(rand()%10);
            }
            sum = add - dend;
            printf ( "%d minus %d is equal to?", add, dend) ;
            scanf ("%d", &ans);
                if (ans==sum){
                    printf  ("Correct!\n");
                    xtra = 1;
                }
                else {
                    xtra = 0;
                    life = life - 1;
                }
            if (c >= 10) {
                add = (1+(rand()%100)); dend = 1+(rand()%100);
            }
            if (c >= 30) {
                add = (1+(rand()%1000)); dend = 1+(rand()%1000);
            }
            if (c >= 70) {
                add = (1+(rand()%10000)); dend = 1+(rand()%10000);
            }
        }
    c= c-1;
    if (c < 100){
        printf ("Your Score: %d \n Try to get 100 next time :(", c);
    }
    else {
        printf ("Your Score: %d \n Congratulations! You are the real subtraction master. \n Save this password for following updates: 18002738255", c);
    }
    printf ("\n\n Type ok to end.");
    scanf ("%d", &blub);
    }

}
if (blub == 18002738255) {
    printf ("Password Saved \n Congratulations, you earned one life");
    life = life + 1 ;
}
}
}
