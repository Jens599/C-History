#include <stdio.h>
// int main()
// {
//     int val = 2;
//     int a = 1;
//     int t = 1;
//     int s = 0;
//     for (int i = 1; i <= 3; i++)
//     {
//         if (i > 1)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 printf("\t");
//             }
//             s;
//         }
//         for (int k = 1; k <= 5; k += a)
//         {
//             printf("%d\t", val);
//             val += 2;
//         }
//         a = a + t;
//         t = 5;
//         printf("\n");
//     }
// }


int main(){
    int p = 2;
    for (int i = 0; i <= 3; i++)
    {
        for (int k = 0; k <= 5; k++)
        {
            printf("%d\t", p);
             p += 2;
        }
        
    }
    
}