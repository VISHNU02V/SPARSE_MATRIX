// Program to convert a matrix to sparse then to transpose of spare

#include <stdio.h>

void main(){
    char ch='y';
    do{
        int r,c,i,j,a[50][50],b[50][50],k=1,c1[50][50],v[50][50],m,n,l,s;
        printf("\n");
        printf("\n######## TO CONVERT A MATRIX TO SPARSE THEN TO TRANSPOSE OF SPARES ########\n");
        printf("\n\n\n~~~~~~~~~~~~~~~~~~~~~~~   inputing...........\n\n");
        printf("enter the rows and columns of matrixs::_,_::");
        scanf("%d,%d",&r,&c);
        printf("\nenter the elements into the array:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n\n\n ~~~~~~~~~~~~~~~~~~~~~~   Output.........\n\n");
        printf("\nTHE MATRIX:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("  %d",a[i][j]);
            }
            printf("\n");
        } 
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]!=0){
                    b[k][0]=i;
                    b[k][1]=j;
                    b[k][2]=a[i][j];
                    k++;
                }
            }
        } 
        b[0][0]=r;
        b[0][1]=c;
        b[0][2]=k-1;
        printf("\nTHE SPARSE MATRIX:\n");
        for(i=0;i<k;i++){
            for(j=0;j<3;j++){
                printf("  %d",b[i][j]);
            }
            printf("\n");
        }
        c1[0][0]=b[0][1];
        c1[0][1]=b[0][0];
        c1[0][2]=b[0][2];
        for(i=1;i<k;i++){
            c1[i][0]=b[i][1];
            c1[i][1]=b[i][0];
            c1[i][2]=b[i][2];                
        }
        printf("\nTHE TRANSPOSE OF SPARSE MATRIX:\n");
        for(i=0;i<k;i++){
            for(j=0;j<3;j++){
                printf("  %d",c1[i][j]);
            }
            printf("\n");
        }
        printf("\nTHE TRANSPOSE OF MATRIX\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        m=c1[0][0];
        n=c1[0][1];
        for(i=1;i<k;i++){
            l=c1[i][0];
            s=c1[i][1];
            v[l][s]=c1[i][2];    
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(v[i][j]!=0){
                    printf("  %d",v[i][j]);
                }
                else{
                    v[i][j]=0;
                    printf("  %d",v[i][j]);
                }
            }
            printf("\n");
        }
        printf("\ndo you want to continue::");
        scanf("%s",&ch);
    }while(ch=='y');
}