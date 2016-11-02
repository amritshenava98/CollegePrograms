#define <stdio.h>
#define MAXLOAN 50000
main()
{
  long int loan1, loan2, loan3, sancloan, sum23;
  
  printf("Enter the values of previous two loans:\n");
  scanf(" %ld %ld", &loan1, &loan2);

  printf("\n Enter the value of new loan:\n);
  scanf(" %d", &loan3);

  sum23 = loan2 +loan3;
  sancloan = (loan>0)? 0 :((sum23>MAXLOAN)? MAXLOAN - loan2 + loan3);
  
  printf("\n\n");
  printf("Previous loans pending : \n %ld %ld \n", loan1, loan2);
  printf("Loan requested = &ld \n", loan3);
  printf("Loan sanctioned = %ld \n",sancloan);
}
