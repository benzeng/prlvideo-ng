
undefined8 FUN_100bd73f0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined2 *)((long)param_2 + 0x1c) = DAT_102302fac;
    *(undefined4 *)(param_2 + 3) = DAT_102302fa8;
    param_2[2] = DAT_102302fa0;
    param_2[1] = DAT_102302f98;
    *param_2 = DAT_102302f90;
  }
  return 0x1e;
}

