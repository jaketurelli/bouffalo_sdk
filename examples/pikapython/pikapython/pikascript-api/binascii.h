/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * https://pikadoc.readthedocs.io/zh/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef __binascii__H
#define __binascii__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_binascii(Args *args);

Arg* binascii_a2b_hex(PikaObj *self, char* val);
Arg* binascii_b2a_hex(PikaObj *self, Arg* val);

#endif
