//
//  main.c
//  volume of cylinder
//
//  Created by Anurag Malik on 26/08/25.
//

#include <stdio.h>

int main(void){
    float pi=3.14;
    int r,h,v;
    printf("enter radius and height");
    scanf("%d,%d",&r,&h);
    
    printf("volume of cylinder is %d",v=pi*r*r*h);
    return 0;
    
}
