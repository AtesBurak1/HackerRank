
int  sum (int count,...) {
    int sum=0;
      va_list       intArgumentPointer;
    va_start( intArgumentPointer, count );
    for( int i = 0; i < count; i++ )
        sum += va_arg( intArgumentPointer, int );
    va_end( intArgumentPointer );
    return sum;
}

int min(int count,...) {
     int sum=20000000;
     va_list       intArgumentPointer;
    va_start( intArgumentPointer, count );
    for( int i = 0; i < count; i++ ){
        int n=va_arg( intArgumentPointer, int );
        if(sum > n)
         sum=n;
    }
        
    va_end( intArgumentPointer );
    return sum;
}

int max(int count,...) {
     int sum=0;
     va_list       intArgumentPointer;
    va_start( intArgumentPointer, count );
    for( int i = 0; i < count; i++ ){
        int n=va_arg( intArgumentPointer, int );
        if(sum < n)
         sum=n;
    }
        
    va_end( intArgumentPointer );
    return sum;
}

