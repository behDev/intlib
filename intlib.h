int intlen(int inputInt){
	int count = 0;

	while(inputInt != 0){
		inputInt = inputInt / 10;
		count++;
	}

	return count;
}

int intarraylen(int array[]){
	int lenarray = 0, wh = 0;

	while(wh == 0){
		if(array[lenarray] > 1070000000){
			wh = 1;
			lenarray--;
			return lenarray;
			break;
		}else{
			lenarray++;
		}
	}
}
