#include <iostream>
#include <string.h>
class Needle{

	char* needle;
	int hash [128];
	public:
		Needle(char str[]){
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

		int last(char a){
			return hash[int(a)];
		}

		void test(Needle N,char c){

			std::cout<<"\nneedle : \'"<<(N.needle)<<"\'";
			std::cout<<"\nchar : "<<c;
			std::cout<<"\nthe last index of \'"<< c << "\' :"<<N.last(c)<<"\n";
		}

}



int main(){

}









