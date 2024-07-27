#include<stdio.h>

int main()
{
    int day; //1-monday; 2-Tuesday; 3-wednesday; 4-thursday; 5-friday; 6-saturday; 7-sunday;
    printf("enter day (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
    case 1 : printf("monday");
             break;
    case 2 : printf("tuesday");
             break;
    case 3 : printf("Wednesday");   
             break;
    case 4 : printf("Thursday");  
             break;
    case 5 : printf("friday");   
             break;
    case 6 : printf("Saturday");    
             break;
    case 7 : printf("sunday ");
             break;
   }          
    return 0;
}