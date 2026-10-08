
undefined8 * FUN_1005f3d00(undefined8 *param_1,long param_2)

{
  QArrayData *pQVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData **ppQVar7;
  QArrayData *local_38;
  undefined4 local_30;
  bool local_21;
  
  pQVar5 = (QArrayData *)QString::fromAscii_helper("",0);
  iVar4 = *(int *)pQVar5;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_21 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar5;
  }
  local_30 = 0;
  local_38 = pQVar5;
  if (iVar4 != -1) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if (local_21) goto LAB_1005f3d70;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005f3d70:
  cVar3 = FUN_1005f3ea0(param_2);
  if (cVar3 == '\0') {
    lVar6 = FUN_1005ec990(*(long *)(param_2 + 0x10) + 0x38);
    if (*(int *)(lVar6 + 0x158) == 2) {
      piVar2 = *(int **)(param_2 + 0x28);
      *param_1 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_21 = *piVar2 != 0;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 1) = 2;
    }
    else {
      *param_1 = pQVar5;
      if (1 < *(int *)pQVar5 + 1U) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        local_21 = *(int *)pQVar5 != 0;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  else {
    lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220780);
    ppQVar7 = &local_38;
    if (lVar6 != 0) {
      ppQVar7 = (QArrayData **)(lVar6 + 0x78);
    }
    pQVar1 = *ppQVar7;
    *param_1 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
      local_21 = *(int *)pQVar1 != 0;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(ppQVar7 + 1);
  }
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if (local_21) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return param_1;
}

