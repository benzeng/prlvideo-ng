
void FUN_1002724a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_1 + 0x90);
  QMutex::lock();
  lVar4 = FUN_100257d80(param_1);
  plVar5 = (long *)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1;
  }
  iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined4 *)(lVar4 + 0x31c90));
  *(int *)(lVar4 + 0x31c90) = iVar3;
  if (iVar3 == 1) {
    bVar2 = (**(code **)(*plVar5 + 0x50))(plVar5);
    *(uint *)(lVar4 + 0x31ca4) = (uint)bVar2;
  }
  QMutex::unlock();
  return;
}

