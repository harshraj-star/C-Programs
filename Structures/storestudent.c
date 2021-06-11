#include<stdio.h>
void main()
{
    int num;


struct student
{
    int roll_no;
    char name[30];
    int marks;

} ;

struct student std[10];
printf("Enter the number of students\n");
scanf("%d" , &num);

for(int i=0;i<num;i++)
{
    printf("\nEnter the Details of Student\n" , i+1);
    printf("\nName: ");
    scanf("%s" , &std[i].name);
    printf("\nRoll No: ");
    scanf("%d" , &std[i].roll_no);
    printf("\nMarks: " );
    scanf("%d" , &std[i].marks);
}

printf("\nOutput\n********\n");
for(int i=0; i<num; i++)
{
    
    printf("\n Name: %s\n Roll No: %d\n Marks: %d\n" , std[i].name , std[i].roll_no , std[i].marks);
   
}
 printf("\n********\n");
}