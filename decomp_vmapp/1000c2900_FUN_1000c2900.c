
undefined8 FUN_1000c2900(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined1 local_40 [8];
  long local_38;
  
  iVar6 = (int)param_1 + 0x70;
  QSemaphore::acquire(iVar6);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x78) == 0) {
    lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
    lVar7 = *(long *)(param_1 + 0x68);
    if (1 < *(uint *)(lVar7 + 0x10)) {
      local_38 = lVar7;
      FUN_1000c3a10(local_40,(long *)(param_1 + 0x68),&local_38);
      lVar7 = *(long *)(param_1 + 0x68);
    }
    plVar4 = operator_new(0x18);
    plVar4[2] = param_2;
    *plVar4 = lVar7;
    puVar2 = *(undefined8 **)(lVar7 + 8);
    plVar4[1] = (long)puVar2;
    *puVar2 = plVar4;
    *(long **)(*(long *)(param_1 + 0x68) + 8) = plVar4;
    piVar1 = (int *)(*(long *)(param_1 + 0x68) + 0x14);
    *piVar1 = *piVar1 + 1;
    uVar5 = 1;
    LOCK();
    piVar1 = (int *)(lVar3 + 0x1280 + (ulong)*(uint *)(param_1 + 0x34) * 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QSemaphore::release(iVar6);
  return uVar5;
}

