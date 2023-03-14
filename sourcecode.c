/*LIBRARY MANAGEMENT SYSTEM APPLICATION*/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//Creating a structure datatype to hold book details
struct Library{
    char book_name[120];
    char lang[60];
    float price;
    char author_name[100];
    char lod[10];
};
int main()
{
    struct Library l[100];
    int choice;
    int i=0;
    int c=0;
    printf("***************************************************WELCOME TO VIGNAN LIBRARY********************************************\n");
    while(choice!=5)
    {   
        //Providing menu of available services in library
        printf("\n\nThe Available Options are:");
        printf("\n1.Adding Book Details");
        printf("\n2.Listing out the details of all books available in the library");
        printf("\n3.Displaying count of books available int library");
        printf("\n4.Displaying the details of a book with name entered by user");
        printf("\n5.Exit");
        printf("\nPlease enter your choice here:");   //Reading choice input
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nYou entered adding book option");
                printf("\nEnter Book name:");
                scanf("%s",l[i].book_name);
                printf("\nBook price:");
                scanf("%f",&l[i].price);
                printf("\nAuthor name:");
                scanf("%s",l[i].author_name);
                printf("\nLanguage:");
                scanf("%s",l[i].lang);
                printf("\nLevel of difficulty:");
                scanf("%s",l[i].lod);
                i=i+1;
                c=c+1;
                break;
            case 2:
                if(c==0)
                {
                    printf("\nThere are no books available in the library");
                }
                else
                {
                printf("\nYou entered listing the details of all books option");
                printf("\nDetails of all books available in the library are:");
                for(int k=0;k<c;k++)
                {
                    printf("\n\tDetails of book %d are:",k+1);
                    printf("\n\t\tName:%s",l[k].book_name);
                    printf("\n\t\tAuthor:%s",l[k].author_name);
                    printf("\n\t\tLanguage:%s",l[k].lang);
                    printf("\n\t\tPrice:%f",l[k].price);
                    printf("\n\t\tLevel Of Difficulty:%s",l[k].lod);
                }
                }
                break;
            case 3:
                printf("\nYou entered displaying the count of books available in the library option");
                printf("\nThe total number of books available in the library are:%d",c);
                break;
            case 4:
                printf("\nYou entered displaying the book details with given name option");
                char nm[120];
                int p;
                int f;
                printf("\nEnter name of book to get the details:");
                scanf("%s",nm);
                for(int y=0;y<c;y++){
                    if(strcmp(nm,l[y].book_name)==0)
                    {
                        f=1;
                        p=y;
                        break;
                    }
                }
                if(f==1){
                    printf("\nYour book details are:");
                        printf("\n\tName:%s",l[p].book_name);
                        printf("\n\tAuthor:%s",l[p].author_name);
                        printf("\n\tLanguage:%s",l[p].lang);
                        printf("\n\tPrice:%f",l[p].price);
                        printf("\n\tLevel Of Difficulty:%s",l[p].lod);
                }
                else{
                    printf("\nSorry the book with %s name is not available",nm);
                }
                break;
            case 5:
                exit(0);
                
            default:
                printf("\nSorry you entered wrong option\n");
        }
    }

    return 0;
}
