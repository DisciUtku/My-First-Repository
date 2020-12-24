#include <stdio.h>
#include <stdlib.h>


/*Merhabalar hocam. �devimde k���k bir s�k�nt� var onu buraya not alay�m dedim.
Diziyi fonksiyona g�nderirken call by reference tekni�ini kullanmay� denedim ancak
bir t�rl� ba�aramad�m. San�r�m bu y�zden de en b�y�k eleman� istedi�imde bana rastgele bir adres veriyor.
Bunun d���nda kodda bir problem olmad���n� d���n�yorum. Te�ekk�rler.    */


double *maxAdr (double a[], int size);


int main(){
    int i;
    double array[6]={1.1,3.3,7.1,5.4,0.2,-1.5};

    printf("Value \t\t Adress\n");
    printf(" ****\t\t********\n");

    for(i=0; i<6; i++){
        printf("array[%d] %.1f    %u\n", i, array[i], &array[i]);
    }

    printf("\n\n\nThe address of the largest element: %u\n\n\n", maxAdr(array, 6));


    return 0;
}

double *maxAdr(double a[], int size){

    int temp, i, j;
    int *address;

    for(i=0; i<size; i++){

        for(j=0; j<size-i-1; j++){

        if(a[j]>a[j+1])
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }


 address = &a[6];


    return address;
}
