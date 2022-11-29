#include<stdio.h>
int main(){
    FILE *fp;
    typedef struct{
    int no;
    char name[18];
    float price;
    }asset;
    asset a;
    int choice;
    fp=fopen("zxcvb.dat","w+");
    if(fp==NULL)
    {
        printf("file not found");
    }
    do{
        printf("Enter no:");
        scanf("%d",&a.no);
        fprintf(fp,"Asset no %d\n",a.no);
        printf("Enter name:");
        scanf("%s",&a.name);
        fprintf(fp,"Asset no %s\n",a.name);
        printf("Enter price:");
        scanf("%f",&a.price);
        fprintf(fp,"Asset no %f\n",a.price);

        printf("Do u wanna add another record?it yes=1,no=0\t");
        scanf("%d",&choice);

    }while(choice);
    printf("Thenk You");
    fclose(fp);
    return 0;

}
