#include<stdio.h>
int main(){
    int num;
    char ones[10][10]={"","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char two_digits[10][10]={"Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen","Sixteen", "Seventeen","Eighteen","Ninteen"};
    char tens[11][10]={"","","Twenty", "Thirty", "Fourty","Fifty", "Sixty", "Seventy","Eighty", "Ninty","Hundred"};
    while(1){
        printf("Enter an integer: "); 
        scanf("%d",&num); 
        if(num == 0){ printf("Zero. \n\n"); 
        }
        else if(num> 0 && num < 10){
            printf("%s \n\n",ones[(num%10)]); 
        }
        else if(num > 9 && num < 20 ){
            printf("%s \n\n",two_digits[(num%10)]);
        }
        else if(num >=20 && num < 100){
            printf("%s %s \n\n",tens[(num/10)],ones[(num%10)]); 
        }  
        else if(num >= 100 && num <1000){
            if(num%100 == 0){ printf("%s %s \n\n",ones[(num/100)],tens[10]); 
            }
            else if(((num/10)%10) == 1){ printf("%s %s %s \n\n",ones[(num/100)],tens[10],two_digits[0]); 
            }
            else { printf("%s %s %s %s \n\n",ones[(num/100)],tens[10],tens[((num/10)%10)],ones[(num%10)]); 
            }   
        }
        else{ printf("Number is not in the range 0-999. \n\n"); 
        }
    }
return 0;
}