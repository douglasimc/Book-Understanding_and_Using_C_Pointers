/** Code only for low-level OS Kernels **/
#include <string.h>
#define VIDEO_BASE 0xB8000

int main() {

    int *video = (int *) VIDEO_BASE;
    *video = 'A';

    memset((void*)&video, 0, sizeof(video));

    return 0;
}
