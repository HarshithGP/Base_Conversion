#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<string.h>

void Decimal_to_Binary(void)
{
	int temp,dec,bin=0,i=0;
	printf("Enter a decimal number \n");
	scanf("%d",&dec);
	
	temp=dec;
	while(dec>=1)
	{
		bin=bin+pow(10.0,i++)*(dec%2);
		dec=dec/2;
	}
	bin=bin+pow(10.0,i)*dec;
	printf("The binary Equivalent of the decimal number %d is %d \n",temp,bin);

	return;
}

void Decimal_to_Octal(void)
{
	int temp,dec,oct=0,i=0;
	printf("Enter a decimal number \n");
	scanf("%d",&dec);
	
	temp=dec;
	while(dec>=8)
	{
		oct=oct+pow(10.0,i++)*(dec%8);
		dec=dec/8;
	}
	oct=oct+pow(10.0,i)*dec;
	printf("The Octal Equivalent of the decimal number %d is %d \n",temp,oct);

	return;
}


void Decimal_to_Hexadecimal(void)
{
	int temp,dec,rem,i=0,j;
	char hex[100];

	printf("Enter a decimal number \n");
	scanf("%d",&dec);
	temp=dec;

	while(dec!=0)
	{
		rem=dec%16;

		if(rem==0)
			hex[i]='0';
		else if(rem==1)
			hex[i]='1';
		else if(rem==2)
			hex[i]='2';
		else if(rem==3)
			hex[i]='3';
		else if(rem==4)
			hex[i]='4';
		else if(rem==5)
			hex[i]='5';
		else if(rem==6)
			hex[i]='6';
		else if(rem==7)
			hex[i]='7';
		else if(rem==8)
			hex[i]='8';
		else if (rem=='9')
			hex[i]='9';
		else if(rem==10)
			hex[i]='A';
		else if(rem==11)
			hex[i]='B';
		else if(rem==12)
			hex[i]='C';
		else if(rem==13)
			hex[i]='D';
		else if(rem==14)
			hex[i]='E';
		else 
			hex[i]='F';

		dec=dec/16;
		i++;
	}

	printf("The Hexadecimal Equivalent of decimal number %d is : ",temp);
	for(j=i-1;j>=0;j--)
	printf("%c",hex[j]);
	printf("\n");

	return;
}


void Binary_to_Decimal(void)
{
	int i=0,x=1,bin,temp,rem,ctr,ictr,dec=0;

	// validation
	while(x)
	{
		printf("Enter a Binary Number\n");
		scanf("%d",&bin);
		temp=bin;

		ctr=ictr=0;
		while(temp!=0)
		{
			temp=temp/10;
			ctr++;
		}

		temp=bin;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem!=0&&rem!=1)
			{
				printf("Invalid Entry : Binary number required\n");
				break;
			}

			temp=temp/10;
			ictr++;
		}

		if(ictr==ctr)
		x=0;
	}//end op validation

	temp=bin;
	while(bin!=0)
	{
		rem=bin%10;
		dec=dec+(rem*pow(2.0,i++));
		bin=bin/10;
	}
	
	printf("The decimal equivalent of the binary number %d is %d \n",temp,dec);
	return;
}
void Octal_to_Decimal(void)
{
	int i=0,x=1,oct,temp,rem,ctr,ictr,dec=0;

	// validation
	while(x)
	{
		printf("Enter a valid Octal Number\n");
		scanf("%d",&oct);
		temp=oct;

		ctr=ictr=0;
		while(temp!=0)
		{
			temp=temp/10;
			ctr++;
		}

		temp=oct;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem>7)
			{
				printf("Invalid Entry : Octal number required\n");
				break;
			}

			temp=temp/10;
			ictr++;
		}

		if(ictr==ctr)
		x=0;
	}//end of validation

	temp=oct;
	while(oct!=0)
	{
		rem=oct%10;
		dec=dec+(rem*pow(8.0,i++));
		oct=oct/10;
	}
	
	printf("The decimal equivalent of the octal number %d is %d \n",temp,dec);
	return;
}


void Hexadecimal_to_Decimal(void)
{
	char hex[20],ch;
	int l,i=0,j=0,x=1,ctr,dec=0;

	// validate
	while(x)
	{
		printf("Enter a valid HexaDecimal Number \n");
		scanf("%s",hex);
		l=strlen(hex);

		ctr=0;
		while(hex[i]!='\0')
		{
			ch=hex[i];
			if(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6'
				&&ch!='7'&&ch!='8'&&ch!='9'&&ch!='0'&&ch!='A'&&ch!='B'
				&&ch!='C'&&ch!='D'&&ch!='E'&&ch!='F')
			{
				printf("Invalid Entry : Enter Again \n");
				break;
			}
			else 
			ctr++;

			i++;
		}

		if(ctr==l)
		x=0;
	}

	for(i=l-1;i>=0;i--)
	{
		ch=hex[i];
		switch(ch)
		{
			case '1': dec=dec+(1*pow(16.0,j++)); break;
			case '2': dec=dec+(2*pow(16.0,j++)); break;
			case '3': dec=dec+(3*pow(16.0,j++)); break;
			case '4': dec=dec+(4*pow(16.0,j++)); break;
			case '5': dec=dec+(5*pow(16.0,j++)); break;
			case '6': dec=dec+(6*pow(16.0,j++)); break;
			case '7': dec=dec+(7*pow(16.0,j++)); break;		
			case '8': dec=dec+(8*pow(16.0,j++)); break;
			case '9': dec=dec+(9*pow(16.0,j++)); break;
			case '0': dec=dec+(0*pow(16.0,j++)); break;
			case 'A': dec=dec+(10*pow(16.0,j++));break;
			case 'B': dec=dec+(11*pow(16.0,j++));break;
			case 'C': dec=dec+(12*pow(16.0,j++));break;
			case 'D': dec=dec+(13*pow(16.0,j++));break;
			case 'E': dec=dec+(14*pow(16.0,j++));break;
			case 'F': dec=dec+(15*pow(16.0,j++));break;
		}
	}

	printf("The Decimal Equivalent of the Hexadecimal number %s = %d \n",hex,dec);

	return;
}
	
void main()
{
	int ch;
	while(true)
	{
		printf("------------MENU-----------\n");
		printf("1.Decimal to Binary \n");
		printf("2.Decimal to Octal \n");
		printf("3.Decimal to Hexadecimal \n");
		printf("4.Binary to Decimal \n");
		printf("5.Octal to Decimal \n");
		printf("6.Hexadecimal to Decimal \n");

		printf("0.EXIT \n");
		printf("---------------------------\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : Decimal_to_Binary();break;
			case 2 : Decimal_to_Octal();break;
			case 3 : Decimal_to_Hexadecimal();break;
			case 4 : Binary_to_Decimal();break;
			case 5 : Octal_to_Decimal();break;
			case 6 : Hexadecimal_to_Decimal();break;

			case 0 : printf("Program Execution complete \n"); 
					 getch();
					 exit(0);

			default : printf("Invalid Entry : Kindly Enter again \n");

		}//end of switch

	}//end of while

}//end of main
					 