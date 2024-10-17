#include<stdio.h>
#include<math.h>

# define N 12 
float TanArr[N+1];

float degtorad(float degarg);
float traprule();

int main(void)
{
	int i;
	float a=0.0,b_deg=60.0;
	float deg;

	// Convert b-pi/3 to radians 
	//float b_rad;
	//b_rad = (M_PI * b_deg)/180.0;
	//printf("pi/3 Radians = %f\n", b_rad);

	for(i=0; i<N;i=i+1){
	       deg = i*5.0;
       		TanArr[i]=tan(degtorad(deg));
 		printf("TanArr[%d]=%f\n",i,TanArr[i]);
	}		


	// Sum tan(a) +tan(b) where a and b are in radians 
	float area = traprule();
	printf("Trapezoidal result is :%f\n",area);
	//Actual result 
	//Integral of tan is ln(2)
	printf("Real Result is: %f\n",log(2.0));
	return 0;
}

float degtorad(float degarg){
	float pi = 3.1415927;
	return((pi*degarg)/180.0);
}

float traprule(){
	float area;
	int i;

	area = TanArr[0]+TanArr[N];
	printf("\n Initial area (sum at x(0) and x(12))= %f\n", area);

	for(i=1; i<N; i++)
	{
		area = area + 2*TanArr[i];
	}

	printf("The value of the sum after the loop is: %f\n",area);
	//Multiply area by (pi/3)/2(12) after converting it to radians 
	float mult_rad = degtorad((60.0-0.0)/(2*N));
	area = mult_rad*area;

	return area;
}
