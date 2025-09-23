#include<stdio.h>

int main()
{
	int appleqty;
			int oileqty;
			int bnanaqty;
			int total;
			int paid;
		int appleprice=50;
			int	oileprice=120;
				int	bnanaprice=10;
					
					printf("enter the apple qty");
					scanf("%d",&appleqty);
						printf("enter the oil qty");
					scanf("%d",&oileqty);
						printf("enter the bnana qty");
					scanf("%d",&bnanaqty);
					total=( appleqty * appleprice )+( oileqty * oileprice )+( bnanaqty * bnanaprice );
					
					printf("total : %d",total);
					printf("enter the amount by paid");
					scanf("%d",&paid);
					printf("change the return =%d",paid-total);
					
					
					return 0;
}
