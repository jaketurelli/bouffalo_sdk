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

#include "PikaMain.h"
#include <stdio.h>
#include <stdlib.h>

volatile PikaObj *__pikaMain;
PikaObj *pikaScriptInit(void){
    __platform_printf("======[pikascript packages installed]======\r\n");
    pks_printVersion();
    __platform_printf("PikaMath==v0.2.1\r\n");
    __platform_printf("PikaStdDevice==v2.3.6\r\n");
    __platform_printf("PikaStdLib==latest\r\n");
    __platform_printf("_thread==v0.0.3\r\n");
    __platform_printf("binascii==v0.0.1\r\n");
    __platform_printf("configparser==v0.2.1\r\n");
    __platform_printf("json==v0.1.1\r\n");
    __platform_printf("modbus==v0.0.4\r\n");
    __platform_printf("pika_cjson==v1.2.2\r\n");
    __platform_printf("pika_libc==v1.0.1\r\n");
    __platform_printf("pika_lvgl==v0.4.4\r\n");
    __platform_printf("random==v0.1.1\r\n");
    __platform_printf("re==v0.1.1\r\n");
    __platform_printf("time==v0.1.3\r\n");
    __platform_printf("unittest==v0.1.2\r\n");
    __platform_printf("===========================================\r\n");
    PikaObj* pikaMain = newRootObj("pikaMain", New_PikaMain);
    __pikaMain = pikaMain;
    extern unsigned char pikaModules_py_a[];
    obj_linkLibrary(pikaMain, pikaModules_py_a);
#if PIKA_INIT_STRING_ENABLE
    obj_run(pikaMain,
            "import PikaStdLib\n"
            "import random\n"
            "import PikaStdData\n"
            "import configparser\n"
            "import pika_cjson\n"
            "import PikaMath\n"
            "import unittest\n"
            "import re\n"
            "import binascii\n"
            "import modbus\n"
            "import time\n"
            "import pika_lvgl\n"
            "import _thread\n"
            "import machine\n"
            "import example\n"
            "import json\n"
            "print('hello PikaPython!')\n"
            "\n");
#else 
    obj_runModule((PikaObj*)pikaMain, "main");
#endif
    return pikaMain;
}

