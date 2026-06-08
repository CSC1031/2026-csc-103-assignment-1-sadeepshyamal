#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sub1=0;
    float sub2=0;
    float sub3=0;
    float total marks=0;
    float ave marks=0;

    printf("student marks calculator\n");
    printf("enter the sub1 marks :");
    scanf("%f",&sub1);
    printf("enter the sub2 marks :");
    scanf("%f",&sub2);
    printf("enter the sub3 marks");
    scanf("%f",&sub3);

    total marks = sub1+sub2+sub3;
    ave marks = total marks/3.0;

    if (ave marks>= 80){
        printf("total:%f\n",total marks);
        printf("ave marks:%.2f\n",ave marks);
        printf("grade:A\n");
        if (sub1>= 40 & sub2>=40 & sub3>=40)
        printf("resuls : pass\n");
        else {
            printf("results : fail");
        }
    }
    else if (ave marks>= 70){
        printf("total:%f\n",total marks);
        printf("ave marks:%.2f\n",ave marks);
        printf("grade:A\n");
            if (sub1>= 40 & sub2>=40 & sub3>=40)
        printf("resuls : pass\n");
        else {
            printf("results : fail");
        }

    }
   else if (ave marks>= 60){
        printf("total:%f\n",total marks);
        printf("ave marks:%.2f\n",ave marks);
        printf("grade:B\n");
            if (sub1>= 40 & sub2>=40 & sub3>=40)
        printf("resuls : pass\n");
        else {
            printf("results : fail");
        }
   }
   else if (ave marks>=50);{
        printf("total:%f\n",total marks);
        printf("ave marks:%.2f\n",ave marks);
        printf("grade:C\n");
            if (sub1>= 40 & sub2>=40 & sub3>=40)
        printf("resuls : pass\n");
        else {
            printf("results : fail");
        }
   }
   else
        printf("total:%f\n",total marks);
        printf("ave marks:%.2f\n",ave marks);
        printf("grade:F\n");
            if (sub1>= 40 & sub2>=40 & sub3>=40)
        printf("resuls : pass\n");
        else {
            printf("results : fail");
        }

    return 0;
}
