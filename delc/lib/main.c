//==================================================//
//
// * Copyright (c) 2022, Wan Buwen
// * All rights reserved.
//
//--------------------------------------------------//
//
// * Filename: main.c
// * Author: Wan Buwen
// * Version: 1.0
// * Date: 14/05/2022
//
//--------------------------------------------------//
//
// * the main function
//
//==================================================//

#include "../include/precompiler.h"
#include "../include/error.h"

int main(const int argc, const char *argv[]){
	FILE *fin=fopen(argv[1], "r");
	if(!fin){
		put_error(2, argv[1]);
		return 1;
	}
	FILE *fout=fopen(argv[2], "w");
	precompile(fin, fout);
	return 0;
}

