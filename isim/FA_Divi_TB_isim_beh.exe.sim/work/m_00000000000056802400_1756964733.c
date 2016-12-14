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
static const char *ng0 = "C:/Users/Rafael/PROYECTO_Divisor/FA_Divisor.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {31, 0};
static int ng4[] = {1, 0};



static void Always_17_0(char *t0)
{
    char t7[8];
    char t13[16];
    char t17[8];
    char t26[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);
    xsi_set_current_line(23, ng0);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(23, ng0);

LAB9:    xsi_set_current_line(24, ng0);
    t14 = (t0 + 1904);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    t27 = (t0 + 2224);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t26, 0, 8);
    t30 = (t26 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t26) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 2147483647U);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 2147483647U);
    xsi_vlogtype_concat(t13, 33, 32, 2U, t26, 31, t17, 1);
    t38 = (t0 + 2224);
    xsi_vlogvar_assign_value(t38, t13, 0, 0, 33);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 2147483647U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 2147483647U);
    t14 = (t0 + 1904);
    t15 = (t0 + 1904);
    t16 = (t15 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng3)));
    t27 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t17, t26, t39, ((int*)(t18)), 2, t19, 32, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t21 = *((unsigned int *)t28);
    t40 = (!(t21));
    t29 = (t26 + 4);
    t22 = *((unsigned int *)t29);
    t41 = (!(t22));
    t42 = (t40 && t41);
    t30 = (t39 + 4);
    t23 = *((unsigned int *)t30);
    t43 = (!(t23));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2064);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    xsi_vlog_unsigned_minus(t13, 33, t4, 33, t14, 32);
    t15 = (t0 + 2224);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 33);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    t6 = (t5 + 72U);
    t14 = *((char **)t6);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t14, 2, t15, 32, 1);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t16);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t19);
    t20 = (t11 ^ t12);
    t21 = (t10 | t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t32 = (t21 & t25);
    if (t32 != 0)
        goto LAB15;

LAB12:    if (t24 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;

LAB15:    t28 = (t17 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t17);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1904);
    t4 = (t0 + 1904);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t14, 32, 1);
    t15 = (t7 + 4);
    t8 = *((unsigned int *)t15);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB22;

LAB23:
LAB18:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2384);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    t24 = *((unsigned int *)t39);
    t45 = (t24 + 0);
    t25 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t26);
    t46 = (t25 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t14, t7, t45, *((unsigned int *)t26), t47);
    goto LAB11;

LAB14:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(27, ng0);

LAB19:    xsi_set_current_line(28, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1904);
    t31 = (t0 + 1904);
    t38 = (t31 + 72U);
    t48 = *((char **)t38);
    t49 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t26, t48, 2, t49, 32, 1);
    t50 = (t26 + 4);
    t51 = *((unsigned int *)t50);
    t40 = (!(t51));
    if (t40 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2064);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    xsi_vlog_unsigned_add(t13, 33, t4, 33, t14, 32);
    t15 = (t0 + 2224);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 33);
    goto LAB18;

LAB20:    xsi_vlogvar_assign_value(t30, t29, 0, *((unsigned int *)t26), 1);
    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), 1);
    goto LAB23;

}


extern void work_m_00000000000056802400_1756964733_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000000056802400_1756964733", "isim/FA_Divi_TB_isim_beh.exe.sim/work/m_00000000000056802400_1756964733.didat");
	xsi_register_executes(pe);
}
