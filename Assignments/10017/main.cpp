


#include <stdio.h>

int RodA[350], RodB[350], RodC[350];

int RodACounter, RodBCounter, RodCCounter;

int step;


//prints output.
void print() {

    if(step < 0)
        return;

    int index;

    printf("A=>");

    for(index = 0; index < RodACounter; index++) {
        if(!index)  printf("  ");
        printf(" %d", RodA[index]);
    }

    printf("\nB=>");

    for(index= 0; index < RodBCounter; index++) {

        if(!index)  printf("  ");
        printf(" %d", RodB[index]);
    }

    printf("\nC=>");

    for(index = 0; index < RodCCounter; index++) {
        if(!index)  printf("  ");
        printf(" %d", RodC[index]);
    }

    puts("\n");

    step--;
}



//Moving decsion making .
void move(char start, char end) {

    if(start == 'A' && end == 'B')
        RodB[RodBCounter++] = RodA[--RodACounter];

    if(start == 'A' && end == 'C')
        RodC[RodCCounter++] = RodA[--RodACounter];

    if(start == 'B' && end == 'A')
        RodA[RodACounter++] = RodB[--RodBCounter];

    if(start == 'B' && end == 'C')
        RodC[RodCCounter++] = RodB[--RodBCounter];

    if(start == 'C' && end == 'A')
        RodA[RodACounter++] = RodC[--RodCCounter];

    if(start == 'C' && end == 'B')
        RodB[RodBCounter++] = RodC[--RodCCounter];

    print();
}


//Recursive Hanoi Pattern.
void hanoi(int n, char A, char B, char C) {

    if(step < 0){
        return;
    }

    if(n == 1) {
        move(A, C);
        return ;

    }
    else{

        hanoi(n - 1, A, C, B);
        move(A, C);
        hanoi(n - 1, B, A, C);
    }
}


int main() {

    int n, cases = 0;

    while(scanf("%d %d", &n, &step) == 2) {

        if(n == 0 && step == 0)
            break;

        printf("Problem #%d\n\n", ++cases);

        RodACounter = RodBCounter = RodCCounter = 0;

        int index;

        for(index = n; index >= 1; index--)
            RodA[RodACounter++] = index;

        print();

        hanoi(n, 'A', 'B', 'C');
    }

    return 0;
}
