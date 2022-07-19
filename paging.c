#include <stdio.h>
int main(){
    int las,ps,nop,np,rempages,i,j,x,y,pa,offset;
    int s[0],fno[10][20];
    printf("\n Enter the logical memory size: ");
    scanf("%d",&las);
    printf("\n Enter the page size: ");
    scanf("%d",&ps);
    nop = las/ps;
    printf("\nThe no. of pages available in memory are: %d",nop);
    printf("\n Enter number of process: ");
    scanf("%d",&np);
    rempages = nop;
    for(i=1;i<np;i++){
        printf("\n Enter no. of pages required for p[%d]: ",i);
        scanf("%d",&s[i]);
        if(s[i] > rempages){
            printf("\n memory is full.");
            break;
        }
        rempages = rempages - s[i];
        printf("\n Enter page table for p[%d]: ",i);
        for(j=1;j<=s[i];j++){
            scanf("%d",&fno[i][j]);
        }
    }
    printf("\n Enter logical address to find physical address");
    printf("\n Enter process number and page number and offset: ");
    scanf("%d %d %d",&x,&y,&offset);
    if(x>np || y>=s[i] || offset >= ps)
        printf("\n Invalid process or page number and offset");
    else{
        pa = fno[x][y]*ps + offset;
        printf("\n the physical address is: %d",pa);
    }
}

INPUT:

Enter the memory size – 1000
Enter the page size -- 100
The no. of pages available in memory are -- 10
Enter number of processes -- 3
Enter no. of pages required for p[1] -- 4
Enter pagetable for p[1] --- 8 6 9 5
Enter no. of pages required for p[2] -- 5
Enter pagetable for p[2] --- 1 4 5 7 3
Enter no. of pages required for p[3] -- 5
    
OUTPUT:

Memory is Full
Enter Logical Address to find Physical Address
Enter process no. and pagenumber and offset -- 2 3 60
The Physical Address is -- 760
