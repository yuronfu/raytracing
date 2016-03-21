#include <stdio.h>
#include <stdlib.h>

#define STATIS "statistic.txt"
int main()
{
    FILE *input;
    FILE *stat;
    int i;
    char text[32];

    stat = fopen(STATIS,"a");

    input = fopen("output_orig.txt","r");
    double sum_raytracing = 0.0,raytracing = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&raytracing);
        sum_raytracing += raytracing;
    }
    fclose(input);
    fprintf(stat,"original %lf\n",sum_raytracing/100.0);

    input = fopen("output_inline.txt","r");
    double sum_inline = 0.0,rayinline = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&rayinline);
        sum_inline += rayinline;
    }
    fclose(input);
    fprintf(stat,"inline %lf\n", sum_inline/100.0);

    input = fopen("output_loop_unrolling.txt","r");
    double sum_loop = 0.0,loop = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&loop);
        sum_loop += loop;
    }
    fclose(input);
    fprintf(stat,"loop-unrolling %lf\n",sum_loop/100.0);

    input = fopen("output_avx.txt","r");
    double sum_avx = 0.0,avx = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&avx);
        sum_avx += avx;
    }
    fclose(input);
    fprintf(stat,"SIMD %lf\n",sum_avx/100.0);

    input = fopen("output_pthrd.txt","r");
    double sum_thrd = 0.0,thrd = 0.0;
    for (i = 0; i < 100; i++) {
        fscanf(input,"%s %lf\n",text,&thrd);
        sum_thrd += thrd;
    }
    fclose(input);
    fprintf(stat,"pthread %lf\n",sum_thrd/100.0);

    fclose(stat);

    return 0;
}
