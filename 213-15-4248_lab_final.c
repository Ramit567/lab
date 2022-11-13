---------------------------------
binary search 
----------------------------------------
#include<stdio.h>
void Binarysearch(int arr[],int num,int f, int l)
{

    if(f>l)
    {
        printf("Number is notfound");
    }
    else
    {
        int mid;
        mid=(f+l)/2;
        if(arr[mid]==num)
        {
            printf("Elemnet is found at %d", mid+1);
            exit(0);
        }
        else if(arr[mid]>num)
        {
            Binarysearch(arr,num,f,mid-1);
        }
        else
        {
            Binarysearch(arr,num,mid+1,l);
        }
    }
}
int main()
{

    int n,i;
    printf("Enter the  Number of arr : ");
    scanf("%d",&n);
    int arr[n];
    int f=0;
    int l=n;
    printf("\n\n");
    printf("Enter the Element of Array \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf ("Enter the value want to search \n");
    scanf("%d",&num);
    Binarysearch(arr,num,f,l);

}
-----------------------------------------------------
linear search
------------------------------------------------------------
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the  Number of element : ");
    scanf("%d",&n);
    int a[n];
    printf("\n\n");
    printf("Enter the Element of Array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       int b,c=0;
    printf("Enter the Value That you want to Search in the Linked List : ");
    scanf("%d",&b);
        for (int i = 0; i < n; i++) {
            if (a[i]==b) {
                printf("The Data is Found ,position is %d",i+1);
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("The Data is not Found !!! ");
        }
}
