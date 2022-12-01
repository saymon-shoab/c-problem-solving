#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,em1=0,em2=0; 
    int om1=0,om2=0; 
    scanf("%d",&n); 
    int arr[n]; 
    for(int i=0; i<n; i++) 
    { 
        scanf("%d",&arr[i]); 
    } 
    for(int i=0; i<n; i++) 
    { 
        if(arr[i]%2==0) 
        { 
            if(arr[i]>em1) 
                em1=arr[i]; 
        } 
    } 
    for(int i=0; i<n; i++) 
    { 
        if(arr[i]%2==0) 
        { 
            if(arr[i]>em2 && arr[i]!=em1) 
            { 
                em2=arr[i]; 
            } 
        } 
    } 
 
    //odd 
    for(int i=0; i<n; i++) 
    { 
        if(arr[i]%2!=0) 
        { 
            if(arr[i]>om1) 
                om1=arr[i]; 
        } 
    } 
 
    for(int i=0; i<n; i++) 
    { 
        if(arr[i]%2!=0) 
        { 
            if(arr[i]>om2 && arr[i]!=om1) 
            { 
                om2=arr[i]; 
            } 
        } 
    } 
 
    int a=em1+em2; 
    int b=om1+om2; 
 
    if(b%2==0) 
    { 
        if(b>a){ 
            printf("%d",b); 
        } 
 
        else{ 
            printf("%d",a); 
        } 
 
    } 
    else 
    { 
        printf("%d",a); 
    } 
 

    return 0;
}
