#include <stdio.h>

int main () {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n<=0 || n>100) {
        printf("INVALID NUMBER OF STUDENTS");
        return 0;
    }

    printf("\n");

    int array[100];
    for (int i=0; i<n; i++) {
        printf("Enter marks for student %d: ",i+1);
        scanf("%d",&array[i]);
        if (array[i]<0 || array[i]>100) {
            printf("INVALID NUMBER OF MARKS");
            return 0;
        }
    }

    printf("\n--- Student Marks ---\n");
    float total=0;
    float average;
    for (int i=0; i<n; i++) {
        printf("Student %d: %d\n",i+1,array[i]);
        total=total+array[i];
    } average=total/n;

    printf("\nTotal Marks: %.2f\nAverage Marks: %.2f\n\n",total,average);

    int highest=array[0];
    int lowest=array[0];
    for (int i=0; i<n; i++) {
        if (array[i]>highest) {
            highest=array[i];
        }
        if (array[i]<lowest) {
            lowest=array[i];
        }
    }
    
    printf("Highest Marks: %d\nLowest Marks: %d",highest,lowest);
    printf("\n\n--- Student Report ---\n");
    
    for (int i=0; i<n; i++) {
        printf("Student %d: %d\n",i+1,array[i]);
        if (array[i]>=90 && array[i]<=100) {
            printf("Grade: A\n\n");
        } else if (array[i]>=80 && array[i]<=89) {
            printf("Grade: B\n\n");
        } else if (array[i]>=70 && array[i]<=79) {
            printf("Grade: C\n\n");
        } else if (array[i]>=60 && array[i]<=69) {
            printf("Grade: D\n\n");
        } else {
            printf("Grade: F\n\n");
        }
    }

    printf("\n--- Class Summary ---\n");
    int countPass=0;
    int countFail=0;
    for (int i=0; i<n; i++) {
        if (array[i]>=40) {
            countPass++;
        } else {
            countFail++;
        }
    }

    printf("Total Students: %d\n",n);
    printf("Students Passed: %d\n",countPass);
    printf("Students Failed: %d\n",countFail);
    return 0;
}