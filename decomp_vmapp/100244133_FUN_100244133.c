
void FUN_100244133(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (((param_1 == (long *)0x0) || (*(int *)((long)param_1 + 0x14c) == 0)) ||
     ((int)param_1[0x22] != -1)) {
    if (((param_1 != (long *)0x0) && (*(undefined4 *)(param_1 + 0x11) = param_2, *param_1 != 0)) &&
       (*(int *)(*param_1 + 0xd8) == -0x21124151)) {
      local_10 = *(undefined8 *)(*param_1 + 0xf8);
    }
    ___xmlRaiseError(local_10,param_1[0x15],param_1[0x14],param_1,0,4,param_2,2,0,0,param_4,param_5,
                     0,0,0,param_3,param_4,param_5);
    if (param_1 != (long *)0x0) {
      *(undefined4 *)(param_1 + 0x13) = 0;
    }
  }
  return;
}

