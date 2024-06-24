#include <stdio.h>

int main() {
    
    int Marks,Total=0;
    float ave;
    
    printf("1. Implement a C program to find an average and a grade of a student. Consider 5 subjects. Assign out of 100 marks for each subject. Use conditions for evaluate grades based on average value.\n\n");
    
    printf("The 12th commerce result.\n\n");
    
    for(int i=1; i<=5; i++) {
        if(i==1) {
            printf("Statistics :- ");
        } else if(i==2) {
            printf("Account    :- ");
        } else if(i==3) {
            printf("Economics  :- ");
        } else if(i==4) {
            printf("English    :- ");
        } else {
            printf("B.A.       :- ");
        }
        scanf("%d", &Marks);
        Total+=Marks;
    }
    
    ave=Total/5;
    printf("\nTotal Marks = %d\n", Total);
    printf("Average Marks = %.2f\n", ave);
    
    if(ave<100 && ave>=85) {
        printf("Garde = 'A'\n");
    } else if(ave<85 && ave>=70) {
        printf("Garde = 'B'\n");
    } else if(ave<70 && ave>=55) {
        printf("Garde = 'C'\n");
    } else if(ave<55 && ave>=33) {
        printf("Garde = 'D'\n");
    } else if(ave<33) {
        printf("You are Faile\n");
    }
    
    printf("\nThank you.");

    return 0;
}