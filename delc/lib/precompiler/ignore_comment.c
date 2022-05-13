//==================================================//
//
// * Copyright (c) 2022, Wan Buwen
// * All rights reserved.
//
//--------------------------------------------------//
//
// * Filename: ignore_comment.c
// * Author: Wan Buwen
// * Version: 1.0
// * Date: 14/05/2022
//
//--------------------------------------------------//
//
// * to ignore the comments in the source file
// * delc/include/preprocess.h
//
//==================================================//

#include <stdio.h>

#include "../../include/error.h"

int ignore_comment(FILE *fin, FILE *fout){
	int ch;
	while(ch=fgetc(fin)){
		switch(ch){
			case EOF: return 0;
			case '/':{
				ch=fgetc(fin);
				switch(ch){
					case EOF:{
						fputc('/', fout);
						return 0;
					} case '/':{ // single line comment
						ch=fgetc(fin);
						while(ch!='\n' || ch!=EOF) ch=fgetc(fin);
						fputc('\n', fout);
						if(ch==EOF) return 0;
						break;
					} case '*':{
						int status=0;
						ch=fgetc(fin);
						while(ch!=EOF){
							if(ch=='*') status=1;
							else if(status && ch=='/') break;
							else status=0;
						}
						if(ch==EOF){
							put_error(1);
							return 1;
						}
						break;
					}
				}
				break;
			} default:{
				fputc(ch, fout);
				break;
			}
		}
	}
	return 0;
}

