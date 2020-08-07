#include <stdio.h>

double Count_Price(double weight)
{
	double price;
	
	if(weight<1)
	{
		price=8.0;
		goto out;
	}
	if(weight<10)
	{
		price=8.0+3.0*(weight-1.0);
		goto out;
	}
	if(weight<20)
	{
		price=35.0+3.0*(weight-10.0); 
		goto out;
	}
	price=55.0+4.0*(weight-20.0);
	out:
		return price;
}

void main()
{
	double weight,price,sum=0.0;
	price=Count_Price(15);
	sum+=price;
	printf("%f\n",price);

	price=Count_Price(13);
	sum+=price;
	printf("%f\n",price);
	
	price=Count_Price(8);
	sum+=price;
	printf("%f\n",price);
	printf("¹²%f\n",sum);
}
