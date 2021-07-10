#include<stdio.h>
#include<string.h>
#define SIZE 20

struct bookdetail
{
          char name[20];
          char author[20];
          int pages;
          float price;

};

int main()
{
          struct bookdetail b[3];

          int i;

          printf("\n");
          for(i=0;i<3;i++)

          {

                   printf("\nBook %d Detail:\n",i+1);

                   printf("\nEnter the Book Name:\n");
                   scanf("%s",b[i].name);

                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);

                   printf("Enter the Pages of Book:\n");
                   scanf("%d",&b[i].pages);

                   printf("Enter the Price of Book:\n");
                   scanf("%f",&b[i].price);


          }

          //int i,t=1;

          for(i=0;i<3;i++)

          {

                    printf("\n");

                   printf("Book No.%d\n",i+1);

                   printf("\t\tBook  Name is=%s \n",b[i].name);

                   printf("\t\tBook  Author is=%s \n",b[i].author);

                   printf("\t\tBook  Pages is=%d \n",b[i].pages);

                   printf("\t\tBook Price is=%f \n",b[i].price);

                   printf("\n");

          }
            int a;
            if(b[0].price>b[1].price && b[0].price>b[2].price)
                a=0;
            else if(b[1].price>b[0].price && b[1].price>b[2].price)
                a=1;
            else
                a=2;

             printf("\n The book with highest price:\n");

                   printf("Book No.%d\n",a+1);

                   printf("\t\tBook  Name is=%s \n",b[a].name);

                   printf("\t\tBook  Author is=%s \n",b[a].author);

                   printf("\t\tBook  Pages is=%d \n",b[a].pages);

                   printf("\t\tBook Price is=%f \n",b[a].price);

                   printf("\n");


    return 0;
}
