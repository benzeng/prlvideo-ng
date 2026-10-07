
undefined8 FUN_1000b3f60(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  void *local_28;
  void *pvStack_20;
  undefined8 local_18;
  
  if ((*(ulong *)(param_1 + 0x1ab0) & 0x4000) == 0) {
    if ((*(ulong *)(param_1 + 0x1ab0) & 0x8000) == 0) {
      return 1;
    }
    FUN_10008f910(param_1,0x80036031);
    uVar1 = DAT_1011c3650;
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    FUN_10006a060(local_70);
    FUN_1000648b0(uVar1,0x80036031,&local_58,local_70);
    FUN_10006a680(local_70);
    if (local_58 == (void *)0x0) {
      return 0;
    }
    pvVar2 = local_58;
    if (pvStack_50 != local_58) {
      pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                           (long)pvStack_50);
    }
  }
  else {
    FUN_10008f910(param_1,0x80036029);
    uVar1 = DAT_1011c3650;
    local_28 = (void *)0x0;
    pvStack_20 = (void *)0x0;
    local_18 = 0;
    FUN_10006a060(local_40);
    FUN_1000648b0(uVar1,0x80036029,&local_28,local_40);
    FUN_10006a680(local_40);
    if (local_28 == (void *)0x0) {
      return 0;
    }
    pvVar2 = local_28;
    if (pvStack_20 != local_28) {
      pvStack_20 = (void *)((~((long)pvStack_20 + (-4 - (long)local_28)) & 0xfffffffffffffffcU) +
                           (long)pvStack_20);
    }
  }
  operator_delete(pvVar2);
  return 0;
}

