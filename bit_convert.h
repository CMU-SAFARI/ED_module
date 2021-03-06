/*
 * bit_convert.h
 *
 *  Created on: Nov 7, 2013
 *      Author: hxin
 */

#ifndef BIT_CONVERT_H_
#define BIT_CONVERT_H_

#include <stdint.h>

#ifndef __aligned__
	#define __aligned__ __attribute__((aligned(32)))
#endif

void c_convert2bit(char *str, int length, uint8_t *bits);

void sse_convert2bit(char *str, uint8_t *bits0, uint8_t *bits1);

void avx_convert2bit(char *str, uint8_t *bits0, uint8_t *bits1);

#endif /* BIT_CONVERT_H_ */
