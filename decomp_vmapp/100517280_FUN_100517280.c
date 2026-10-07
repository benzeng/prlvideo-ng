
void FUN_100517280(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = *(long *)(param_1 + 0x68) != 0;
  if (bVar5) {
    QMutex::lock();
    lVar4 = *(long *)(param_1 + 0x68);
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(lVar4 + 0x10);
  *(long *)(lVar4 + 0x10) = lVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18) = param_3;
  FUN_100517350(param_1,param_2,param_3);
  if (!bVar5) {
    return;
  }
  QMutex::unlock();
  return;
}

