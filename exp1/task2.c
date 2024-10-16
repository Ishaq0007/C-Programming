#include <stdio.h>

int main(){
    int maths,chem,phy,avg;
    
    printf("Enter Maths Marks : ");
    scanf("%d", &maths);

    printf("Enter Chemistry Marks : ");
    scanf("%d", &chem);
    
    printf("Enter Physics Marks : ");
    scanf("%d", &phy);

    
    avg = (maths + chem + phy)/3 ;
    printf("The average is %d\n", avg);

    avg>=50?printf("Student is Eligible!"):printf("Student is not Eligbile for admission");
    return 0;
}
