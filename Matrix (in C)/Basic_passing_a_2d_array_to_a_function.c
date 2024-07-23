#include<stdio.h>
int sum(int r,int c,int arr[r][c]){ 
    int i=0;
    int s=0;
    while(i<r){
        int j=0;
        while(j<c){
            s = s+(arr[i][j]);
            j++;
        }
        i++;
    }
    return s;
}
int main(){
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
    printf("Sum of all the numbers in the matrix is : %d",sum(row,col,mat));
    return 0;
}