#include<stdio.h>
int main(){
for(int row=1 ; row<=5 ; row++){

for(int col=1 ; col<=5 ; col++){

if(col==1 || row==1 || col==5 || row==3){
printf("* ");
}else{
   printf("  "); 
}

}

printf("\n");
}




}