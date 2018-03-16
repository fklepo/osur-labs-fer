/*! Hello world program */

#include <stdio321.h>
#include <api/prog_info123.h>

int hello_world ()
{
        printf ( "Example program: [%s:%s]\n%s\n\n", __FILE__, __FUNCTION__,
                 hello_world_PROG_HELP );

        printf ( "Hello World!\n" );

#if 0        /* test escape sequence */
        printf ( "\x1b[20;40H" "Hello World at 40, 20!\n" );
#endif

        return 0;
}
