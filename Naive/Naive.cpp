#include <iostream>
#include <string.h>

class NaiveStringMatcher{
	char* needle;
	char* hayStack;
	
	public:

		int match(){
			int n=strlen(needle);
			int h=strlen(hayStack);
			bool cond=true;
			int i=0;
			for (i;i<h;i++){
				cond=true;
				for (int j=0;j<n;j++){
					std::cout<<hayStack[i+j]<<" and "<<needle[j]<<"\n";
					if (hayStack[i+j]!=needle[j]){
						cond=false;
						break;					
					}
							
				}
				if (cond){
						return i;
				}
			}
			
			return -1;
		}


		void setNeedle(char* n){
			needle=n; 
		}

		void setHayStack(char* h){
			hayStack=h;
		}

		void print(){
		std::cout<<"needle: "<<needle<<"\nheyastack: "<<hayStack<<"\n";
		}
};

int main(){
	NaiveStringMatcher nsm;
	nsm.setNeedle("bm");
	nsm.setHayStack("abcd");
	nsm.print();
	std::cout<<nsm.match();

}
