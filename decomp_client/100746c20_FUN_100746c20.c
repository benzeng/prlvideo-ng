
long * FUN_100746c20(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  ulong *puVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  piVar2 = *(int **)(lVar1 + 0x68);
  if (*piVar2 == 0) {
    lVar3 = QMapDataBase::createData();
    *param_1 = lVar3;
    lVar1 = *(long *)(*(long *)(lVar1 + 0x68) + 0x10);
    if (lVar1 != 0) {
      puVar4 = (ulong *)FUN_1002833f0(lVar1,lVar3);
      *(ulong **)(lVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar3 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*piVar2 == -1) {
    *param_1 = (long)piVar2;
  }
  else {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    *param_1 = *(long *)(lVar1 + 0x68);
  }
  return param_1;
}

