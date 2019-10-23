#include "program.h"
#include<sstream>


int program::str_to_int(const string &deger) {
   stringstream ss(deger);
   int sayi;
   ss >> sayi;
   return sayi;
}
 

bool program::sayiMi(string girilenDeger)   

{
	int uzunluk,i;
	uzunluk =girilenDeger.length();
	if(uzunluk==1 && girilenDeger[i]=='0')
	return false;
	else{
	
	 for(i = 0;i<uzunluk;i++)
   {
    if(!isdigit(girilenDeger[i]) )
    {
      return false;
      
    }
    
    
  }
  return true;
}
} 

bool program::kontrol(int  dizi[],string deger,int *ideger)
{
	
	if(*ideger==0)
	 return true;
	else
	{
	 
	int j;
		for(j=0;j<*ideger;j++)
 	  {
 	  	
 	    
 	  	if(dizi[j]==str_to_int(deger))
 	  	{
 	  		cout<<"Bu eleman eklenmis."<<endl;
 	  		return false;
	    }
		 
 	  }
 	  
 	  return true;
   }
}

void program::sirala(int *ptr)
{
	int i,j;
	
		for(i=0;i<10;i++)
	
	{
		for(j=1;j<10-i;j++)
		{
			if(ptr[j-1]>ptr[j])
			{
				int temp=ptr[j];
				ptr[j]=ptr[j-1];
				ptr[j-1]=temp;
			}
		}
		

	}
	
	j=0;
	
	for(i=0;i<10;i++)
	
	{
		if(sayiDizisi[i]%2==0)
		{
		
		cout<<sayiDizisi[i]<<endl;
		j++;
	 
	    }
	}
	if(j==0)
	 cout<<"Cift sayi yok."<<endl;
}

