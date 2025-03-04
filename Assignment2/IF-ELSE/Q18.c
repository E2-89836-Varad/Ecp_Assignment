#include<stdio.h>

int main()
{
	int price=5;
//	int discount_Q30;
//	int discount_Q50;
	int units;
	float amount;

	printf("Enter units you want to price\n");
	scanf("%d",&units);

	float discount_at_30Q=price*(30/100.0);
//	printf("dis_at_30Q=%f",discount_at_30Q);
	float discount_at_50Q=price*(50/100.0);
//	printf("dis_at_50Q=%f",discount_at_50Q);
	
	float price_30Q=price-discount_at_30Q;
	float price_50Q=price-discount_at_50Q;

	if(units<30)
	{
	amount=price*units;
	printf("Price for %d units is %.2frs\n",units,amount);
	}
	else if(units>30 && units<50)
	{
	amount=units*price_30Q;
	printf("Price for %d units is %.2frs\n",units,amount);
	}
	else if (units>50)
	{
	amount=units*price_50Q;
	printf("Price for %d units is %.2frs\n",units,amount);
	}
	

return 0;
}
