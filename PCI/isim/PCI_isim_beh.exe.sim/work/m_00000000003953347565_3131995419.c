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
static const char *ng0 = "C:/Xilinx/Projects/PCI/PCI.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 1U};
static const char *ng4 = "D:waveform.txt";
static const char *ng5 = "r";
static const char *ng6 = "data_file handle was NULL";
static const char *ng7 = "%d\n";
static int ng8[] = {4, 0};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {3149642683U, 0U};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {3435973836U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {2, 0};
static int ng17[] = {3, 0};
static unsigned int ng18[] = {2863311530U, 0U};
static int ng19[] = {5, 0};



static void Initial_129_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);

LAB4:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 7384);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 6016);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 6016);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_134_1(char *t0)
{
    char t4[8];
    char t13[8];
    char t24[8];
    char t28[8];
    char t38[8];
    char t47[8];
    char t50[8];
    char t51[8];
    char t61[8];
    char t62[8];
    char t63[8];
    char t97[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    int t71;
    char *t72;
    unsigned int t73;
    int t74;
    int t75;
    char *t76;
    unsigned int t77;
    int t78;
    int t79;
    char *t80;
    unsigned int t81;
    int t82;
    int t83;
    char *t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;

LAB0:    t1 = (t0 + 7824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);

LAB4:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(152, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng4, ng5);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(160, ng0);

LAB10:    t2 = (t0 + 6496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    *((int *)t13) = xsi_vlogfile_feof(*((unsigned int *)t5));
    t6 = (t13 + 4);
    *((int *)t6) = 0;
    memset(t4, 0, 8);
    t7 = (t13 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t7) == 0)
        goto LAB11;

LAB13:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB14:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6176);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 6176);
    t21 = (t15 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t5, t14, t22, 2, 1, t23, 32, 1);
    memset(t13, 0, 8);
    t25 = (t13 + 4);
    t26 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 31U);
    t16 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t16 & 31U);

LAB20:    t27 = ((char*)((ng9)));
    t71 = xsi_vlog_unsigned_case_compare(t13, 6, t27, 6);
    if (t71 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t71 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t71 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t71 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t71 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t71 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t71 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6176);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 6176);
    t21 = (t15 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t5, t14, t22, 2, 1, t23, 32, 1);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 31U);
    t16 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t16 & 31U);

LAB30:    t27 = ((char*)((ng9)));
    t71 = xsi_vlog_unsigned_case_compare(t24, 6, t27, 6);
    if (t71 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t71 = xsi_vlog_unsigned_case_compare(t24, 6, t2, 6);
    if (t71 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t71 = xsi_vlog_unsigned_case_compare(t24, 6, t2, 6);
    if (t71 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng15)));
    t71 = xsi_vlog_unsigned_case_compare(t24, 6, t2, 6);
    if (t71 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6176);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 6176);
    t21 = (t15 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t5, t14, t22, 2, 1, t23, 32, 1);
    memset(t28, 0, 8);
    t25 = (t28 + 4);
    t26 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t28) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t12 & 31U);
    t16 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t16 & 31U);

LAB40:    t27 = ((char*)((ng9)));
    t71 = xsi_vlog_unsigned_case_compare(t28, 6, t27, 6);
    if (t71 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng12)));
    t71 = xsi_vlog_unsigned_case_compare(t28, 6, t2, 6);
    if (t71 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng14)));
    t71 = xsi_vlog_unsigned_case_compare(t28, 6, t2, 6);
    if (t71 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng15)));
    t71 = xsi_vlog_unsigned_case_compare(t28, 6, t2, 6);
    if (t71 == 1)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB6:    xsi_set_current_line(155, ng0);

