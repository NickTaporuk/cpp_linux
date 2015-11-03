#include <stdio.h>
#include <cuda.h>
#include <stdlib.h>
#include <math.h>
#include<stdlib.h>

#if defined(__CUDA_ARCH__) && (__CUDA_ARCH__ < 200)

#define printf(f, ...) ((void)(f, __VA_ARGS__),0)

#endif

__global__ void helloFromGPU (void)
{
    printf("Hello World from GPU!\n");
}

int main(void)
{
// hello from cpu
printf("Hello World from CPU!\n");
helloFromGPU <<<1, 10>>>();
cudaDeviceReset();
return 0;
}
