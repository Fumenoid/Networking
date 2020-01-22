#include<stdio.h>
#include<string.h>
const int MAX = 1500;

void stuffing(){
    char arr[MAX];
    char farr[MAX];
    int count=0, y=0;
    printf("Enter the data packet for stuffing\n");
    scanf("%s", arr);
    int n=strlen(arr);
    for(int x=0;x<n;x++){
        if(arr[x]=='1'){
            farr[y]=arr[x];
            y++;
            count++;
            if(count==5){
                farr[y]='0';
                y++;
                count=0;
            }
        }
        else {
            farr[y]=arr[x];
            y++;
            count=0;
        }
    }
    printf("Data After bit stuffing:\n");
    printf("\n");
    for(int x=0;x<strlen(farr);x++){
        printf("%c", farr[x]);
    }
    printf("\n");
}

void destuffing() {
    char arr[MAX];
    char farr[MAX];
    int count=0, y=0;
    printf("Enter the data packet for Destuffing\n");
    scanf("%s", arr);
    int n=strlen(arr);
    for(int x=0;x<n;x++){
        if(count==5){
            count=0;
            continue;
        }
        else if(arr[x]=='1'){
            farr[y]=arr[x];
            y++;
            count++;
        }
        else
        {
            farr[y]=arr[x];
            y++;
            count=0;
        }   
    }
    printf("Data After bit Destuffing:\n");
    printf("\n");
    for(int x=0;x<strlen(farr);x++){
        printf("%c", farr[x]);
    }
    printf("\n");   
}

int main(){
    while (1==1)
    {
        int c;
        printf("\nEnter 1 to BitStuff\nEnter 2 to BitDeStuff\nEnter 0 to quit\n");
        scanf("%d", &c);
        if(c==1){
            stuffing();
        }
        else if(c==2){
            destuffing();
        }
        else if(c==0){
            break;
        }
        else {
            printf("Invalid Input\n");
        }
    }
}