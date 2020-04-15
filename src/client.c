#include "cchat.h"

int main(const int argc, const char ** argv)
{
    ioc_font_t font;
    (void) ioc_encode_font(&font,NONE,GREEN,DEFAULT);
    (void) ioc_set_stdout_font(&font);
    (void) puts("This is not a problem!");
    (void) ioc_reset_stdout_font();
    (void) ioc_encode_font(&font,NONE,RED,DEFAULT);
    (void) ioc_set_stderr_font(&font);
    (void) eputs("This is a problem!");
    (void) ioc_reset_stderr_font();
    return 0;
}