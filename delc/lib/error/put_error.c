//==================================================//
//
// * Copyright (c) 2022, Wan Buwen
// * All rights reserved.
//
//--------------------------------------------------//
//
// * Filename: put_error.c
// * Author: Wan Buwen
// * Version: 1.0
// * Date: 14/05/2022
//
//--------------------------------------------------//
//
// * to handle the errors during the compilation
// * delc/include/error.h
//
//==================================================//

#include <stdio.h>
#include <stdarg.h>

int put_error(int errnum, ...){
	switch(errnum){
		case 1:{
			fprintf(stderr, "[ERROR] Unterminated comment.\n");
			break;
		} case 2:{
			
			break;
		}
	}
	return 0;
}
