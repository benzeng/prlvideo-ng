
undefined4 * FUN_10022e03f(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *local_30;
  int local_24;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) || (*(int *)(param_1 + 0x78) < 1)) {
    local_24 = param_2;
    if (param_2 < 0x10) {
      local_24 = 0x10;
    }
    local_30 = (undefined4 *)(*(code *)_xmlMalloc)((long)(local_24 + -1) * 8 + 0x10);
    if (local_30 == (undefined4 *)0x0) {
      FUN_10022d41d(param_1,"allocating states\n");
      local_30 = (undefined4 *)0x0;
    }
    else {
      *local_30 = 0;
      local_30[1] = local_24;
      uVar1 = (*(code *)_xmlMalloc)((long)local_24 * 8);
      *(undefined8 *)(local_30 + 2) = uVar1;
      if (*(long *)(local_30 + 2) == 0) {
        FUN_10022d41d(param_1,"allocating states\n");
        (*(code *)_xmlFree)(local_30);
        local_30 = (undefined4 *)0x0;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    local_30 = *(undefined4 **)(*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78) * 8);
    *local_30 = 0;
  }
  return local_30;
}

