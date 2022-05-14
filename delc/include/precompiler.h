//==================================================//
//
// * Copyright (c) 2022, Wan Buwen
// * All rights reserved.
//
//--------------------------------------------------//
//
// * Filename: precompiler.h
// * Author: Wan Buwen
// * Version: 1.0
// * Date: 14/05/2022
//
//--------------------------------------------------//
//
// * declaration of functions that precompile the 
//   source file 
//
//==================================================//

#ifndef PRECOMPILE_H
#define PRECOMPILE_H

#include <stdio.h>

// 'fin' under means the source file stream
// 'fout' under means the target file stream

// the main function
extern int precompile(FILE *fin, FILE *fout);

// to ignore comments in the source file
extern int ignore_comment(FILE *fin, FILE *fout);

// to include the files into the souce file and do some other directions
extern int include_file(FILE *fin, FILE *fout);

// to change the specified text in the souce file into specified form
extern int change_text(FILE *fin, FILE *fout);

#endif
