#include<stdio.h>
#include<stdlib.h> //for system("clear")
#include<time.h>


//text output color
void textcolor(int t) 
{
    printf("\33[;%dm", 30+t);
}


int main()
{
    struct tm* ctym;
    time_t sec;
    for(;;){
        time(&sec);
	char *ch = ctime(&sec);
	ctym = localtime(&sec);
	system("clear");
        textcolor(3);
	puts(ch);
        textcolor(2);
	printf("%02d:%02d:%02d\n",
		ctym->tm_hour,
		ctym->tm_min,
		ctym->tm_sec);
    }
}
