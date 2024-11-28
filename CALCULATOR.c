/*To express like a small sentence i can express that my CALCULATOR!*/
#include<stdio.h>
#include<math.h>
void onevariable(){
printf("Enter a number operation:\n");
printf("1.Square root       2.Ceil      3.Floor     4.Sin(x)        5.Cos(x)        6.Tan(x)      7.Secant(x)     8.Cosecant(x)       9.Cot(x)        10.Ln(x)      11.log(x)     12.Expoential");
}
void twovariabledecimal()
{
    printf("Enter a number operation:\n");
    printf("1.Addition      2.Subtraction       3.Multiplication        4.Division     5.Float modulus      ");
}
void twovariableinteger()
{
    printf("Enter a number operation:\n");
    printf("1.Addition      2.Subtraction       3.Multiplication        4.Division     5.Modulus      6.Power        7.Remainder");
}
int main()
{
    int N,T,I;
    printf("1.Operation on one variable                 2.Operation two variable");
    printf("\nChoose a number: ");
    scanf("%d",&N);
    if(N==2){
    printf("What do you want to deal with?\n1.Decimal Values        2.Integers\n");
    scanf("%d",&I);
    if (I==1){
    float G;
    float H;
    twovariabledecimal();
    printf("\n");
    scanf("%d",&T);
    printf("Please enter the operators: ");
    scanf("%f %f",&G,&H);
    switch(T)
    {
      case 1:   printf("The Addition of given operators is: %.2f",G+H);
                printf("\v\v");
                break;
      case 2:   printf("The Subtraction of given operators is: %.2f",G-H);
                printf("\v\v");
                break;
      case 3:   printf("The Multiplication of given operators is: %.2f",G*H);
                printf("\v\v");
                break;
      case 4:   printf("The Division of given operators are: %.2f",G/H);
                printf("\v\v");
                break;
      case 5:   printf("The absolute difference is %.2f",fabs(G-H));
                printf("\v\v");
                break;
      default:  printf("Check again!Invalid operation.");
                break;
    }
    }
    else if (I==2){
            int G,H;
        twovariableinteger();
    printf("\n");
    scanf("%d",&T);
    printf("Please enter the operators: ");
    scanf("%d %d",&G,&H);
    switch(T)
    {
      case 1:   printf("The Addition of given operators is: %d",G+H);
                printf("\v\v");
                break;
      case 2:   printf("The Subtraction of given operators is: %d",G-H);
                printf("\v\v");
                break;
      case 3:   printf("The Multiplication of given operators is: %d",G*H);
                printf("\v\v");
                break;
      case 4:   printf("The Division of given operators are: %d",G/H);
                printf("\v\v");
                break;
      case 5:   printf("The absolute difference is %d",abs(G-H));
                printf("\v\v");
                break;
      case 6:   printf("%d",(int)pow(G,H));
                printf("\v\v");
                break;
      case 7:   printf("%d",G%H);
                printf("\v\v");
                break;
      default:  printf("Check again!Invalid operation.");
                break;
    }
    }
    }
    else if (N==1){
    onevariable();
    printf("\nChoose one operation: ");
    scanf("%d",&T);
    printf("\nPlease enter the number: ");
    float Y;
    scanf("%f",&Y);
    switch(T)
    {
       case 1:          printf("%.2f",sqrt(Y));
                        break;
       case 2:          printf("%.2f",ceil(Y));
                        break;
       case 3:          printf("%.2f",floor(Y));
                        break;
       case 4:          Y = Y * M_PI / 180;
                        printf("%.2f",sin(Y));
                        break;
       case 5:          Y = Y * M_PI / 180;
                        printf("%.2f",cos(Y));
                        break;
       case 6:          Y = Y * M_PI / 180;
                        printf("%.2f",tan(Y));
                        break;
      case 7:           Y = Y * M_PI / 180;
                        float v=1/(cos(Y));
                        printf("%.2f",v);
                        break;
      case 8:           Y = Y * M_PI / 180;
                        float f=1/(sin(Y));
                        printf("%.2f",f);
                        break;
      case 9:           Y = Y * M_PI / 180;
                        float t=1/(tan(Y));
                        printf("%.2f",t);
                        break;
      case 10:          printf("%.2f",log(Y));
                        break;
      case 11:          printf("%.2f",log10(Y));
                        break;
      case 12:          printf("%.2f",exp(Y));
                        break;
      default:          printf("Invalid Operator!Check again.");

    }
    }
    else
        printf("YOU ENTERED A WRONG NUMBER!");
return 0;
}
