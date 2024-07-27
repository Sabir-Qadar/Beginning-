#include<stdio.h>

int main()
{
    char day; //m-monday; t-Tuesday; w-wednesday; T-thursday; f-friday; s-saturday; S-sunday;
    printf("enter day (1-7): ");
    scanf("%s", &day);
    
    switch (day) {
    case 'm' : printf("monday");
             break;
    case 't' : printf("tuesday");
             break;
    case 'w' : printf("Wednesday");   
             break;
    case 'T' : printf("Thursday");  
             break;
    case 'f' : printf("friday");   
             break;
    case 's' : printf("Saturday");    
             break;
    case 'S': printf("sunday ");
             break;
    default : printf("not a valid day  \n");       
    }  
    return 0;
}