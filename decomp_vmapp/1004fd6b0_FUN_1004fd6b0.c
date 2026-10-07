
undefined8 * FUN_1004fd6b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  QArrayData *pQVar4;
  int iVar5;
  long lVar6;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  plVar1 = (long *)(param_2 + 0x18);
  lVar6 = FUN_100502100(plVar1,param_3);
  if (*plVar1 != lVar6) goto LAB_1004fd863;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  plVar2 = (long *)(param_2 + 0x20);
  iVar5 = -1;
  do {
    iVar5 = QString::lastIndexOf(param_3,0x7e,iVar5,1);
    QString::mid((int)&local_48,(int)param_3);
    pQVar4 = local_40;
    local_40 = local_48;
    local_48 = pQVar4;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fd798;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1004fd798:
    lVar6 = FUN_100502100(plVar2,&local_40);
  } while ((lVar6 != *plVar2) && (iVar5 = iVar5 + -1, -2 < iVar5));
  FUN_1005022f0(plVar2,&local_40,param_3);
  QString::toUpper_helper(&local_50);
  FUN_1005022f0(param_2 + 0x28,&local_50,param_3);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fd821;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004fd821:
  lVar6 = FUN_1005022f0(plVar1,param_3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fd863;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004fd863:
  piVar3 = *(int **)(lVar6 + 0x18);
  *param_1 = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_31 = *piVar3 != 0;
    UNLOCK();
  }
  QMutex::unlock();
  return param_1;
}

