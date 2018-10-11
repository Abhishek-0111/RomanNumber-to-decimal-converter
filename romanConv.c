#include <stdio.h>
#include<string.h>
int main(){
char s1[4000];
long int res=0, n;
int i;
scanf("%s",s1);
n=strlen(s1);
for(i=0;i<n;i++){
    if(s1[i]=='I'){
        res+=1;
    }
    else if(s1[i]=='V'){
        res+=5;
        if(s1[i-1]=='I')
            res-=2;
    }
    else if(s1[i]=='X'){
        res+=10;
        if(s1[i-1]=='I')
            res-=2;
        else if(s1[i-1]=='V')
            res-=10;
    }
    else if(s1[i]=='L'){
        res+=50;
        if(s1[i-1]=='I')
            res-=2;
        else if(s1[i-1]=='V')
            res-=10;
        else if(s1[i-1]=='X')
            res-=20;
    }
    else if(s1[i]=='C'){
        res+=100;
        if(s1[i-1]=='I')
            res-=2;
        else if(s1[i-1]=='V')
            res-=10;
        else if(s1[i-1]=='X')
            res-=20;
        else if(s1[i-1]=='L')
            res-=100;
    }
    else if(s1[i]=='D'){
        res+=500;
        if(s1[i-1]=='I')
            res-=2;
        else if(s1[i-1]=='V')
            res-=10;
        else if(s1[i-1]=='X')
            res-=20;
        else if(s1[i-1]=='L')
            res-=100;
        else if(s1[i-1]=='C')
            res-=200;

    }
    else if(s1[i]=='M'){
        res+=1000;
        if(s1[i-1]=='I')
            res-=2;
        else if(s1[i-1]=='V')
            res-=10;
        else if(s1[i-1]=='X')
            res-=20;
        else if(s1[i-1]=='L')
            res-=100;
        else if(s1[i-1]=='C')
            res-=200;
        else if(s1[i-1]=='D')
            res-=1000;
    }
}
printf("%ld",res);
}
