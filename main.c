#include <stdio.h>
int conghaiso(int a, int b){
    return a + b;
}

int main(){
    int a;
    int b;
    printf("vui long nhap so thu nhat :\n");
    scanf("%d",&a);
    printf("vui long nhap so thu hai:\n");
    scanf("%d",&b);
    int result =conghaiso(a, b);
    printf("cong hai so la: %d\n",conghaiso(a, b));
    return 0;

}
