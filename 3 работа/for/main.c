#include "ft.h"
#include <stdlib.h>
int main()
{
    int operator;
    int n = 0;
    int k = 0;
    double eps = 0;

    printf("Task with for\n");
    printf("1. Task 1\n");
    printf("2. Task 2\n");
    printf("3. Task 3\n");
    printf("4. Task 4\n");
    printf("5. Task 5\n");
    printf("6. Exit\n");
    printf("Select number of task: ");
    scanf("%d", &operator);
    switch (operator)
    {
            case 1:
            {
            printf("Enter n: ");
            scanf("%d", &n);
            printf("%.4lf", summ(n));
            break ;
            }
            case 2:
            {
            printf("Enter eps: ");
            scanf("%lf", &eps);
            printf("%.4lf", summ2(eps));
            break ;
            }
            case 3:
            {
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Enter k: ");
            scanf("%d", &k);
            print(n, k);
            break ;
            }
            case 4:
            {
            printf("Enter eps: ");
            scanf("%lf", &eps);
            printf("%d", findFirstElement(eps));
            break ;
            }
            case 5:
            {
            printf("Enter eps: ");
            scanf("%lf", &eps);
            printf("%d", findFirstNegativeElement(eps));
            break ;
            }
            case 6:
            break ;
    }
    system("pause");
}