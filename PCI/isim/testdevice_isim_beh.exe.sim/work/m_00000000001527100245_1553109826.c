/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/Projects/PCI/pci (4).v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_4_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(5, ng0);

LAB2:    xsi_set_current_line(6, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_8_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);

LAB4:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2264);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2264);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}


extern void work_m_00000000001527100245_1553109826_init()
{
	static char *pe[] = {(void *)Initial_4_0,(void *)Always_8_1};
	xsi_register_didat("work_m_00000000001527100245_1553109826", "isim/testdevice_isim_beh.exe.sim/work/m_00000000001527100245_1553109826.didat");
	xsi_register_executes(pe);
}
