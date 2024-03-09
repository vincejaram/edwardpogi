#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
	
main(){
	int i, j, primesum, count;
	
	for(i=1;i<2000000;i++){
		for(j=1;j<i/2,j++){
			if(i%j==0)
			count++;
		}
	}
	for(i=2 ; i<100 ; i++){
    count = 0;
    for (i = 2; i <= num/2; i++)
    {
	if(num%i == 0)
  	  count++;
    }
    if(count == 0)
    {
	printf(" %d ", num);
	prime_counter++;
    }

  }
  
  //EDIT EDIT
  for(i=0;i<10;i++){
  }
  //EDIT
  
	
	getch();
}
