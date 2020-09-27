#include <stdio.h>
#include <stdlib.h>

int main()
{
 int sum=0;
 int numbers[2][3][4]={
     {
       {
           {10,20,30,40},
           {15,25,35,45},
           {46,47,48,49}
       }
     },
     {
          {1,2,3,4},
           {5,10,15,20},
           {6,7,8,9}
     }

 };
 for(int i=0;i<2;++i){
    for(int j=0;j<3;++j){
        for(int k=0;k<4;++k){
printf("%d,",numbers[i][j][k]);
sum+=numbers[i][j][k];

 }
printf("\n");
 }

 }
     printf("\nSum of array is:%d",sum);
    getchar();
    return 0;
}
