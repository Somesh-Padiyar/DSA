#include<stdio.h>
void Searching_in_sorted_row_wise_matrix();
void search(int row,int col,int key,int mat[row][col]);
void explaination();
int flag=0;

int main(){
    Searching_in_sorted_row_wise_matrix();
    return 0;
}

void Searching_in_sorted_row_wise_matrix(){
    printf("Enter The number of rows in matrix : ");
    int row;
    scanf("%d",&row);
    printf("Enter The number of colums in matrix : ");
    int col;
    scanf("%d",&col);
    int mat[row][col];
    printf("Enter the values of matrix's element (row wise) in increasing order : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }

    printf("\n");
        for (int i = 0; i < row; i++)
    {   
        printf("| ");
        for (int j = 0; j < col; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("|\n"); 
    }
    printf("\n");    

    printf("Enter the value to be searched : ");
    int key;
    scanf("%d",&key);
    search(row,col,key,mat);
    if (flag==0)
    {
        printf("Value is not present in the matrix.\n");
    }
    
    explaination();
}
void search(int row,int col,int key,int mat[row][col]){
int tr,tc;
int l=0;
int r;
r=(row*col)-1;
int mid;
while(l<=r){
    mid=(r+l)/2;
    tr=mid/col;
    tc=(mid%col);
    if(key==mat[tr][tc]){
        printf("Value is present in the matrix.\n");
        flag++;
        return;
    }
    else if(key<mat[tr][tc]){
        r=mid-1;
    }
    else if(key>mat[tr][tc]){
        l=mid+1;
    }
}
}

void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit:- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        Searching_in_sorted_row_wise_matrix();
    }
    else if(exit==0){
        printf("Here we simply apply the binary search by taking left_index=0 and right_index=(row*col)-1 , when we need to compare the key and the value at mid index we can easily find that in a 2d array (matrix) by matrix[mid/col][mid%%col].\n"); //"%%" to print %
        printf("Time Complexity:- O(log(n*m)) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}