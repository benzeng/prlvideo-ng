
undefined8 FUN_1003b4200(undefined8 param_1,long *param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  long *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  void *local_30;
  void *local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = (void *)0x0;
  local_30 = (void *)0x0;
  local_48 = 0;
  lStack_50 = *param_2;
  uStack_40 = *(undefined8 *)(lStack_50 + 0x38);
  local_38 = (undefined1)(1 << (param_3 & 0x1f));
  local_60 = 0;
  local_58 = param_2;
  iVar1 = FUN_1003c4410(&local_58,&local_60);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_60;
  }
  if (local_30 != (void *)0x0) {
    if (local_28 != local_30) {
      local_28 = (void *)((~((long)local_28 + (-4 - (long)local_30)) & 0xfffffffffffffffcU) +
                         (long)local_28);
    }
    operator_delete(local_30);
  }
  return uVar2;
}

