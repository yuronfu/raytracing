#include <stdio.h>
#include <stdlib.h>

#define STATIS "cmp_thread.txt"
int main()
{
    FILE *input;
    FILE *stat;
    int i;
    char text[32];

    stat = fopen(STATIS,"a");

    input = fopen("output_pthrd.txt","r");
    double sum_p4 = 0.0,p4 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p4);
        sum_p4 += p4;
    }
    fclose(input);
    fprintf(stat,"4-pthread %lf\n",sum_p4/100.0);

    input = fopen("output_8.txt","r");
    double sum_p8 = 0.0,p8 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p8);
        sum_p8 += p8;
    }
    fclose(input);
    fprintf(stat,"8-thread %lf\n", sum_p8/100.0);

    input = fopen("output_16.txt","r");
    double sum_p16 = 0.0,p16 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p16);
        sum_p16 += p16;
    }
    fclose(input);
    fprintf(stat,"16-thread %lf\n",sum_p16/100.0);

    input = fopen("output_32.txt","r");
    double sum_p32 = 0.0,p32 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p32);
        sum_p32 += p32;
    }
    fclose(input);
    fprintf(stat,"32-thread %lf\n",sum_p32/100.0);

    input = fopen("output_64.txt","r");
    double sum_p64 = 0.0,p64 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p64);
        sum_p64 += p64;
    }
    fclose(input);
    fprintf(stat,"64-thread %lf\n",sum_p64/100.0);

    input = fopen("output_128.txt","r");
    double sum_p128 = 0.0,p128 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p128);
        sum_p128 += p128;
    }
    fclose(input);
    fprintf(stat,"128-thread %lf\n",sum_p128/100.0);

    input = fopen("output_256.txt","r");
    double sum_p256 = 0.0,p256 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p256);
        sum_p256 += p256;
    }
    fclose(input);
    fprintf(stat,"256-thread %lf\n",sum_p256/100.0);

    input = fopen("output_512.txt","r");
    double sum_p512 = 0.0,p512 = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&p512);
        sum_p512 += p512;
    }
    fclose(input);
    fprintf(stat,"512-thread %lf\n",sum_p512/100.0);

    fclose(stat);

    return 0;
}