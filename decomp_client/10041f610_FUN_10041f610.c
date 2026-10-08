
undefined8 * FUN_10041f610(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  int *piVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    piVar5 = (int *)param_2[3];
    if (*piVar5 != 0) {
      if (*piVar5 != -1) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
        piVar5 = (int *)param_2[3];
      }
      param_1[3] = piVar5;
      return param_1;
    }
    uVar3 = QMapDataBase::createData();
    param_1[3] = uVar3;
    if (*(long *)(param_2[3] + 0x10) == 0) {
      return param_1;
    }
    puVar4 = (ulong *)FUN_1001411c0(*(long *)(param_2[3] + 0x10),uVar3);
    lVar1 = param_1[3];
    *(ulong **)(lVar1 + 0x10) = puVar4;
    *puVar4 = *puVar4 & 3 | lVar1 + 8U;
    QMapDataBase::recalcMostLeftNode();
    return param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 != -1) {
    if (*(int *)PTR_shared_null_1021e12f0 == 0) {
      uVar3 = QMapDataBase::createData();
      param_1[3] = uVar3;
      if (*(long *)(puVar2 + 0x10) != 0) {
        puVar4 = (ulong *)FUN_1001411c0(*(long *)(puVar2 + 0x10),uVar3);
        lVar1 = param_1[3];
        *(ulong **)(lVar1 + 0x10) = puVar4;
        *puVar4 = *puVar4 & 3 | lVar1 + 8U;
        QMapDataBase::recalcMostLeftNode();
      }
      goto LAB_10041f76a;
    }
    LOCK();
    *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
    UNLOCK();
  }
  param_1[3] = puVar2;
LAB_10041f76a:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return param_1;
      }
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
  return param_1;
}

