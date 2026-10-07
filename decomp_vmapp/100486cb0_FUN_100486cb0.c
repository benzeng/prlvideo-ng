
undefined8
FUN_100486cb0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
             uint param_6,long *param_7,undefined8 *param_8,code *param_9,undefined4 param_10)

{
  long *plVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  int *piVar5;
  QArrayData *pQVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  code *pcVar13;
  int *local_40;
  undefined1 local_31;
  
  if (*(uint *)(param_1 + 0x40) < 0x10001) {
    return 0x80034001;
  }
  pcVar13 = FUN_1004871b0;
  if (param_9 != (code *)0x0) {
    pcVar13 = param_9;
  }
  plVar8 = operator_new(0x48);
  pQVar3 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  pQVar4 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_40 = (int *)*param_5;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_40);
      iVar2 = local_40[2];
      if (iVar2 != local_40[3]) {
        puVar10 = (undefined8 *)(*param_5 + 0x10 + (long)*(int *)(*param_5 + 8) * 8);
        piVar11 = local_40 + (long)iVar2 * 2 + 4;
        lVar9 = (long)local_40[3] * 8 + (long)iVar2 * -8;
        do {
          piVar5 = (int *)*puVar10;
          *(int **)piVar11 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          puVar10 = puVar10 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  param_7 = (long *)*param_7;
  if (param_7 != (long *)0x0) {
    LOCK();
    *(int *)(param_7 + 1) = (int)param_7[1] + 1;
    UNLOCK();
  }
  pQVar6 = (QArrayData *)*param_8;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  *plVar8 = param_1;
  plVar8[1] = (long)pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  plVar8[2] = (long)pQVar4;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  plVar8[3] = (long)local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)(plVar8 + 3));
      lVar9 = plVar8[3];
      iVar2 = *(int *)(lVar9 + 8);
      if (iVar2 != *(int *)(lVar9 + 0xc)) {
        piVar11 = local_40 + (long)local_40[2] * 2 + 4;
        puVar10 = (undefined8 *)(lVar9 + 0x10 + (long)iVar2 * 8);
        lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar5 = *(int **)piVar11;
          *puVar10 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          puVar10 = puVar10 + 1;
          piVar11 = piVar11 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  *(uint *)(plVar8 + 4) = param_6;
  plVar8[5] = (long)param_7;
  if (param_7 != (long *)0x0) {
    LOCK();
    *(int *)(param_7 + 1) = (int)param_7[1] + 1;
    UNLOCK();
  }
  plVar8[6] = (long)pQVar6;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  plVar8[7] = (long)pcVar13;
  *(undefined4 *)(plVar8 + 8) = param_10;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100486f42;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100486f42:
  if (param_7 != (long *)0x0) {
    LOCK();
    plVar1 = param_7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*param_7 + 0x10))(param_7);
    }
  }
  FUN_100013180(&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100486f9c;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100486f9c:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100486fc8;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100486fc8:
  if ((param_6 & 0x40000) == 0) {
    FUN_100485570(param_1,plVar8,param_4);
    uVar12 = 0;
  }
  else {
    cVar7 = FUN_10052f8e0(FUN_1004852b0,plVar8,1,param_4);
    uVar12 = 0;
    if (cVar7 == '\0') {
      FUN_100485310(plVar8);
      operator_delete(plVar8);
      uVar12 = 0x80034001;
    }
  }
  return uVar12;
}

