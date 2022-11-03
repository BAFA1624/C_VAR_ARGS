#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int
sum( int n, ... ) {
    int result = 0;
    va_list va;

    va_start( va, n );

    for ( int i = 0; i < n; ++i ) { result += va_arg( va, int ); }

    va_end( va );

    return result;
}

int
main( int argc, char * argv[] ) {
    if ( argc != 4 ) {
        printf( "Usage: \"./main a, b, c\", where a, b, & c are integers." );
        return 0;
    }

    printf( "%d\n",
            sum( 3, atoi( argv[1] ), atoi( argv[2] ), atoi( argv[3] ) ) );
}
