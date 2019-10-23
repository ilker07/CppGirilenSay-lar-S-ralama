#ifndef PROGRAM_H
#define PROGRAM_H


#include <iostream> 
using namespace std;



class program
{
	public:
		int sayiDizisi[10];
	    string deger;
	    int i=0;
	    int j;
	    int str_to_int(const string &);
	    bool sayiMi(string);
		bool kontrol(int  dizi[],string ,int *) ;
		void sirala(int *ptr) ;
	
};

#endif

