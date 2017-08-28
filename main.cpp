#include <QCoreApplication>
#include <iostream>

int QDel(int a){
    int b=0;
    for (int i=0; i<=a; i++){
        if (a%i == 0 ){
         b++;
        }
    }
    return b;

}


int main(int argc, char *argv[])
{

    int m, n, k, j, max, min;
    std::cin >>n;
    std::cin >>m;
    std::cin >>k;
    if (n>m){
        max=n;
        min=m;
    }else{
        max=m;
        min=n;
    }
    j= QDel(n);
    std::cout <<QDel(n) << " " <<QDel(m) << " " << QDel(k);
    std::cin >>j;
    /*
    while (k>0){
        for (int i=1; i<max; i++){
            if (i==j){

            }
        }
    }
    */
    return 0;
}
