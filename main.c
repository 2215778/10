#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    FILE* fp = NULL;
    char c;
    char str[30];
    
    fp=fopen("sample.txt","r"); //fopen
    
    if(fp==NULL)
        printf("파일을 못 열음\n");
        
    
    while((c=fgetc(fp))!= EOF) //문자변수= fgetc(파일포인터) 
            putchar(c); 
            
    //while(fgets(str,30,fp) != NULL)
            //printf("%s",str);
    
    fclose(fp); //fclose
    
	return 0;
}

