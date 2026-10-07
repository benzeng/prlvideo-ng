
void FUN_1000c22b0(long param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *local_40;
  long *local_38;
  
  iVar6 = (int)param_1 + 0x70;
  QSemaphore::acquire(iVar6);
  if (*(int *)(*(long *)(param_1 + 0x68) + 0x14) != 0) {
    plVar1 = (long *)(param_1 + 0x68);
    do {
      lVar4 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
      plVar5 = *(long **)(param_1 + 0x68);
      if (1 < *(uint *)(plVar5 + 2)) {
        local_38 = plVar5;
        FUN_1000c3a10(&local_40,plVar1,&local_38);
        plVar5 = (long *)*plVar1;
      }
      pvVar3 = *(void **)(*plVar5 + 0x10);
      if (1 < *(uint *)(plVar5 + 2)) {
        local_38 = plVar5;
        FUN_1000c3a10(&local_40,plVar1,&local_38);
        plVar5 = (long *)*plVar1;
      }
      plVar7 = (long *)*plVar5;
      if (1 < *(uint *)(plVar5 + 2)) {
        local_40 = (long *)*plVar5;
        FUN_1000c3a10(&local_38,plVar1,&local_40);
        plVar5 = (long *)*plVar1;
        plVar7 = local_38;
      }
      if (plVar7 != plVar5) {
        *(long *)(*plVar7 + 8) = plVar7[1];
        *(long *)plVar7[1] = *plVar7;
        if (plVar7 != (long *)0x0) {
          operator_delete(plVar7);
        }
        *(int *)(*plVar1 + 0x14) = *(int *)(*plVar1 + 0x14) + -1;
      }
      LOCK();
      piVar2 = (int *)(lVar4 + 0x1280 + (ulong)*(uint *)(param_1 + 0x34) * 4);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      _free(pvVar3);
    } while (*(int *)(*(long *)(param_1 + 0x68) + 0x14) != 0);
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
  QSemaphore::release(iVar6);
  return;
}

