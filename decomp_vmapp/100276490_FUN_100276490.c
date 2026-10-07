
void FUN_100276490(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 local_50 [24];
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
  }
  lVar2 = FUN_100273d90(param_2,param_1,*(undefined8 *)(param_1 + 0x160),
                        *(undefined8 *)(param_1 + 400));
  *(long *)(param_1 + 0x188) = lVar2;
  uVar1 = DAT_1011c3650;
  if (lVar2 == 0) {
    local_38 = (void *)0x0;
    pvStack_30 = (void *)0x0;
    local_28 = 0;
    FUN_10006a060(local_50);
    FUN_1000648b0(uVar1,0x80000188,&local_38,local_50);
    FUN_10006a680(local_50);
    if (local_38 != (void *)0x0) {
      if (pvStack_30 != local_38) {
        pvStack_30 = (void *)((~((long)pvStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                             (long)pvStack_30);
      }
      operator_delete(local_38);
    }
  }
  return;
}

