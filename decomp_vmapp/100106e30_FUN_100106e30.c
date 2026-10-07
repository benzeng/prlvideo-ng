
void FUN_100106e30(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long *plVar4;
  undefined1 local_38 [8];
  long *local_30;
  void *local_28;
  void *pvStack_20;
  undefined8 local_18;
  
  cVar3 = FUN_100106d70(local_38);
  if (cVar3 != '\0') {
    local_28 = (void *)0x0;
    pvStack_20 = (void *)0x0;
    local_18 = 0;
    FUN_100106fc0(&local_28,local_38);
    uVar2 = DAT_1011c3650;
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_30 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_100bef0d0;
      local_30 = plVar4;
    }
    cVar3 = FUN_100063770(uVar2,0x186f4,0,&local_28,0xbbb,&local_30);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar1 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    if (cVar3 == '\0' && 0 < DAT_1011b55f8) {
      FUN_1008e3970("OSTYPESYNC","vm",1,"Failed to send OS changed event");
    }
    if (local_28 != (void *)0x0) {
      if (pvStack_20 != local_28) {
        pvStack_20 = (void *)((~((long)pvStack_20 + (-8 - (long)local_28)) & 0xfffffffffffffff8U) +
                             (long)pvStack_20);
      }
      operator_delete(local_28);
    }
  }
  return;
}

