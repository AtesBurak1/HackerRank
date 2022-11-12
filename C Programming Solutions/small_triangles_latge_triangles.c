
int p(triangle t){
     int a = t.a, b = t.b, c = t.c;
    return (a + b + c)*(a + b - c)*(a - b + c)*(-a + b + c);
}
void sort_by_area(triangle* tr, int n) {
    int temp=0;
    int min=0;
	for(int i=0; i < n ; i++){
        int max = 0;
        for(int j =0; j < n - i -1; j++){
            if(p(tr[j+1])< p(tr[j])){
               triangle t=tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = t;
            }
        }
        
    }
}

