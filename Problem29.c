/* Distinct powers */

#include<stdio.h>
#include<math.h>

struct par {
    int x,y;
};

struct par p[9801];

int compara(int i,int u) {
    if(p[i].x == p[u].x && p[i].y == p[u].y) {
        p[u].x = p[u].y = 0;
        return 1;
    }
    return 0;
}

void reduzir(int c) {
    for(int i = 2; i < p[c].x; i++) {
        for(int u = 2; pow(i,u) <= p[c].x; u++) {
            if(pow(i,u) == p[c].x) {
                p[c].x = i;
                p[c].y *= u;
            }
        }
    }
}

int main(void) {
	int c = 0;
	for(int i = 2; i <= 100; i++) {
	    for(int u = 2; u <= 100; u++) {
			p[c].x = i;
			p[c].y = u;
			c++;
	    }
	}
	for(int i = 0; i < 9801; i++) {
	    reduzir(i);
	}

	for(int i = c; i >= 0; i--) {
	    for(int u = i - 1; u >= 0; u--) {
	        if(p[i].x && p[i].y && compara(i,u) == 1) {
	        	c--;
	        }
	    }
	}
	printf("%d\n",c);
}

// Solução: 9183