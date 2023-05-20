#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{
    int choice, choice2 ,dec=1, i,t,arr[100],result=1,sum=0,len,format;
    float a,b,c,d,x,x1,x2,x3,r,y,Percentage,discriminant,myresult,expr,disc;
    double pi=3.14159265,sq;
    int number;

    do
         {
    printf("\n         |*****| CALCULATOR |*****|");
      printf("\n|-----------------------------------------------------------|");
     printf("\n          DAFFODIL INTERNATIONAL UNIVERSITY              ");
     printf("\n|-----------------------------------------------------------|");
     printf("\n                      CSE [PC-B]                        ");
     printf("\n------------------------------------");
    printf("\n NAUSIN SHADIA ONTI(202-15-3827)");
          printf("\n------------------------------------");
         printf("\n ");
          printf("   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
         printf("  *                                                             *\n");
         printf("  |                       Project- 6: Calculator                  |\n");
         printf("   *-------------------------------------------------------------*\n");
          printf("  |   Enter 0: For exit                                           |\n");
          printf("  |   enter 1 :FOR BASIC CALCULATOR                               |\n");
          printf("  |   enter 2 :FOR SCIENTIFIC CALCULATOR                          |\n");
          printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
         printf(" \n    Enter a number : ");
         scanf("%d",&number);

        switch(number)
        {
        case 1:
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |                      BASIC CALCULATOR                         |\n");
            printf("   *-------------------------------------------------------------*\n");
            printf("  |   Enter 0: For exit                                           |");
            printf("\n  |   Enter 1: For Addition                                       |");
            printf("\n  |   Enter 2: For Subtraction                                    |");
            printf("\n  |   Enter 3: For Multiplication                                 |");
            printf("\n  |   Enter 4: For Division                                       |");
            printf("\n  |   Enter 5: For Percentage                                     |\n");
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
                printf("\n      Enter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            exit(1);
            break;
            case 1:

            printf("\n      Enter the quantity of numbers: ");
                scanf("%d",&len);
                printf("\n      Enter the numbers = ");
               for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
            }
            for(i=0;i<len;i++){
            sum+=arr[i];
               }
               printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
               printf("  *                                                             *\n");
               printf("  |   Result = %d                                                  \n",sum);
               printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
                sum =0;
            break;
            case 2:
            printf("\n      Enter the quantity of numbers: ");
                scanf("%d",&len);
                printf("\n      Enter the numbers = ");
               for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
               }
            for(i=1;i<len;i++){
            sum-=arr[i];
               }
               printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
               printf("  *                                                             *\n");
               printf("  |   Result = %d                                                  \n",arr[0]+sum);
               printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
               sum=0;
            break;
            case 3:
            printf("\n      Enter the quantity of numbers: ");
                scanf("%d",&len);
                printf ("\n");
                printf("\n      Enter the numbers = ");
               for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
               }
            for(i=0;i<len;i++){
            result*=arr[i];
               }
               printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
               printf("  *                                                             *\n");
               printf("  |   Result = %d                                                  \n",result);
               printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
               result=1;
            break;
            case 4:
                printf("\n      How many times do you want to divide : ");
                scanf("%d",&t);
                for(i = 0; i < t; i++)
            {
                scanf("%f %f",&a,&b);
                if(b==0)
                {
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   Division Impossible                                         \n");
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
                }
                else
                {
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   Result = %.1f                                                \n",a/b);
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
                }
            }
            break;
            case 5:
            printf("\n      Enter First   Number: ");
            scanf("%f",&a);
            printf("\n      Enter Second Number: ");
            scanf("%f",&b);
            result = a+b;
            Percentage = (result / 200.0) * 100;
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |   Percentage =%.2f                                            \n",Percentage);
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            break;
        }
        break;
        case 2:
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |                       SCIENTIFIC CALCULATOR                   |\n");
            printf("   *-------------------------------------------------------------*\n");
            printf("  |   Enter 0: For exit                                           |");
            printf("\n  |   Enter 1: For Square root                                    |");
            printf("\n  |   Enter 2: For Square                                         |");
            printf("\n  |   Enter 3: For Trigonometry                                   |");
            printf("\n  |   Enter 4: For Log                                            |");
            printf("\n  |   Enter 5: For Equation Solver                               |\n");
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
        printf("\n      Enter your choice ");
        scanf("%d",&choice2);
        switch(choice2)
        {
        case 1:
            printf("\n      Enter a value to find square root ");
            scanf("%f",&a);
            sq = sqrt(a);
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |   square root =%.4lf                                         \n",sq);
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            break;
        case 2:
            printf("\n      Enter a value for square  ");
            scanf("%f",&a);
            result = a*a;
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |   square = %d                                                  \n",result);
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            break;
        case 3:
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |                       Trigonometry                            |\n");
            printf("   *-------------------------------------------------------------*\n");
            printf("  |   Enter 1:For sin( )                                          |");
            printf("\n  |   Enter 2:For cos( )                                          |");
            printf("\n  |   Enter 3:For cosec( )                                        |");
            printf("\n  |   Enter 4:For tan( )                                          |");
            printf("\n  |   Enter 5:For cot( )                                          |");
            printf("\n  |   Enter 6:For sec( )                                          |\n");
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            printf("\n      Enter a number ");
            scanf("%d",&number);
            printf("\n      number = %d",number);
            if(number==1)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   sin(%f) = %.2f\n",a,sin(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==2)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   cos(a) = %.2f\n",cos(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==3)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                printf("\n      cosec = %.0f",a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   1/sin(%f) = %.2f\n",a,1/sin(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==4)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   tan(%f) = %.2f\n",a,tan(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==5)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                printf("\n      cot= %.0f",a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   1/tan(%f) = %.2f\n",a,1/tan(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==6)
            {
                printf("\n      Enter a degree ");
                scanf("%f",&a);
                printf("\n");
                printf("\n      sec= %.0f",a);
                printf("\n");
                a=a*(pi/180);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("  |   1/cos(%f)= %.2f\n",a,1/cos(a));
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
        break;
        case 4:
            printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
            printf("  *                                                             *\n");
            printf("  |                            Log                                |\n");
            printf("   *-------------------------------------------------------------*\n");
            printf("  |   Enter 1:For Log with Base 10                                |");
            printf("\n  |   Enter 2:For Natural Log(Base e)                              |");
            printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            printf("\n      Enter a number ");
            scanf("%d",&number);
            printf("\n      number = %d",number);
            if(number==1)
            {

                printf("\n      Enter a value = ");
                scanf("%f",&a);
                myresult = log10(a);
                printf("    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n ");
                printf("  *                                                             *\n");
                printf("      Log(Base 10)  =%.2f\n",myresult);
                printf("   *_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*\n");
            }
            else if(number==2)
            {
                printf("\n      Enter a value = ");
                scanf("%f",&a);
                myresult= log(a);
                printf("\n      Natural Log of  =%.2f",myresult);
            }
        break;
        case 5:
            printf("   *-------------------------------------------------------------*\n");
            printf("  |                      Equation Solver                          |\n");
            printf("   *-------------------------------------------------------------*\n");
         printf("1: ax+b=c\n");
          printf("2: ax^2+bx+c=0\n");
          printf("3: ax^3+bx^2+cx+d=0\n");
          printf("enter format= ");
         scanf("%d",&format);
        switch(format){
        case 1:
            printf("ax + b = c\n");
	        printf("Enter coefficient 'a' : \n");
	        scanf("%f", &a);

	        printf("Enter coefficient 'b' : \n");
	        scanf("%f", &b);

	        printf("Enter constant 'c': \n ");
	        scanf("%f", &c);
            printf("\n   %.0fx= %.0f-%.0f",a,c,b);
            printf("\n=> %.0fx= %.0f",a,c-b);
            x = (c-b)/a;
            printf("\n=> x = %0.f",x);
            break;
            case 2:
            printf("ax^2+bx+c=0\n");
	        printf("Enter coefficient 'a' : \n");
	        scanf("%f", &a);

	        printf("Enter coefficient 'b' : \n");
	        scanf("%f", &b);

	        printf("Enter constant 'c': \n");
	        scanf("%f", &c);
            discriminant = b *b - 4 * a * c;
            if(discriminant > 0)
            {
            x1 = (-b + sqrt(discriminant))/(2*a);
            x2 = (-b - sqrt(discriminant))/(2*a);

            printf("x1 = %.2f \n", x1);
            printf("x2 = %.2f \n", x2);
            }
            else if (discriminant == 0)
            {
            x1 = -b/(2*a);
            x2 = -b/(2*a);

            printf("x1 = %.2f \n", x1);
            printf("x2 = %.2f \n", x2);
            }
            else if (discriminant)
            {
            r = -b/(2*a);
            i = sqrt(-discriminant)/(2*a);

            printf("x1 = %.2f +y %.2f \n", r, y);
            printf("x2 = %.2f -y %.2f \n", r, y);
            }
            break;
            case 3 :
             printf("ax^3+bx+c+d=0\n");
	printf("Enter coefficient 'a': ");
	scanf("%f", &a);

	printf("\nEnter coefficient 'b': ");
	scanf("%f", &b);

	printf("\nEnter coefficient 'c': ");
	scanf("%f", &c);
	printf("\nEnter coefficient 'd': ");
	scanf("%f", &d);
i = 0;
while(i<abs(d))
{
expr = (a*i*i*i) + (b*i*i) +c*i+d;
if(expr==0)
{
x1=i;
break;
}
expr = (a*(-i)*(-i)*(-i))+(b*(-i)*(-i))+c*(-i)+d;
if(expr==0)
{
x1=-i;
break;
}
i++;
}
printf("Root 1 = %f",x1);
b = b + (a*(x1));
c = c + (b*(x1));
disc = (b*b)-(4*a*c);

if (disc>=0)
{
x2 = (-b+sqrt(disc))/(2*a);
x3 = (-b-sqrt(disc))/(2*a);
printf("\nRoot 2 = %f\nRoot 3 = %f",x2,x3);
}
else
{
disc = ((4*a*c)- b*b) /(2*a);
printf("\nRoot 2 : %f+%fi",((-b)/(2*a)),disc);
printf("\nRoot 3 : %f-%fi",((-b)/(2*a)),disc);
break;
}
        }
        break;
        case 0:
            exit(1);
        break;
        }

         printf("\nWould you like to calculate more?");
         printf("\nyes=1");
         printf("\nno=0 \n");
                         scanf("%d", &dec);

                         if(dec==1) {system("cls");}
                         else if(dec!=1&& dec!=0)
                         {
                             printf("\n      sorry\n      invalid input\n      try again\n");
                         }
        }
         }


         while( dec != 0);
    return 0;
}

