//C programming students grading system
#include<stdio.h>
#include<math.h>
#include<string.h> 
int grade();
void main () {
   grade();
}

int grade(){
    int age, x =1;
    char reg_no[30], course[30];
    while (x == 1) {
    printf("Enter Registration Number: ");
    scanf("%s", &reg_no);
    printf("Enter Course: ");
    scanf("%s", &course);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("\n************************************");
    // Outputting what the user entered
    printf("\nNAME:  %s", reg_no); 
    printf("\nCOURSE:  %s", course);
    printf("\nAGE:  %d\n", age);

    printf("\n************************************\n");
    printf("Enter 1 or any other integer to quit: ");
    scanf("%d",&x);
    }
}
