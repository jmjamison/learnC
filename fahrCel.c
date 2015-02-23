/*
 * fahrCel.c
 * 
 * Copyright 2015 jamison <jamison@SSGS02-PC>
 * 
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
 * K&R 1.2: p.8 exercise
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int lower, upper, step;
	float fahr, celsius;
	
	lower = 0;  	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius  = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
		
	return 0;
}

