
undefined4 FUN_100971efc(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  int *local_18;
  int local_10;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    local_10 = 1;
    local_18 = (int *)*param_2;
    while (local_18 != (int *)0x0) {
      if ((*(int *)(param_1 + 8) == 1) && (*local_18 == 4)) {
        iVar1 = FUN_100972b33(0,local_18,param_1);
        if (iVar1 == 1) {
          return 1;
        }
      }
      else if (((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 4)) && (*local_18 == 3)) {
        return 1;
      }
      lVar2 = (long)local_10;
      local_10 = local_10 + 1;
      local_18 = (int *)param_2[lVar2];
    }
  }
  return 0;
}

