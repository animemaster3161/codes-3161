#include <stdio.h>
int main() {
    float s1,s2,s3,s4,s5 ;
    float sum,percentage ;
printf("enter 5 subject marks\n") ;
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5) ;

sum = s1+s2+s3+s4+s5 ;

percentage = (sum/500.0)*100.0;

printf("total marks is 500\n");
printf("your total marks is %f\n",sum);
printf("percentage = %f%% \n",percentage);

return 0;
}