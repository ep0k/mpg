#ifndef _BITFIELD_H_
#define _BITFIELD_H_

#include "WProgram.h"

/* Public: Reads a subset of bits from a byte array.
 *
 * data - the bytes in question.
 * startPos - the starting index of the bit field (beginning from 0).
 * numBits - the width of the bit field to extract.
 *
 * Examples
 *
 *  unsigned long value = getBitField(data, 2, 4);
 *
 * Returns the value of the requested bit field.
 */
unsigned long getBitField(uint8_t* data, int startPos, int numBits);

#endif // _BITFIELD_H_