LAB9:    xsi_set_current_line(156, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(157, ng0);
    xsi_vlog_finish(1);
    goto LAB8;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(161, ng0);

LAB17:    xsi_set_current_line(162, ng0);
    t21 = (t0 + 6496);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t25 = (t0 + 6176);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 6176);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6176);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 6656);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t28, 5, t27, t31, t34, 2, 1, t37, 32, 1);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t40 = (t28 + 4);
    t41 = *((unsigned int *)t28);
    t42 = (t41 >> 0);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 31U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 31U);
    xsi_vlog_bit_copy(t24, 0, t38, 0, 5);
    *((int *)t47) = xsi_vlogfile_fscanf(*((unsigned int *)t23), ng7, 2, t0, (char)118, t24, 5);
    t48 = (t47 + 4);
    *((int *)t48) = 0;
    t49 = (t0 + 6176);
    t52 = (t0 + 6176);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = (t0 + 6176);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t58 = (t0 + 6656);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t50, t51, t54, t57, 2, 1, t60, 32, 1);
    t64 = (t0 + 6176);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng8)));
    t68 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t66)), 2, t67, 32, 1, t68, 32, 1);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t51 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (!(t73));
    t75 = (t71 && t74);
    t76 = (t61 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (!(t77));
    t79 = (t75 && t78);
    t80 = (t62 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (!(t81));
    t83 = (t79 && t82);
    t84 = (t63 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (!(t85));
    t87 = (t83 && t86);
    if (t87 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 6656);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB10;

LAB18:    t88 = *((unsigned int *)t63);
    t89 = (t88 + 0);
    t90 = *((unsigned int *)t51);
    t91 = *((unsigned int *)t62);
    t92 = (t90 + t91);
    t93 = *((unsigned int *)t61);
    t94 = *((unsigned int *)t62);
    t95 = (t93 - t94);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t49, t24, t89, t92, t96);
    goto LAB19;

LAB21:    xsi_set_current_line(167, ng0);
    t29 = (t0 + 6176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 6176);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 6176);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t24, 5, t31, t34, t37, 2, 1, t39, 32, 1);
    memset(t28, 0, 8);
    t40 = (t28 + 4);
    t48 = (t24 + 4);
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 0);
    *((unsigned int *)t28) = t18;
    t19 = *((unsigned int *)t48);
    t20 = (t19 >> 0);
    *((unsigned int *)t40) = t20;
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & 31U);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 & 31U);
    t49 = ((char*)((ng10)));
    t52 = ((char*)((ng11)));
    t53 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t53, 1, t52, 1, t49, 32, t28, 5);
    t54 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t54, t97, 0, 0, 5, 0LL);
    t55 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t55, t97, 5, 0, 32, 0LL);
    t56 = (t0 + 5536);
    xsi_vlogvar_wait_assign_value(t56, t97, 37, 0, 1, 0LL);
    t57 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t57, t97, 38, 0, 1, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t24, 0, 8);
    t26 = (t24 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng13)));
    t30 = ((char*)((ng11)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t24, 5);
    t32 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5536);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t24, 0, 8);
    t26 = (t24 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng10)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t24, 5);
    t32 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5536);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t24, 0, 8);
    t26 = (t24 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng13)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t24, 5);
    t32 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5536);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(173, ng0);
    t29 = (t0 + 6176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 6176);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 6176);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t28, 5, t31, t34, t37, 2, 1, t39, 32, 1);
    memset(t38, 0, 8);
    t40 = (t38 + 4);
    t48 = (t28 + 4);
    t17 = *((unsigned int *)t28);
    t18 = (t17 >> 0);
    *((unsigned int *)t38) = t18;
    t19 = *((unsigned int *)t48);
    t20 = (t19 >> 0);
    *((unsigned int *)t40) = t20;
    t41 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t41 & 31U);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 & 31U);
    t49 = ((char*)((ng18)));
    t52 = ((char*)((ng11)));
    t53 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t53, 1, t52, 1, t49, 32, t38, 5);
    t54 = (t0 + 5216);
    xsi_vlogvar_wait_assign_value(t54, t97, 0, 0, 5, 0LL);
    t55 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t55, t97, 5, 0, 32, 0LL);
    t56 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t56, t97, 37, 0, 1, 0LL);
    t57 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t57, t97, 38, 0, 1, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t28) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng13)));
    t30 = ((char*)((ng11)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t28, 5);
    t32 = (t0 + 5216);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t28) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng18)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t28, 5);
    t32 = (t0 + 5216);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB39;

LAB37:    xsi_set_current_line(176, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t28) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng13)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t28, 5);
    t32 = (t0 + 5216);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB39;

LAB41:    xsi_set_current_line(179, ng0);
    t29 = (t0 + 6176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 6176);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 6176);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t38, 5, t31, t34, t37, 2, 1, t39, 32, 1);
    memset(t47, 0, 8);
    t40 = (t47 + 4);
    t48 = (t38 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (t17 >> 0);
    *((unsigned int *)t47) = t18;
    t19 = *((unsigned int *)t48);
    t20 = (t19 >> 0);
    *((unsigned int *)t40) = t20;
    t41 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t41 & 31U);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 & 31U);
    t49 = ((char*)((ng18)));
    t52 = ((char*)((ng11)));
    t53 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t53, 1, t52, 1, t49, 32, t47, 5);
    t54 = (t0 + 5376);
    xsi_vlogvar_wait_assign_value(t54, t97, 0, 0, 5, 0LL);
    t55 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t55, t97, 5, 0, 32, 0LL);
    t56 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t56, t97, 37, 0, 1, 0LL);
    t57 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t57, t97, 38, 0, 1, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(180, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t38, 0, 8);
    t26 = (t38 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng10)));
    t30 = ((char*)((ng11)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t38, 5);
    t32 = (t0 + 5376);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t38, 0, 8);
    t26 = (t38 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng18)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t38, 5);
    t32 = (t0 + 5376);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB49;

LAB47:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 6176);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6176);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6176);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t15, t23, 2, 1, t25, 32, 1);
    memset(t38, 0, 8);
    t26 = (t38 + 4);
    t27 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t12 & 31U);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t16 & 31U);
    t29 = ((char*)((ng10)));
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng11)));
    xsi_vlogtype_concat(t97, 39, 39, 4U, t31, 1, t30, 1, t29, 32, t38, 5);
    t32 = (t0 + 5376);
    xsi_vlogvar_wait_assign_value(t32, t97, 0, 0, 5, 0LL);
    t33 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t33, t97, 5, 0, 32, 0LL);
    t34 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t34, t97, 37, 0, 1, 0LL);
    t35 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t35, t97, 38, 0, 1, 0LL);
    goto LAB49;

LAB50:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng18)));
    t3 = (t0 + 8952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng10)));
    t3 = (t0 + 9016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 9080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00000000003953347565_3131995419_init()
{
	static char *pe[] = {(void *)Initial_129_0,(void *)Initial_134_1,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000003953347565_3131995419", "isim/PCI_isim_beh.exe.sim/work/m_00000000003953347565_3131995419.didat");
	xsi_register_executes(pe);
}
