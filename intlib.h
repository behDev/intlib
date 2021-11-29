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
		if(array[lenarray] > 1070000000 && array[lenarray] < 1080000000){
			lenarray--; return lenarray; wh = 1; break;
		}else{
			lenarray++;
		}
	}
}

int intrandom(int min, int max){
	srand(time(0));
	int random = (rand() % (max - min + 1)) + min;
	return random;
}
