double addition(double array[], int x) {

	int i = 0;
	double answer = 0;

	for (i = 0; i < x; i++) {

		sum += array[i];

	}

	return sum;
}



double subtraction(double array[], int x) {
	double answer = 0.00;
	int y = 0;
	
	for (int i = 0; i < x; i++) {

		if (i == 0) {

			answer = array[i];

		}
		else {

			answer -= array[i];

		}
		
	}

	return answer;

}