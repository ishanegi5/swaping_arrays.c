#include<stdio.h>
int main()
{
    int arr1[]={35,67,45,89,87};
    int arr2[]={67,45,34,86,23};
    int *ptr[5],i,j,a[5];
    printf("arr1= ");
    for(i=0;i<5;i++)
    {
        ptr[i]=&arr1[i];
        a[i]=*ptr[i];
        arr1[i]=arr2[i];
        arr2[i]=a[i];
        printf(" %d ",arr1[i]);
        if(i==4){
           printf("\narr2= ");
           for(j=0;j<5;j++){
           printf(" %d ",arr2[j]);
        }
        }
        
        
    }
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
return 0;
}
