
undefined8 FUN_1000c29e0(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_40;
  long *local_38;
  
  iVar5 = (int)param_1 + 0x70;
  QSemaphore::acquire(iVar5);
  uVar7 = 0;
  if (*(int *)(*(long *)(param_1 + 0x68) + 0x14) != 0) {
    plVar1 = (long *)(param_1 + 0x68);
    lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
    plVar4 = *(long **)(param_1 + 0x68);
    if (1 < *(uint *)(plVar4 + 2)) {
      local_38 = plVar4;
      FUN_1000c3a10(&local_40,plVar1,&local_38);
      plVar4 = (long *)*plVar1;
    }
    uVar7 = *(undefined8 *)(*plVar4 + 0x10);
    if (1 < *(uint *)(plVar4 + 2)) {
      local_38 = plVar4;
      FUN_1000c3a10(&local_40,plVar1,&local_38);
      plVar4 = (long *)*plVar1;
    }
    plVar6 = (long *)*plVar4;
    if (1 < *(uint *)(plVar4 + 2)) {
      local_40 = (long *)*plVar4;
      FUN_1000c3a10(&local_38,plVar1,&local_40);
      plVar4 = (long *)*plVar1;
      plVar6 = local_38;
    }
    if (plVar6 != plVar4) {
      *(long *)(*plVar6 + 8) = plVar6[1];
      *(long *)plVar6[1] = *plVar6;
      if (plVar6 != (long *)0x0) {
        operator_delete(plVar6);
      }
      *(int *)(*plVar1 + 0x14) = *(int *)(*plVar1 + 0x14) + -1;
    }
    LOCK();
    piVar2 = (int *)(lVar3 + 0x1280 + (ulong)*(uint *)(param_1 + 0x34) * 4);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  QSemaphore::release(iVar5);
  return uVar7;
}

