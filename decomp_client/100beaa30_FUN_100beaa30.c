
undefined8 FUN_100beaa30(uint param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 6) {
    *param_2 = (long)*(int *)(&DAT_101da29d0 + (long)(int)param_1 * 4);
    uVar1 = 0;
    if (param_1 != 3) {
      uVar1 = (&DAT_102315fa0)[(int)param_1];
    }
    *param_3 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

