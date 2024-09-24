#include<stdio.h>

int main(int argc, char *argv[]){

	FILE *in=fopen(*++argv, "r");
	char pal1[80], pal2[80], pal3[80], pal4[80], pal5[80], pal6[80];
	int i=0;

	while(fscanf(in, "%s%s%s%s%s%s\n", pal1, pal2, pal3, pal4, pal5, pal6)!=EOF){
		printf("%s%s%s%s%s%s\n", pal1, pal2, pal3, pal4, pal5, pal6);
	
	if(i++>23){
		getchar();
		i=0;
		}
	}
	return 0;
}