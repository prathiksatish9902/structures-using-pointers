#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[50];
    unsigned int student_id;
    char address[100];
};

int main()
{

    int n;
    printf("enter the number of students:");
    scanf("%d",&n);
    struct student *students=(struct student *)malloc(n * sizeof(struct student ));
    if(students == NULL){
        printf("the memory allocation is failed");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("enter the details of student%d\n",i+1);
        printf("name:");
        scanf("%s",&(students+i)->name);
        printf("\nstudent_id:");
        scanf("%d",&(students+i)->student_id);
        printf("\naddress:");
        scanf("%s",&(students+i)->address);
    }
    printf("\n");
    printf("displaying the details of all students \n");
    for(int i=0;i<n;i++){
        printf("\nstudent%d\n",i+1);
        printf("name:%s\t",(students+i)->name);
        printf("student_id:%d\t",(students+i)->student_id);
        printf("address:%s\t",(students+i)->address);
        free(students);
    }

    return 0;
}
