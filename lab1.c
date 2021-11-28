#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int i,j,N,M;
printf ("edit strings - ");//введення строки
scanf ("%d",&N);
printf ("edit columns - ");//введення стовбця
scanf ("%d",&M);
N-1;//так як в матриці враховуеться 0 то віднімаемо 1 від заданого числа 
M-1;//так як в матриці враховуеться 0 то віднімаемо 1 від заданого числа
int a[N][M];
for (i=0;i<N;i++){//перебираємо строки
    for(j=0;j<M;j++){//перебираємо стовбці
        printf("edit elements of a matrix [%d][%d] - ",i,j);//вводим елементи матриці
        scanf("%d",&a[i][j]);
    }
}
printf ("\nmasive\n\n");//виводим матрицю
for(i=0;i<N;i++){
    for(j=0;j<M;j++){
        printf ("[%d]",a[i][j]);
    }
    printf ("\n");
}

float answer;
int b;
b=a[0][0]*a[0][1]*a[1][0]*a[1][1]*a[2][0]*a[2][1];
answer=pow(b,1.00/6);//середнє геометричне
printf ("middle geometric=%lf",answer);
getch();
}