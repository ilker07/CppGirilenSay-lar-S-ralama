#include "program.h"



int main(int argc, char** argv) {
	
	
	program prog;
	

	
	
	
	while(prog.i<10)
	
	{
			 		
 	cout << "Sayi  giriniz:";  
 	cin>>prog.deger;
 
 	
 	if(prog.sayiMi(prog.deger))
	 
	 {
 	  
 	  
 	  	if(prog.kontrol(prog.sayiDizisi,prog.deger,&prog.i))
 	  	{
 	  		 
				
 	  	 		prog.sayiDizisi[prog.i]=prog.str_to_int(prog.deger);
 	  	        prog.i++;
 	  	        
		}
 	 
	 }
	 else
	 cout<<"Lutfen sadece 0 harici pozitif tam sayi giriniz..." <<endl;
 	
    
    }
    
    
    prog.sirala(prog.sayiDizisi);
   
	return 0;
}



