#include<math.h>

double pi = 3.141592653589793;
void dft(double *x, double **X, const int N){
	double p;
	for (int k=0; k<N; k++){
		p = 2 * pi * k / N;
		X[k][0] = 0;
		X[k][1] = 0;
		for (int n=0; n<N; n++){
			X[k][0] += x[n] * cos(p*n);
			X[k][1] -= x[n] * sin(p*n);
		}
	}
}