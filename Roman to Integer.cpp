#include<stdio.h>

char findLen(char roman[]);
int convertNumeral(char roman[],int lim);

int main() {
	
	char roman[9];
	int len;
	printf("Enter a roman integer to convert\nit  into  numeral  integer: ");
	fgets(roman,sizeof(roman),stdin);
	
	len = findLen(roman);
	printf("%d",convertNumeral(roman,len));
    	//vii
}

char findLen(char roman[]) {
	
	int i = 0;
	while(roman[i] != '\0') {
		i++;
	}
	return i;
}

int convertNumeral(char roman[],int lim) {
	
    int sum = 0;
	
	while(lim >= 0) {
	
	if(roman[lim] == 'v' && roman[lim - 1] == 'i') 
	  {
		sum += 5 - 1;
        
        if(lim == 1) {
        	return sum;
		}
	}
	else if(roman[lim] == 'x' && roman[lim - 1] == 'i') 
	  {
		sum += 10 - 1;
		
		  if(lim == 1) {
        	return sum;
		}
	}
	else if(roman[lim] == 'l' && roman[lim - 1] == 'i') 
	  {
		sum += 50 - 1;
		  if(lim == 1) {
        	return sum;
		}
	}
	else if(roman[lim] == 'c' && roman[lim - 1] == 'i') 
	  {
		sum += 100 - 1;
		  if(lim == 1) {
        	return sum;
		}
	}
	else if(roman[lim] == 'd' && roman[lim - 1] == 'i') 
	  {
		sum += 500 - 1;
		  if(lim == 1) {
        	return sum;
		}
	}
	else if(roman[lim] == 'm' && roman[lim - 1] == 'i') 
	  {
		sum += 1000 - 1;
		  if(lim == 1) {
        	return sum;
		}
	}
	
	else {
		if(roman[lim] == 'i') {
			sum += 1;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'v') {
			sum += 5;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'x') {
			sum += 10;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'l') {
			sum += 50;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'c') {
			sum += 100;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'd') {
			sum += 500;
			  if(lim == 1) {
        	return sum;
		}
		}
		else 	if(roman[lim] == 'm') {
			sum += 1000;
			  if(lim == 1) {
        	return sum;
		}
		}
	}
    lim--;
	}
	return sum;
}
