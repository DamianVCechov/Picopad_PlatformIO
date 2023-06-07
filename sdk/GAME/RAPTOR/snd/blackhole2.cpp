#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 Blackhole2Snd[5060] = {
	0x7F, 0x7E, 0x7F, 0x82, 0x7F, 0x81, 0x7F, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x7E, 0x81, 
	0x7E, 0x7E, 0x82, 0x82, 0x82, 0x7E, 0x7D, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x7E, 0x7E, 0x82, 0x82, 
	0x82, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7F, 0x81, 0x7F, 0x81, 0x7E, 
	0x81, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x80, 0x7B, 0x80, 
	0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7E, 0x82, 0x82, 0x7E, 
	0x7E, 0x81, 0x7F, 0x81, 0x7E, 0x7D, 0x7E, 0x81, 0x82, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x7D, 0x7D, 
	0x80, 0x7E, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 0x7E, 0x81, 0x7F, 
	0x82, 0x82, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x82, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x82, 0x82, 0x82, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x81, 0x80, 0x7D, 
	0x80, 0x81, 0x81, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x82, 0x7E, 0x7E, 0x7E, 0x7E, 0x81, 0x7F, 0x82, 
	0x82, 0x7F, 0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x7E, 0x81, 0x7F, 
	0x82, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 
	0x81, 0x81, 0x7E, 0x81, 0x81, 0x7E, 0x80, 0x7E, 0x80, 0x7E, 0x81, 0x7E, 0x81, 0x82, 0x7E, 0x81, 
	0x7E, 0x7E, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x82, 0x82, 0x82, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x82, 0x7F, 0x7F, 0x82, 0x7F, 
	0x7F, 0x81, 0x7C, 0x82, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 
	0x7E, 0x81, 0x81, 0x7E, 0x7E, 0x82, 0x82, 0x7F, 0x81, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x82, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x82, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x82, 0x80, 0x82, 0x7F, 0x81, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x83, 0x82, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x81, 0x82, 0x81, 0x81, 0x80, 0x7D, 
	0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 
	0x7F, 0x81, 0x7E, 0x7E, 0x7F, 0x81, 0x80, 0x82, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x82, 0x7F, 
	0x7E, 0x81, 0x7F, 0x81, 0x82, 0x81, 0x7E, 0x80, 0x7D, 0x7D, 0x81, 0x81, 0x7E, 0x81, 0x81, 0x7D, 
	0x80, 0x81, 0x81, 0x80, 0x7D, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x7D, 0x7D, 0x7D, 
	0x7E, 0x81, 0x7F, 0x82, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x82, 0x7F, 0x82, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x7F, 0x82, 0x82, 0x7E, 0x7D, 
	0x7E, 0x81, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x81, 0x80, 0x7D, 0x80, 0x81, 0x81, 0x82, 0x81, 0x7E, 
	0x7D, 0x7E, 0x7E, 0x7F, 0x82, 0x80, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x82, 0x81, 
	0x7E, 0x81, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x80, 0x82, 0x7F, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x7F, 0x7F, 0x82, 0x7F, 0x82, 0x7E, 0x7E, 0x7E, 0x7E, 0x81, 0x7F, 
	0x82, 0x83, 0x82, 0x7F, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x83, 0x80, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x83, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x83, 0x83, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7F, 0x82, 0x7F, 0x7E, 0x81, 0x7F, 0x82, 
	0x82, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x83, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x81, 0x7F, 
	0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7F, 
	0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x81, 0x7E, 0x81, 0x81, 0x7E, 0x7E, 
	0x81, 0x82, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 
	0x81, 0x7F, 0x81, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x82, 0x82, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x82, 0x81, 0x7E, 0x81, 0x80, 0x7D, 0x80, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x7D, 0x7E, 0x81, 0x7F, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x7E, 0x81, 
	0x81, 0x7E, 0x81, 0x7E, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 
	0x81, 0x7E, 0x7E, 0x82, 0x82, 0x7F, 0x81, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x81, 0x7F, 0x82, 0x82, 0x7E, 0x7E, 0x81, 0x7F, 0x7E, 
	0x7E, 0x7F, 0x82, 0x80, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7E, 0x7D, 0x7E, 
	0x82, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x7E, 0x81, 0x7F, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x7E, 0x81, 
	0x82, 0x82, 0x82, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x82, 0x7F, 0x7E, 0x7E, 
	0x7D, 0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x80, 0x7E, 0x7E, 0x81, 0x7F, 0x82, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7F, 0x81, 
	0x7E, 0x7E, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x81, 0x7E, 0x80, 0x81, 0x81, 0x81, 0x81, 0x7E, 
	0x7E, 0x81, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x82, 0x7F, 0x7E, 0x7F, 0x81, 0x7F, 
	0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x81, 0x7E, 
	0x7E, 0x82, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7C, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x82, 0x7F, 0x81, 0x7E, 0x81, 0x81, 0x7D, 0x80, 0x81, 0x81, 0x81, 0x81, 0x7D, 0x7D, 0x81, 
	0x7F, 0x82, 0x82, 0x7F, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x82, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x82, 0x82, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x81, 
	0x7E, 0x81, 0x81, 0x7E, 0x7E, 0x81, 0x7F, 0x7F, 0x82, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 
	0x81, 0x82, 0x82, 0x81, 0x7E, 0x81, 0x82, 0x81, 0x7E, 0x7D, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x83, 
	0x82, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x81, 0x7E, 0x7D, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7D, 0x7F, 0x7E, 0x81, 0x82, 
	0x81, 0x7F, 0x81, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x81, 0x7F, 0x81, 0x7E, 0x80, 0x7E, 0x81, 
	0x81, 0x81, 0x82, 0x81, 0x7E, 0x7D, 0x7D, 0x7E, 0x82, 0x82, 0x7F, 0x81, 0x7D, 0x7D, 0x81, 0x81, 
	0x81, 0x81, 0x80, 0x7D, 0x80, 0x80, 0x7D, 0x80, 0x80, 0x7D, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x80, 0x7E, 0x81, 0x82, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 
	0x7F, 0x82, 0x82, 0x7E, 0x7D, 0x7E, 0x81, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x81, 0x7E, 0x81, 0x81, 
	0x82, 0x81, 0x7D, 0x7D, 0x7D, 0x7E, 0x81, 0x82, 0x81, 0x81, 0x7E, 0x80, 0x7D, 0x7D, 0x84, 0x81, 
	0x81, 0x80, 0x80, 0x7D, 0x80, 0x7F, 0x7A, 0x83, 0x82, 0x81, 0x81, 0x7E, 0x81, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x81, 0x7E, 0x7E, 0x81, 0x7E, 0x81, 0x81, 0x7D, 0x80, 0x81, 0x81, 0x81, 0x80, 0x7D, 0x80, 
	0x81, 0x81, 0x81, 0x7D, 0x7D, 0x80, 0x7E, 0x81, 0x82, 0x82, 0x7F, 0x7E, 0x7D, 0x7B, 0x82, 0x83, 
	0x7F, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x7D, 0x7E, 0x82, 0x82, 0x81, 0x7E, 
	0x81, 0x7E, 0x7E, 0x80, 0x7E, 0x81, 0x81, 0x7E, 0x80, 0x7D, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x7E, 0x7E, 0x81, 0x7F, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7E, 0x7E, 0x7D, 0x7E, 0x81, 0x7E, 0x81, 
	0x81, 0x7E, 0x81, 0x81, 0x80, 0x80, 0x7E, 0x7A, 0x7A, 0x7D, 0x82, 0x88, 0x8F, 0x96, 0x7D, 0x79, 
	0x79, 0x74, 0x75, 0x7D, 0x7F, 0x82, 0x8B, 0x81, 0x7B, 0x7D, 0x7A, 0x7D, 0x7F, 0x7D, 0x82, 0x83, 
	0x83, 0x82, 0x81, 0x7F, 0x82, 0x82, 0x7E, 0x7A, 0x7D, 0x7E, 0x7E, 0x81, 0x82, 0x82, 0x85, 0x81, 
	0x7D, 0x7D, 0x80, 0x7B, 0x81, 0x82, 0x7F, 0x81, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x82, 0x82, 0x81, 
	0x7D, 0x80, 0x7D, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x7A, 0x7F, 0x7E, 0x81, 0x82, 0x82, 
	0x82, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x83, 0x82, 0x7F, 0x7F, 0x82, 0x7C, 0x7F, 0x7F, 
	0x7F, 0x80, 0x7F, 0x7F, 0x7E, 0x7B, 0x81, 0x7F, 0x82, 0x85, 0x7F, 0x81, 0x81, 0x7E, 0x80, 0x7A, 
	0x7D, 0x82, 0x83, 0x82, 0x7E, 0x7B, 0x81, 0x81, 0x7C, 0x84, 0x7E, 0x7E, 0x80, 0x7E, 0x81, 0x82, 
	0x82, 0x82, 0x7E, 0x7F, 0x81, 0x7C, 0x7F, 0x82, 0x7C, 0x7E, 0x7E, 0x7F, 0x83, 0x83, 0x82, 0x7C, 
	0x81, 0x7E, 0x7B, 0x81, 0x7F, 0x7F, 0x7F, 0x7F, 0x83, 0x83, 0x80, 0x7F, 0x7C, 0x80, 0x80, 0x7C, 
	0x7D, 0x83, 0x7D, 0x7F, 0x7F, 0x7D, 0x86, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 
	0x7C, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x81, 0x7B, 0x7E, 0x83, 0x7C, 0x84, 0x86, 0x82, 0x7D, 0x7D, 
	0x7D, 0x7E, 0x81, 0x7F, 0x82, 0x82, 0x7F, 0x82, 0x7E, 0x7C, 0x82, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7E, 0x7C, 0x82, 0x83, 0x80, 0x85, 0x7C, 0x81, 0x7E, 0x7C, 0x83, 0x7A, 0x88, 0x81, 0x7F, 0x81, 
	0x77, 0x7A, 0x82, 0x83, 0x83, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7B, 0x81, 0x83, 0x83, 0x85, 
	0x7A, 0x7A, 0x83, 0x7B, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x7E, 0x80, 0x7D, 0x7D, 0x81, 0x82, 
	0x83, 0x7B, 0x82, 0x7C, 0x7C, 0x81, 0x7F, 0x82, 0x83, 0x86, 0x80, 0x81, 0x84, 0x7F, 0x7E, 0x7B, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7F, 0x80, 0x86, 0x82, 0x7E, 0x84, 0x81, 0x7E, 0x81, 0x82, 0x83, 
	0x80, 0x7D, 0x80, 0x7B, 0x7F, 0x83, 0x81, 0x80, 0x7C, 0x7B, 0x77, 0x7B, 0x82, 0x84, 0x85, 0x7F, 
	0x7F, 0x7A, 0x81, 0x7B, 0x7C, 0x8A, 0x7C, 0x7D, 0x85, 0x7B, 0x87, 0x87, 0x7C, 0x7A, 0x7F, 0x84, 
	0x84, 0x7F, 0x79, 0x82, 0x7C, 0x7C, 0x81, 0x7D, 0x86, 0x81, 0x78, 0x82, 0x7D, 0x8B, 0x83, 0x7C, 
	0x83, 0x78, 0x7E, 0x82, 0x80, 0x81, 0x86, 0x7B, 0x76, 0x85, 0x81, 0x7C, 0x7F, 0x82, 0x89, 0x84, 
	0x77, 0x7F, 0x7A, 0x7B, 0x84, 0x7B, 0x7E, 0x86, 0x85, 0x7C, 0x80, 0x81, 0x7F, 0x81, 0x80, 0x77, 
	0x7D, 0x83, 0x7B, 0x83, 0x8E, 0x89, 0x72, 0x71, 0x7F, 0x82, 0x82, 0x84, 0x81, 0x83, 0x81, 0x7A, 
	0x7C, 0x83, 0x82, 0x7A, 0x86, 0x86, 0x7C, 0x80, 0x85, 0x8A, 0x78, 0x6E, 0x82, 0x76, 0x7A, 0x81, 
	0x83, 0x8B, 0x82, 0x84, 0x82, 0x92, 0x7E, 0x7A, 0x7E, 0x77, 0x7E, 0x8A, 0x92, 0x91, 0x85, 0x7B, 
	0x79, 0x64, 0x5F, 0x79, 0x84, 0x83, 0x7C, 0x7A, 0x81, 0x83, 0x8B, 0x84, 0x81, 0x84, 0x82, 0x6E, 
	0x74, 0x87, 0x99, 0x95, 0x82, 0x7C, 0x79, 0x6E, 0x6B, 0x7F, 0x82, 0x81, 0x82, 0x82, 0x90, 0x94, 
	0x93, 0x84, 0x76, 0x79, 0x71, 0x63, 0x66, 0x86, 0x8B, 0x88, 0x83, 0x7A, 0x8F, 0x7D, 0x74, 0x84, 
	0x73, 0x87, 0x7B, 0x8A, 0xA3, 0xA0, 0x86, 0x63, 0x5F, 0x63, 0x73, 0x92, 0xB1, 0xA3, 0x92, 0x5B, 
	0x57, 0x6F, 0x78, 0x89, 0x90, 0x9E, 0x77, 0x69, 0x7C, 0x71, 0x63, 0x85, 0x94, 0x72, 0x71, 0x98, 
	0x9E, 0x90, 0x8D, 0x83, 0x6F, 0x68, 0x5D, 0x7E, 0x87, 0x8E, 0x8C, 0x7E, 0x7E, 0x86, 0x89, 0x85, 
	0x8B, 0x86, 0x6D, 0x6C, 0x72, 0x76, 0x7B, 0x7C, 0x72, 0x6C, 0x87, 0x8B, 0x93, 0x90, 0x69, 0x6D, 
	0x72, 0x8A, 0x9C, 0x98, 0x95, 0x83, 0x7F, 0x6A, 0x63, 0x6F, 0x7B, 0x83, 0x75, 0x7A, 0x7B, 0x84, 
	0x7F, 0x7D, 0x8F, 0x8E, 0x8E, 0x88, 0x6C, 0x70, 0x71, 0x75, 0x8F, 0x99, 0x94, 0x89, 0x76, 0x6B, 
	0x6B, 0x78, 0x8C, 0x93, 0x96, 0x93, 0x89, 0x74, 0x61, 0x69, 0x7C, 0x8A, 0x9B, 0x98, 0x86, 0x7A, 
	0x6C, 0x6F, 0x74, 0x78, 0x8A, 0x8D, 0x8D, 0x8B, 0x81, 0x71, 0x6E, 0x70, 0x81, 0x96, 0x96, 0x86, 
	0x7A, 0x72, 0x75, 0x79, 0x7E, 0x8A, 0x8E, 0x89, 0x80, 0x80, 0x83, 0x71, 0x6F, 0x7F, 0x8D, 0x8E, 
	0x8A, 0x88, 0x7F, 0x7E, 0x7D, 0x74, 0x78, 0x82, 0x8B, 0x8C, 0x82, 0x72, 0x6F, 0x72, 0x82, 0x94, 
	0x95, 0x8E, 0x86, 0x71, 0x6F, 0x78, 0x80, 0x88, 0x87, 0x7D, 0x7B, 0x7A, 0x77, 0x7C, 0x89, 0x91, 
	0x87, 0x85, 0x81, 0x7C, 0x72, 0x67, 0x71, 0x7F, 0x8C, 0x95, 0x94, 0x8B, 0x7F, 0x7A, 0x7B, 0x7B, 
	0x78, 0x77, 0x82, 0x85, 0x82, 0x82, 0x81, 0x77, 0x79, 0x8C, 0x8F, 0x85, 0x81, 0x76, 0x6E, 0x6E, 
	0x76, 0x7D, 0x89, 0x92, 0x94, 0x92, 0x81, 0x73, 0x69, 0x69, 0x73, 0x82, 0x88, 0x8B, 0x8B, 0x89, 
	0x82, 0x75, 0x74, 0x7A, 0x7A, 0x7B, 0x82, 0x86, 0x83, 0x83, 0x82, 0x80, 0x80, 0x80, 0x82, 0x82, 
	0x7F, 0x78, 0x76, 0x7C, 0x83, 0x8B, 0x94, 0x8F, 0x84, 0x77, 0x64, 0x60, 0x68, 0x7E, 0x90, 0x91, 
	0x8B, 0x80, 0x75, 0x6D, 0x6B, 0x74, 0x80, 0x89, 0x88, 0x86, 0x88, 0x88, 0x86, 0x87, 0x8B, 0x8D, 
	0x8D, 0x87, 0x7D, 0x77, 0x72, 0x6F, 0x6F, 0x78, 0x7F, 0x86, 0x84, 0x79, 0x6F, 0x64, 0x5F, 0x68, 
	0x77, 0x88, 0x90, 0x8D, 0x81, 0x74, 0x6D, 0x70, 0x76, 0x7F, 0x89, 0x93, 0x95, 0x8F, 0x88, 0x7C, 
	0x77, 0x7B, 0x89, 0x8F, 0x91, 0x8C, 0x7E, 0x70, 0x6B, 0x72, 0x7B, 0x84, 0x90, 0x94, 0x93, 0x8A, 
	0x7C, 0x73, 0x70, 0x78, 0x83, 0x8D, 0x93, 0x90, 0x85, 0x7A, 0x7B, 0x7C, 0x86, 0x8B, 0x8E, 0x89, 
	0x7F, 0x75, 0x73, 0x73, 0x77, 0x82, 0x8C, 0x93, 0x92, 0x87, 0x78, 0x6C, 0x68, 0x6A, 0x74, 0x81, 
	0x89, 0x8A, 0x88, 0x82, 0x7D, 0x7B, 0x7A, 0x7E, 0x82, 0x82, 0x80, 0x7D, 0x7F, 0x80, 0x80, 0x80, 
	0x81, 0x82, 0x87, 0x88, 0x85, 0x7D, 0x76, 0x72, 0x73, 0x75, 0x7B, 0x87, 0x8D, 0x89, 0x82, 0x7B, 
	0x74, 0x74, 0x74, 0x77, 0x76, 0x75, 0x7A, 0x84, 0x8F, 0x98, 0x9E, 0x9D, 0x98, 0x8B, 0x79, 0x67, 
	0x59, 0x56, 0x5D, 0x73, 0x8E, 0xA0, 0xA5, 0x9D, 0x92, 0x86, 0x80, 0x7C, 0x7E, 0x84, 0x82, 0x7A, 
	0x6E, 0x5D, 0x51, 0x50, 0x5C, 0x6B, 0x7E, 0x91, 0x9B, 0x94, 0x87, 0x77, 0x72, 0x7A, 0x84, 0x88, 
	0x8D, 0x92, 0x93, 0x8D, 0x84, 0x7E, 0x7B, 0x7C, 0x82, 0x89, 0x8E, 0x87, 0x79, 0x6E, 0x70, 0x71, 
	0x79, 0x81, 0x89, 0x8D, 0x8C, 0x87, 0x81, 0x7D, 0x7A, 0x7E, 0x85, 0x8A, 0x88, 0x85, 0x82, 0x80, 
	0x7D, 0x7C, 0x7F, 0x86, 0x86, 0x85, 0x82, 0x82, 0x80, 0x7E, 0x7F, 0x7D, 0x7B, 0x79, 0x7A, 0x79, 
	0x79, 0x7A, 0x7A, 0x7A, 0x79, 0x78, 0x7A, 0x7C, 0x7A, 0x7B, 0x7C, 0x7C, 0x79, 0x79, 0x78, 0x78, 
	0x7A, 0x7A, 0x7B, 0x7A, 0x7C, 0x7D, 0x7B, 0x7C, 0x7D, 0x7D, 0x7B, 0x7B, 0x7C, 0x7C, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x81, 0x82, 0x83, 0x83, 0x81, 0x81, 0x7F, 0x80, 0x7E, 0x7F, 0x7E, 
	0x80, 0x82, 0x81, 0x83, 0x81, 0x80, 0x83, 0x82, 0x81, 0x80, 0x7F, 0x7F, 0x7F, 0x82, 0x82, 0x82, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x82, 0x83, 0x83, 
	0x81, 0x81, 0x82, 0x80, 0x81, 0x82, 0x80, 0x80, 0x7E, 0x7E, 0x7F, 0x81, 0x82, 0x83, 0x84, 0x81, 
	0x7F, 0x80, 0x81, 0x7F, 0x7F, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x7D, 0x7D, 0x7C, 0x7C, 0x7E, 0x7D, 0x7C, 0x7E, 
	0x81, 0x83, 0x82, 0x84, 0x83, 0x81, 0x80, 0x7E, 0x7E, 0x80, 0x80, 0x7F, 0x82, 0x81, 0x7F, 0x7E, 
	0x80, 0x80, 0x82, 0x82, 0x84, 0x83, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 
	0x7E, 0x7E, 0x7E, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x83, 0x83, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x82, 
	0x7F, 0x80, 0x81, 0x81, 0x82, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x82, 0x82, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x7D, 0x7F, 0x80, 0x7F, 0x7F, 0x82, 0x82, 0x82, 0x81, 0x81, 
	0x81, 0x81, 0x82, 0x82, 0x82, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x82, 0x82, 0x82, 0x81, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x7E, 0x81, 0x82, 0x82, 0x82, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 
	0x81, 0x82, 0x82, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x82, 0x82, 0x7E, 0x7E, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x82, 0x81, 0x7E, 0x7E, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x7E, 
	0x7D, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x82, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x7D, 0x7D, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7E, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 
	0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x82, 0x82, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x81, 0x82, 0x81, 0x80, 0x7D, 0x7D, 0x80, 0x81, 0x81, 0x80, 0x7D, 0x7C, 0x7D, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7E, 0x81, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x80, 0x83, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 
	0x7F, 0x81, 0x7E, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x81, 
	0x82, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x82, 0x81, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x81, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x83, 0x84, 0x86, 0x88, 0x8A, 0x8A, 0x8A, 0x8A, 0x88, 0x85, 
	0x83, 0x7C, 0x76, 0x72, 0x70, 0x74, 0x79, 0x7E, 0x7B, 0x74, 0x6D, 0x66, 0x5F, 0x5F, 0x6A, 0x76, 
	0x83, 0x85, 0x86, 0x8A, 0x8C, 0x89, 0x7F, 0x74, 0x7C, 0x86, 0x90, 0x93, 0x95, 0x93, 0x94, 0x91, 
	0x86, 0x79, 0x78, 0x80, 0x85, 0x8A, 0x8D, 0x89, 0x82, 0x7E, 0x7D, 0x81, 0x86, 0x8C, 0x93, 0x92, 
	0x86, 0x70, 0x63, 0x69, 0x6B, 0x73, 0x85, 0x8B, 0x8E, 0x90, 0x98, 0x9C, 0x8E, 0x80, 0x71, 0x63, 
	0x57, 0x4A, 0x43, 0x44, 0x48, 0x4F, 0x56, 0x56, 0x55, 0x53, 0x4F, 0x41, 0x2F, 0x27, 0x34, 0x47, 
	0x5C, 0x78, 0x92, 0xA3, 0xA1, 0x93, 0x8F, 0x95, 0xAD, 0xCB, 0xDB, 0xD8, 0xC4, 0xAE, 0x9D, 0x91, 
	0x8B, 0x8B, 0x91, 0x9D, 0xB1, 0xCD, 0xE9, 0xEE, 0xCD, 0xA8, 0x93, 0x84, 0x83, 0x79, 0x69, 0x5B, 
	0x4B, 0x43, 0x47, 0x4D, 0x50, 0x57, 0x60, 0x62, 0x56, 0x43, 0x2D, 0x23, 0x33, 0x45, 0x61, 0x78, 
	0x89, 0x90, 0x9C, 0xA8, 0xAC, 0xAF, 0xB1, 0xB6, 0xC0, 0xBD, 0xAF, 0xAB, 0xAE, 0xB0, 0xB4, 0xC0, 
	0xCA, 0xC6, 0xB8, 0xA1, 0x90, 0x80, 0x6F, 0x60, 0x56, 0x52, 0x54, 0x56, 0x52, 0x4F, 0x50, 0x58, 
	0x56, 0x52, 0x5A, 0x5A, 0x53, 0x4B, 0x55, 0x62, 0x6D, 0x7B, 0x8F, 0xA7, 0xB3, 0xB7, 0xBA, 0xB7, 
	0xB9, 0xB6, 0xB1, 0xB2, 0xB2, 0xAA, 0xA4, 0xA6, 0xAC, 0xAC, 0xA4, 0x9E, 0x98, 0x88, 0x73, 0x66, 
	0x5A, 0x4D, 0x43, 0x3E, 0x45, 0x4A, 0x4B, 0x52, 0x5C, 0x62, 0x65, 0x65, 0x6A, 0x6D, 0x71, 0x76, 
	0x81, 0x8A, 0x92, 0xA1, 0xB0, 0xC2, 0xCB, 0xC7, 0xC3, 0xC2, 0xBD, 0xB0, 0xA9, 0xA1, 0x9A, 0x93, 
	0x8B, 0x86, 0x85, 0x7F, 0x74, 0x6B, 0x66, 0x57, 0x49, 0x3F, 0x3A, 0x36, 0x38, 0x3D, 0x4A, 0x57, 
	0x5F, 0x6A, 0x75, 0x82, 0x8A, 0x8E, 0x94, 0x98, 0x9D, 0xA5, 0xA9, 0xB2, 0xBA, 0xBF, 0xC1, 0xC0, 
	0xC0, 0xB6, 0xAF, 0xA5, 0x94, 0x85, 0x7B, 0x6E, 0x63, 0x5A, 0x58, 0x54, 0x53, 0x4E, 0x4C, 0x49, 
	0x48, 0x47, 0x49, 0x4E, 0x53, 0x5D, 0x6A, 0x79, 0x88, 0x97, 0xA1, 0xAA, 0xB3, 0xBB, 0xBD, 0xBC, 
	0xB9, 0xB6, 0xB0, 0xA8, 0xA1, 0x9C, 0x96, 0x8F, 0x87, 0x7D, 0x6F, 0x62, 0x57, 0x4E, 0x44, 0x3C, 
	0x38, 0x3A, 0x3D, 0x40, 0x49, 0x53, 0x5E, 0x6B, 0x76, 0x80, 0x8D, 0x94, 0x9D, 0xA6, 0xAC, 0xB3, 
	0xBA, 0xBE, 0xC0, 0xC3, 0xBF, 0xB8, 0xB0, 0xA1, 0x96, 0x8A, 0x7B, 0x6B, 0x5B, 0x4E, 0x47, 0x42, 
	0x3E, 0x3B, 0x3A, 0x3C, 0x3F, 0x43, 0x49, 0x52, 0x5E, 0x6A, 0x76, 0x83, 0x8D, 0x9A, 0xA6, 0xB2, 
	0xB9, 0xC0, 0xC3, 0xC1, 0xBE, 0xBA, 0xB0, 0xA4, 0x98, 0x8D, 0x82, 0x73, 0x69, 0x5F, 0x56, 0x51, 
	0x4B, 0x43, 0x3E, 0x3D, 0x3F, 0x42, 0x47, 0x4F, 0x5B, 0x67, 0x75, 0x82, 0x8F, 0x99, 0xA2, 0xAB, 
	0xB4, 0xB7, 0xB7, 0xB5, 0xB1, 0xAB, 0xA5, 0x9D, 0x93, 0x88, 0x7B, 0x71, 0x68, 0x60, 0x56, 0x4F, 
	0x49, 0x46, 0x45, 0x46, 0x47, 0x4D, 0x55, 0x60, 0x6B, 0x76, 0x83, 0x90, 0x98, 0xA1, 0xA9, 0xAE, 
	0xB3, 0xB5, 0xB1, 0xAC, 0xA5, 0x9E, 0x98, 0x92, 0x86, 0x7E, 0x72, 0x6B, 0x63, 0x58, 0x51, 0x4E, 
	0x4B, 0x4B, 0x4E, 0x51, 0x57, 0x5E, 0x69, 0x73, 0x7F, 0x8C, 0x95, 0x9D, 0xA6, 0xAB, 0xAD, 0xAE, 
	0xAD, 0xAB, 0xA7, 0xA2, 0x9C, 0x92, 0x89, 0x81, 0x76, 0x6D, 0x66, 0x5F, 0x5A, 0x53, 0x4F, 0x4F, 
	0x52, 0x56, 0x5D, 0x65, 0x6E, 0x76, 0x80, 0x8A, 0x92, 0x9D, 0xA1, 0xA8, 0xAE, 0xB1, 0xAF, 0xAA, 
	0xA5, 0xA1, 0x9B, 0x94, 0x8B, 0x7F, 0x77, 0x6F, 0x69, 0x61, 0x5D, 0x57, 0x54, 0x56, 0x58, 0x5A, 
	0x60, 0x67, 0x70, 0x77, 0x80, 0x86, 0x90, 0x98, 0x9E, 0xA2, 0xA6, 0xA9, 0xA9, 0xA7, 0xA1, 0x9B, 
	0x96, 0x8D, 0x84, 0x7C, 0x74, 0x6F, 0x69, 0x65, 0x61, 0x5C, 0x5D, 0x5E, 0x61, 0x63, 0x69, 0x6E, 
	0x75, 0x7E, 0x84, 0x8C, 0x90, 0x98, 0x9E, 0x9F, 0xA2, 0xA1, 0x9F, 0x9C, 0x98, 0x96, 0x8F, 0x88, 
	0x7F, 0x79, 0x71, 0x6D, 0x69, 0x64, 0x62, 0x60, 0x62, 0x66, 0x67, 0x69, 0x6E, 0x74, 0x7A, 0x7F, 
	0x83, 0x88, 0x8E, 0x92, 0x96, 0x99, 0x9A, 0x98, 0x95, 0x90, 0x8C, 0x8A, 0x86, 0x81, 0x79, 0x74, 
	0x73, 0x6E, 0x6E, 0x6D, 0x6B, 0x6A, 0x6C, 0x71, 0x74, 0x76, 0x7B, 0x81, 0x86, 0x89, 0x8E, 0x8F, 
	0x90, 0x93, 0x94, 0x93, 0x8F, 0x8D, 0x8B, 0x87, 0x80, 0x7B, 0x77, 0x73, 0x72, 0x6F, 0x6C, 0x6C, 
	0x6A, 0x6B, 0x6D, 0x70, 0x72, 0x76, 0x7B, 0x7E, 0x82, 0x87, 0x8B, 0x8E, 0x91, 0x92, 0x91, 0x90, 
	0x8F, 0x8E, 0x8B, 0x88, 0x83, 0x7E, 0x7C, 0x77, 0x75, 0x72, 0x6E, 0x6F, 0x6D, 0x6F, 0x71, 0x71, 
	0x73, 0x78, 0x7A, 0x7D, 0x81, 0x86, 0x8B, 0x8D, 0x8F, 0x90, 0x91, 0x91, 0x91, 0x8F, 0x8B, 0x88, 
	0x85, 0x81, 0x7F, 0x7B, 0x79, 0x77, 0x73, 0x70, 0x72, 0x70, 0x6F, 0x72, 0x74, 0x78, 0x7B, 0x7E, 
	0x81, 0x84, 0x87, 0x8A, 0x8A, 0x8B, 0x8D, 0x8D, 0x8C, 0x8A, 0x88, 0x86, 0x82, 0x80, 0x7D, 0x7B, 
	0x77, 0x78, 0x76, 0x76, 0x76, 0x75, 0x76, 0x77, 0x78, 0x7C, 0x80, 0x84, 0x85, 0x88, 0x8A, 0x8B, 
	0x8A, 0x8A, 0x8B, 0x8D, 0x8C, 0x87, 0x84, 0x84, 0x81, 0x7E, 0x7A, 0x76, 0x75, 0x74, 0x74, 0x74, 
	0x73, 0x74, 0x75, 0x79, 0x7C, 0x7F, 0x81, 0x84, 0x86, 0x8A, 0x8A, 0x8B, 0x8D, 0x8D, 0x8D, 0x8C, 
	0x8A, 0x86, 0x85, 0x82, 0x7F, 0x7C, 0x7B, 0x78, 0x76, 0x75, 0x76, 0x77, 0x76, 0x78, 0x7A, 0x7B, 
	0x7B, 0x7F, 0x83, 0x84, 0x87, 0x88, 0x89, 0x88, 0x8A, 0x8A, 0x87, 0x88, 0x86, 0x85, 0x83, 0x7F, 
	0x7E, 0x7D, 0x7C, 0x7A, 0x78, 0x79, 0x7A, 0x79, 0x79, 0x7B, 0x7D, 0x7F, 0x80, 0x81, 0x82, 0x84, 
	0x86, 0x88, 0x87, 0x85, 0x85, 0x85, 0x86, 0x84, 0x84, 0x82, 0x80, 0x7E, 0x7F, 0x7E, 0x7E, 0x7C, 
	0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x81, 0x81, 0x80, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x80, 
	0x80, 0x81, 0x81, 0x7D, 0x7D, 0x7C, 0x7C, 0x7F, 0x7E, 0x7D, 0x7F, 0x82, 0x81, 0x83, 0x82, 0x82, 
	0x85, 0x86, 0x86, 0x86, 0x84, 0x82, 0x83, 0x81, 0x80, 0x82, 0x80, 0x7E, 0x7C, 0x7C, 0x79, 0x7A, 
	0x7D, 0x7C, 0x7B, 0x7D, 0x80, 0x81, 0x7F, 0x80, 0x82, 0x85, 0x87, 0x86, 0x86, 0x86, 0x87, 0x87, 
	0x85, 0x83, 0x81, 0x7F, 0x7E, 0x7C, 0x7E, 0x7D, 0x7D, 0x7B, 0x7B, 0x7A, 0x7A, 0x7D, 0x7C, 0x7E, 
	0x81, 0x82, 0x81, 0x83, 0x86, 0x86, 0x85, 0x85, 0x86, 0x86, 0x84, 0x82, 0x83, 0x82, 0x80, 0x7E, 
	0x7C, 0x7C, 0x7A, 0x7B, 0x7B, 0x7A, 0x7A, 0x7C, 0x7E, 0x7D, 0x7E, 0x80, 0x83, 0x84, 0x83, 0x85, 
	0x85, 0x84, 0x84, 0x85, 0x86, 0x84, 0x82, 0x83, 0x82, 0x80, 0x7E, 0x7C, 0x7E, 0x7C, 0x7D, 0x7A, 
	0x7B, 0x7B, 0x7B, 0x7E, 0x7E, 0x80, 0x7F, 0x81, 0x80, 0x81, 0x80, 0x82, 0x81, 0x81, 0x84, 0x85, 
	0x86, 0x87, 0x89, 0x88, 
};