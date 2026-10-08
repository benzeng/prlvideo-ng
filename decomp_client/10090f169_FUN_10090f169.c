
int FUN_10090f169(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  int local_3c;
  int local_18;
  int local_14;
  
  local_18 = 1;
  if (param_2 == 0) {
    local_3c = 1;
  }
  else {
    for (local_14 = 0; local_14 < *(int *)(param_2 + 0x14); local_14 = local_14 + 1) {
      plVar1 = (long *)(*(long *)(param_2 + 0x18) + (long)local_14 * 0x18);
      if (*plVar1 == 0) {
        if (((int)plVar1[1] != -1) &&
           (local_18 = FUN_10090f169(param_1,*(undefined8 *)
                                              (*(long *)(param_1 + 0x50) + (long)(int)plVar1[1] * 8)
                                     ,param_3,param_4), local_18 == 0)) {
          return 0;
        }
      }
      else if (((int)plVar1[1] == param_3) && (iVar2 = FUN_10090f02e(*plVar1,param_4), iVar2 != 0))
      {
        return 0;
      }
    }
    local_3c = local_18;
  }
  return local_3c;
}

