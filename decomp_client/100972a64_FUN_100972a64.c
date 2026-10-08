
undefined4 FUN_100972a64(long param_1,long param_2)

{
  int iVar1;
  undefined4 local_2c;
  long local_28;
  undefined4 local_10;
  
  local_10 = 0;
  local_28 = param_2;
  if (param_2 == 0) {
    FUN_100964522(param_1,0x25,"NULL definition list",0,0);
    local_2c = 0xffffffff;
  }
  else {
    for (; local_28 != 0; local_28 = *(long *)(local_28 + 0x40)) {
      if ((*(long *)(param_1 + 0x60) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
        FUN_100964522(param_1,6,0,0,0);
        return 0xffffffff;
      }
      iVar1 = FUN_10097521d(param_1,local_28);
      if (iVar1 < 0) {
        local_10 = 0xffffffff;
      }
      if (iVar1 == -1) break;
    }
    local_2c = local_10;
  }
  return local_2c;
}

