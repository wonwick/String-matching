#include <iostream>
#include <string.h>
class Needle{
	public:
		char* needle;
		int hash [128];
		Needle(char[]);
		void calculateLast();
		int last(char);
};

Needle::Needle(char str[]){
	needle=str;
}

void Needle::calculateLast(){
	for(int i=0;i<128;i++){
		hash[i]=-1;
	}
	for (int i = 0;i<strlen(needle);i++ ){
			hash[int(needle[i])]=i;		
	}
}

int Needle::last(char a){
	return hash[int(a)];
}

void test(Needle N,char c){

	std::cout<<"\nneedle : \'"<<(N.needle)<<"\'";
	std::cout<<"\nchar : "<<c;
	std::cout<<"\nthe last index of \'"<< c << "\' :"<<N.last(c)<<"\n";

}

int main(){
	
	
	char str[]="abcabciAbabci_123%^$@*!(*@()# aaaaa    a we: wer weArvfce 55===-09? &a ";
	Needle n(str);
	n.calculateLast();

	test(n,'a');
	test(n,'1');
	test(n,':');
	test(n,'*');
	test(n,'@');
	test(n,'A');
	test(n,' ');
	test(n,'Z');

        char str1[]="              11213123         231 23 123 1``` `121 1 21` `1";
	Needle n1(str1);
	n1.calculateLast();
	test(n1,'1');
	test(n1,'2');
	test(n1,' ');
	test(n1,'`');
	test(n1,'a');
}









