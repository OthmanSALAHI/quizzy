#include <stdio.h>

int x;
int TOPIC;
int total = 0;

void main() {
    printf("Welcome to the QUIZ GAME !!\n\n");
    printf("for any correct answer you get 20 points otherwise 0 point \n\n");
    printf("choose topic of QUIZ \n\n");
    printf("1) ANIME .\n");
    printf("2) SERIES .\n");
    scanf("%d", &TOPIC);
    while(TOPIC > 2) {
        printf("choose topic of QUIZ between 1 and 2\n\n");
        printf("1) ANIME .\n");
        printf("2) SERIES .\n");
         scanf("%d", &TOPIC);
    }
    if (TOPIC == 1) {
        printf("You CHOOSE ANIME LETS START :\n\n");
        printf("1) The character LUFFY in which anime ?\n\n");
        printf("\t1- One Piece\n");
        printf("\t2- Naruto Shippuden\n");
        printf("\t3- Bleach\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 1){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) which anime is in the top of MyAnimeList.com ?\n\n");
        printf("\t1- kemitsu no yaiba\n");
        printf("\t2- jujutsu kaisen\n");
        printf("\t3- fullmetal alchemist brotherhood\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 3){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) what is the role of kakashi ?\n\n");
        printf("\t1- hokagi\n");
        printf("\t2- sensei\n");
        printf("\t3- chef\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 2){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) how many years Saitama trained ?\n\n");
        printf("\t1- 10 years\n");
        printf("\t2- 5 years\n");
        printf("\t3- 2 years\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 3){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) what is the One piece ?\n\n");
        printf("\t1- friendship\n");
        printf("\t2- Nami\n");
        printf("\t3- None\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 2){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("you are dirty mind btw \n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }
        if (total == 100) {
            printf("CONGRATULATIONS YOU HAVE TO FOLLOW ME ON GITHUB : https://github.com/othmansalahi\n");
        }
    }else if (TOPIC == 2) {
        printf("You CHOOSE SERIES LETS START :\n\n");
        printf("1)what is the last name of Harvey in Suits ?\n\n");
        printf("\t1- pearson\n");
        printf("\t2- Hardman\n");
        printf("\t3- specter\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 3){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) which serie is in the top of MyAnimeList.com ?\n\n");
        printf("\t1- praison break\n");
        printf("\t2- breaking bad\n");
        printf("\t3- The walking dead\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 1){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) How many Seasons in The blacklist ?\n\n");
        printf("\t1- 6 seasons\n");
        printf("\t2- 9 seasons\n");
        printf("\t3- 11 seasons\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 3){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) What is the name of the  main character in Teen Wolf ?\n\n");
        printf("\t1- Elezabeith Keen\n");
        printf("\t2- Scoot MCall\n");
        printf("\t3- Scofeild\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 2){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }

        printf("1) What is the origin of Sweet Home ?\n\n");
        printf("\t1- Korean\n");
        printf("\t2- japanese\n");
        printf("\t3- Phelipinese\n");
        scanf("%d", &x);
        while(x > 3){
            printf("choose an answer from 1 to 3\n");
            scanf("%d", &x);
        }
        if (x == 1){
            total += 20;
            printf("CORRECT ANSWER YOU GAINED 20 POINTS\n");
            printf("your SCORE is %d \n\n",total);
        }else {
            printf("OPS! inccorrect answer !\n");
            printf("your SCORE is %d \n\n",total);
        }
        if (total == 100) {
            printf("CONGRATULATIONS YOU HAVE TO FOLLOW ME ON GITHUB : https://github.com/othmansalahi\n");
        }
    }
}