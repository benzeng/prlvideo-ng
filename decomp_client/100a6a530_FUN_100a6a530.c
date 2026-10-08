
void FUN_100a6a530(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  
  pvVar3 = (void *)*param_1;
  LOCK();
  iVar2 = *(int *)((long)pvVar3 + 0x5c);
  *(int *)((long)pvVar3 + 0x5c) = -1;
  UNLOCK();
  if (iVar2 != -1) {
    _close(iVar2);
  }
  if (pvVar3 != (void *)0x0) {
    plVar4 = *(long **)((long)pvVar3 + 0x88);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(long **)((long)pvVar3 + 0x80);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(long **)((long)pvVar3 + 0x78);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(long **)((long)pvVar3 + 0x70);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    operator_delete(pvVar3);
    return;
  }
  return;
}

