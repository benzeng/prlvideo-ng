
void FUN_100144304(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_48;
  undefined8 local_10;
  
  local_10 = 0;
  if (((param_1 == (long *)0x0) || (*(int *)((long)param_1 + 0x14c) == 0)) ||
     ((int)param_1[0x22] != -1)) {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0xd8) == -0x21124151)) {
      local_10 = *(undefined8 *)(*param_1 + 0xf8);
    }
    if (*param_1 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = *(undefined8 *)(*param_1 + 0xa8);
    }
    ___xmlRaiseError(local_10,local_48,param_1[1],param_1,0,1,param_2,1,0,0,param_4,param_5,0,0,0,
                     param_3,param_4,param_5);
  }
  return;
}

