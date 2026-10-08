
long * FUN_10041eed0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  int *piVar4;
  
  puVar1 = PTR_shared_null_1021e12f0;
  if (param_2 != (long *)0x0) {
    piVar4 = (int *)*param_2;
    if (*piVar4 != 0) {
      if (*piVar4 != -1) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar4 = (int *)*param_2;
      }
      *param_1 = (long)piVar4;
      return param_1;
    }
    lVar2 = QMapDataBase::createData();
    *param_1 = lVar2;
    if (*(long *)(*param_2 + 0x10) == 0) {
      return param_1;
    }
    puVar3 = (ulong *)FUN_100137920(*(long *)(*param_2 + 0x10),lVar2);
    lVar2 = *param_1;
    *(ulong **)(lVar2 + 0x10) = puVar3;
    *puVar3 = *puVar3 & 3 | lVar2 + 8U;
    QMapDataBase::recalcMostLeftNode();
    return param_1;
  }
  if (*(int *)PTR_shared_null_1021e12f0 != -1) {
    if (*(int *)PTR_shared_null_1021e12f0 == 0) {
      lVar2 = QMapDataBase::createData();
      *param_1 = lVar2;
      if (*(long *)(puVar1 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_100137920(*(long *)(puVar1 + 0x10),lVar2);
        lVar2 = *param_1;
        *(ulong **)(lVar2 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | lVar2 + 8U;
        QMapDataBase::recalcMostLeftNode();
      }
      goto LAB_10041effd;
    }
    LOCK();
    *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
    UNLOCK();
  }
  *param_1 = (long)puVar1;
LAB_10041effd:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return param_1;
      }
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree((QMapNodeBase *)puVar1,(int)*(undefined8 *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
  return param_1;
}

