#ifndef __RAY_PARRLLEL_COMPUTE_h
#define __RAY_PARALLEL_COMPUTE_h

#include "primitives.h"

typedef struct {
        uint8_t *pixels;
        color background_color;
        rectangular_node rectangulars;
        sphere_node spheres;
        light_node lights;
        const viewpoint *view;
        int width;
        int height;
}fixed_arg;

typedef struct {
        fixed_arg *fixed;
        int start_width;
        int start_height;
        int end_width;
        int end_height;
}thrd_arg;

#endif
