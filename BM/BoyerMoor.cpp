#include <iostream>
#include <string.h>
class BoyerMoorMatcher{
	char* needle;
	char* hayStack;
	int hash [128];

	void calculateLast(){
			for(int i=0;i<128;i++){
				hash[i]=-1;
			}
			for (int i = 0;i<strlen(needle);i++ ){
				hash[int(needle[i])]=i;		
			}
		}

	public:
		void setNeedle(char * n){
			needle=n;
			calculateLast();			
		}
		
		void setHayStack(char * h){
			hayStack=h;			
		}

		int last(char a){
			return hash[int(a)];
		}


		int match (){
			int n = strlen(needle);
			int h = strlen(hayStack);
			int j=n-1;
			int k=n-1;
			int l;
			std::cout<<h<<"the size of hayStack\n";
			while(j<h){
				std::cout<<"hayStack: "<<j<<" "<<hayStack[j]<<" needle: "<<k<<" "<<needle[k]<<"\n";

				while (hayStack[j]==needle[k]){
					std::cout<<"matching hayStack: "<<hayStack[j]<<" needle: "<<needle[k]<<"\n";
					k-=1;
					if (k<0){
						return j;
					}
					j-=1;
				}
				l=last(hayStack[j]);
				if (l<k){
					std::cout<<"j:"<<j<<"	k:"<<k<<"	l:"<<l<<"	before \n ";
					j=j+n-l-1;
					k=n-1;
					std::cout<<"j:"<<j<<"	k:"<<k<<"	l:"<<l<<"	after\n";
				}
				else{
					j=j+n-k+1;
					k=n-1;
				}


			}
			return -15001504;

		}

};



int main(){
	BoyerMoorMatcher bm;
	bm.setNeedle("abacab");
	bm.setHayStack("abacaabadcabacab");
	std::cout<<bm.match()<<"\n";


}









