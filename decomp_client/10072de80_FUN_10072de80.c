
long * FUN_10072de80(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  
  piVar1 = *(int **)(param_2 + 0x78);
  if (*piVar1 == 0) {
    lVar3 = QMapDataBase::createData();
    *param_1 = lVar3;
    lVar2 = *(long *)(*(long *)(param_2 + 0x78) + 0x10);
    if (lVar2 != 0) {
      puVar4 = (ulong *)FUN_10008d330(lVar2,lVar3);
      *(ulong **)(lVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar3 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*piVar1 == -1) {
    *param_1 = (long)piVar1;
  }
  else {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *param_1 = *(long *)(param_2 + 0x78);
  }
  return param_1;
}

