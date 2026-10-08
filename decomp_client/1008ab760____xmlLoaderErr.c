
void ___xmlLoaderErr(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  undefined4 local_c;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 2;
  if (((param_1 == (long *)0x0) || (*(int *)((long)param_1 + 0x14c) == 0)) ||
     ((int)param_1[0x22] != -1)) {
    if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
      if (*(int *)((long)param_1 + 0x9c) == 0) {
        local_20 = *(undefined8 *)(*param_1 + 0xa8);
        local_c = 1;
      }
      else {
        local_20 = *(undefined8 *)(*param_1 + 0xb0);
        local_c = 2;
      }
      if (*(int *)(*param_1 + 0xd8) == -0x21124151) {
        local_28 = *(undefined8 *)(*param_1 + 0xf8);
      }
      local_18 = param_1[1];
    }
    ___xmlRaiseError(local_28,local_20,local_18,param_1,0,8,0x60d,local_c,0,0,param_3,0,0,0,0,
                     param_2,param_3);
  }
  return;
}

