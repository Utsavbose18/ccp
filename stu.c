int main()
{
    int i, a;
    struct student{
        int rollNo;
        char name[20];
        char section;
        char dept[20];
        float fees;
        int totMarks;
    };
    struct student st[2];
    printf("Enter Details of 2 students \n");
    for(i=0;i<2;i++)
    {
        printf("Student %d", i+1);
        printf("\nEnter Rollno:");
        scanf("%d",&st[i].rollNo);
        printf("\nEnter Name:");
        scanf("%s",&st[i].name);
        printf("\nEnter Section:");
        scanf("%s",&st[i].section);
        printf("\nEnter Department:");
        scanf("%s",&st[i].dept);
        printf("\nEnter Total Marks:");
        scanf("%d",&st[i].totMarks);
    }
    if(st[0].totMarks>st[1].totMarks)
        a=0;
    else
        a=1;
    printf("student with higher marks");
    printf("\nRoll : %d",st[a].rollNo);
    printf("\nName : %s",st[a].name);
    printf("Section: %s",st[a].section);
    printf("\nDepartment : %s",st[a].dept);
    printf("\nMarks Obtained %d",st[a].totMarks);
}
