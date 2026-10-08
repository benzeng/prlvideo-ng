
void FUN_100877d93(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  
  local_20 = 0;
  if (((param_1 == (long *)0x0) || (*(int *)((long)param_1 + 0x14c) == 0)) ||
     ((int)param_1[0x22] != -1)) {
    *(undefined4 *)(param_1 + 0x11) = param_2;
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0xd8) == -0x21124151)) {
      local_20 = *(undefined8 *)(*param_1 + 0xf8);
    }
    ___xmlRaiseError(local_20,param_1[0x15],param_1[0x14],param_1,0,4,param_2,2,0,0,param_4,0,0,0,0,
                     param_3,param_4);
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  return;
}

