
void FUN_1000bcf90(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  uVar2 = DAT_1011c3650;
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_100bef0d0;
    local_40 = plVar3;
  }
  FUN_100063770(uVar2,param_2,0,&local_38,0xbbb,&local_40);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_38 != (void *)0x0) {
    if (pvStack_30 != local_38) {
      pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U) +
                           (long)pvStack_30);
    }
    operator_delete(local_38);
  }
  FUN_100075830(*(undefined8 *)(param_1 + 0xf8));
  return;
}

