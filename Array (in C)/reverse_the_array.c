#include<stdio.h>

void explaination();
void reverse_the_array();

int main(){
    reverse_the_array();
    return 0;
    }

void reverse_the_array(){
    printf("Enter the size of the array:- ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Numbers of array:- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //solution :- (Time complexity :- O(n) , Space Complexity:- O(1))

    int last=n-1;
    int first=0;
    for (;first != last && first < last;  )
    {   
        int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
    }
    printf("Reversed array:- ");
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    //Exit
    explaination();
}

void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit:- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        reverse_the_array();
    }
    else if(exit==0){
        printf("Here we take two variables to store first and last index we just swap the values at these indexes and increment value of first index and decrement value of last index until first and last becomes equal or first become greater then last.\n");
        printf("Time Complexity:- O(n) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}