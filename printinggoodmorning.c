#include<stdio.h>
void printgoodmorning(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printgoodmorning(n);
    return ;

}
void printgoodmorning(int n){
    for(int i;i<=n;i++){
    printf("good morning\n");
}
return 0;
}
    
