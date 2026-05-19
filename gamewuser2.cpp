# include <stdio.h>

int main() {
int low = 0 ,high = 100 ,guess;
char response;	
int count;

printf("think of a number between 0 and 100.\n");

do {
guess = (low + high)/2;
count ++;
printf("is it %d? (h)igher, (l)ower ,or (e)qual: " ,guess);
scanf("%c" ,&response);

if(response == 'h'){
	low = guess + 1;
}	
	
else if(response == 'l'){
	high = guess -1;

}	

}

while (response != 'e');
printf("i found it! it took %d guesses.\n" ,count);
return 0;	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
