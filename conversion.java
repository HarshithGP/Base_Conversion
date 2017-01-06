import java.io.*;
public class conversion
{
		static BufferedReader keyin = new BufferedReader( new InputStreamReader(System.in));
		static String instr;
		
		public static void Dec_Bin() throws IOException
		{
				int dec=0; String bin=""; String binary="";
				int x=0;
					
				while(x==0)
				{
						System.out.println("Enter a positive decimal number");
						instr=keyin.readLine(); 
						try
						{
								dec=Integer.parseInt(instr);
								if(dec<0)
									System.out.println("Positive number expected");
								else 
									x=1;
						}
						catch(NumberFormatException z)
						{
								System.out.println("Invalid Entry");
						}
				}
					
				int num=dec,rem;
				if(dec==0)
					binary="0";
					
				while(dec!=0)
				{
						rem=dec%2;
						dec=dec/2;
						bin=bin+rem;
				}
			
				int l=bin.length();
				for(int i=l-1;i>=0;i--)
				{
						char ch=bin.charAt(i);
						binary=binary+ch;
				}
				
				System.out.println("Decimal : "+num+" = "+" Binary : "+binary);
	}		
		public static void Bin_Dec() throws IOException
		{
				int dec=0,binary=0;
				String bin=""; 
				int x=0,ctr=0,l;
					
				while(x==0)
				{
						System.out.println("Enter a binary number");
						bin=keyin.readLine(); 
						l=bin.length();
						
						try
						{
								int i=0; char ch;
								
								for(i=0;i<l;i++)
								{
										ch=bin.charAt(i);
										if(ch!='1'&&ch!='0')
										{	
												System.out.println("Invalid Binary Number");
												break;
										}
										else 
											ctr++;			
								}
								
								if(ctr==l)
								{
										x=1;
										binary=Integer.parseInt(bin);
								}
									
						}
						catch(NumberFormatException z)
						{
								System.out.println("Invalid Entry");
						}
				}
			
				int Bin=binary,rem=0,j=0;
				while(Bin!=0)
				{
						rem=Bin%10;
						Bin=Bin/10;
						dec=dec+rem*(int)Math.pow(2,j++);
				}
				
				System.out.println("Binary : "+binary+" = "+" Decimal : "+dec);
	}
		public static void Dec_Octal() throws IOException
		{
				int dec=0; String oct="",octal="";
				int x=0,l;
					
				while(x==0)
				{
						System.out.println("Enter a positive decimal number");
						instr=keyin.readLine(); 
						try
						{
								dec=Integer.parseInt(instr);
								if(dec<0)
									System.out.println("Positive number expected");
								else 
									x=1;
						}
						catch(NumberFormatException z)
						{
								System.out.println("Invalid Entry");
						}
				}
					
				int num=dec,rem;
				
				if(dec==0)
					octal="0";
					
				while(dec!=0)
				{
						rem=dec%8;
						dec=dec/8;
						oct=oct+rem;
				}
				
				l=oct.length();
				int i;
				for(i=l-1;i>=0;i--)
				{
						char ch=oct.charAt(i);
						octal=octal+ch;
				}
			
				System.out.println("Decimal : "+num+" = "+" Octal : "+octal);
	}	
		public static void Octal_Dec() throws IOException
		{
				int dec=0,octal=0;
				String oct=""; 
				int x=0,ctr=0,l;
					
				while(x==0)
				{
						System.out.println("Enter an octal number");
						oct=keyin.readLine(); 
						l=oct.length();
						
						try
						{
								int i=0; char ch;
								
								for(i=0;i<l;i++)
								{
										ch=oct.charAt(i);
										if(ch!='0'&&ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6'&&ch!='7')
										{	
												System.out.println("Invalid Octal Number");
												break;
										}
										else 
											ctr++;			
								}
								
								if(ctr==l)
								{
										x=1;
										octal=Integer.parseInt(oct);
								}
									
						}
						catch(NumberFormatException z)
						{
								System.out.println("Invalid Entry");
						}
				}
			
				int Oct=octal,rem=0,j=0;
				while(Oct!=0)
				{
						rem=Oct%10;
						Oct=Oct/10;
						dec=dec+rem*(int)Math.pow(8,j++);
				}
				
				System.out.println("Octal : "+octal+" = "+" Decimal : "+dec);
	}
	    
		public static void main(String[] args) throws IOException
		{
				int ch=0,x=0;
				
				while(x==0)
				{
						System.out.println("--------------------------------------------------------");
						System.out.println("Welcome to Number conversion");
						System.out.println("1. Decimal to Binary");
						System.out.println("2. Binary to Decimal");
						System.out.println("3. Decimal to Octal");
						System.out.println("4. Octal to Decimal");
						System.out.println("0. Exit");
						System.out.println("--------------------------------------------------------");
						System.out.println("Enter your choice");
						System.out.println("---------------------------------------------------------");
						instr=keyin.readLine();
						
						try
						{
								ch=Integer.parseInt(instr);
								if(ch<0||ch>4)
										System.out.println("Invalid Entry");
					
						}
						catch(NumberFormatException z)
						{
								System.out.println("Invalid Entry");
						}
							
						switch(ch)
						{
								case 1: Dec_Bin(); break;
								case 2: Bin_Dec(); break;
								case 3: Dec_Octal(); break;
								case 4: Octal_Dec(); break;
								
								case 0: System.out.println("Goodbye"); System.exit(0);
						}
				}
		}

}