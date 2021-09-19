/*
 * coded by behDev
 * https://github.com/behDev/intlib
 *
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

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
			wh = 1;
			lenarray--;
			return lenarray;
			break;
		}else{
			lenarray++;
		}
	}
}
