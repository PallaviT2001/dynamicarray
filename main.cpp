#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[50];
    unsigned int student_id;
    char address[100];
};
int main()
{
    int n;
    int i=0;
    printf("enter number students");
    scanf("%d",&n);
    struct student *ptr[n];

    for(i=0;i<n;i++){
        ptr[i]=(struct student *)malloc(sizeof(struct student));
        printf("student details of %d\n",i+1);
        printf("enter student name\n");
        scanf("%s",&ptr[i]->name);
        printf("enter student_id\n");
        scanf("%d",&ptr[i]->student_id);
        printf("enter student address\n");
        scanf("%s",&ptr[i]->address);

    }

    for(i=0;i<n;i++)
    {
        printf("The entered students details student:%d\n",i+1);
        printf("%s %d %s\n",ptr[i]->name,ptr[i]->student_id,ptr[i]->address);

    }
    free(ptr[i]);

}
