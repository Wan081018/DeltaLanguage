//==================================================//
//
// * Copyright (c) 2022, Wan Buwen
// * All rights reserved.
//
//--------------------------------------------------//
//
// * Filename: precompile.c
// * Author: Wan Buwen
// * Version: 1.0
// * Date: 14/05/2022
//
//--------------------------------------------------//
//
// * to precompile the source file
// * delc/include/preprocess.h
//
//==================================================//

#include "../../include/precompile.h"

int precompile(FILE *fin, FILE *fout){
	if(ignore_comment(fin, fopen("__TMP_ic.delt", "w"))) return 1;
	if(include_file(fopen("__TMP_ic.delt", "r"), fopen("__TMP_if.delt", "w"))) return 1;
	if(change_data(fopen("__TMP_if.delt", "r"), fout)) return 1;
	return 0;
}
