/* utils.h: miscellaneous helpers
 *
 *  Copyright (c) 2017, Joerg Hoppe
 *  j_hoppe@t-online.de, www.retrocmp.com
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 *  - Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 *  20-Jan-2017  JH  created
 */

#ifndef _UTILS_H_
#define _UTILS_H_

#include <stdio.h>
#include <stdint.h>
#include <time.h>


// how many blocks are needed to hold "data_size" bytes?
#define NEEDED_BLOCKS(blocksize,data_size) ( ((data_size)+(blocksize)-1) / (blocksize) )


void delay_ms(int32_t ms);
uint64_t now_ms(); // current timestamp in milli seconds

int is_memset(void *ptr, uint8_t val, uint32_t size);
char *strtrim(char *txt);
char *strrpad(char *txt, int len, char c);
int inputline(char **tokenlist, int tokenlist_size);

char *rad50_decode(uint16_t w);
uint16_t rad50_encode(char *s);
struct tm dos11date_decode(uint16_t w);
uint16_t dos11date_encode(struct tm t);

char *extract_extension(char *filename, int truncate) ;


void hexdump(FILE *stream, uint8_t *data, int size, char *fmt, ...);

void *search_tagged_array(void *base, int element_size, int search_val) ;


#endif /* UTILS_H_ */
