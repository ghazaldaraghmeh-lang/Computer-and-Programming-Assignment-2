 /*
               Ghazal_Salah_Daraghmeh
                      1230542
                Dr.Alaa_Nairat
                    sec:14/LB

*/

#include <stdio.h>
#include <stdlib.h>

   int hasEqualDigitSum(int NO);
    int hasEqualDigitCount(int NO);
     int isBalanced(int NO);

int main()
{
    int x,y;

    printf("Enter any two positive numbers x and y:\n");
    scanf("%d%d",&x,&y);

     printf("The balanced numbers from %d to %d are:\n", x, y);
      for (int i = x; i <= y; i++)
      {
        if (isBalanced(i)&& i!=0)
            {
            printf("%d\n", i);
            }
    }

    return 0;
}

      int hasEqualDigitSum(int NO)
      {
          int sumofeven = 0;
          int sumofodd = 0;

          while (NO > 0)
            {
             int digit = NO % 10;
             if (digit % 2 == 0)
              { sumofeven += digit; }
              else { sumofodd += digit; }

               NO /= 10;
            }

             if (sumofeven == sumofodd)
                { return 1;}
             else { return 0;}
      }



   int hasEqualDigitCount(int NO)
   {
          int countofeven = 0;
          int  countofodd = 0;

           while (NO > 0)
            {
              int digit = NO % 10;
              if ( digit % 2 == 0 )
              { countofeven++; }
              else { countofodd++; }

              NO /= 10;
            }

          if ( countofeven == countofodd )
              { return 1; }
          else { return 0; }
    }


    int isBalanced(int NO)
     {

        int Truthvalue;
         if ( Truthvalue = hasEqualDigitSum(NO) && hasEqualDigitCount(NO) )
         {
             return 1;
         }
         else
            {
                return 0;
            }
      }











