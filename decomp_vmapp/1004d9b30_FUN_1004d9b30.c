
int FUN_1004d9b30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    local_48 = 0;
    iVar7 = FUN_1004e5200(param_2,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),
                          *(undefined4 *)(param_3 + 0x14),*(undefined8 *)(param_3 + 8),&local_48);
    if (iVar7 != 0) {
      return iVar7;
    }
    plVar9 = operator_new(0x40);
    FUN_1004e5cb0(plVar9,param_2,param_1,local_48);
    *plVar9 = (long)&PTR_FUN_100bc31e8;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar2 = (long *)*param_5;
    *param_5 = (long)plVar9;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    LOCK();
    plVar2 = plVar9 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    goto LAB_1004d9da6;
  }
  if ((*(byte *)(param_3 + 0x11) & 1) != 0) {
    return -0xffffffd;
  }
  cVar5 = QString::endsWith(param_2,&DAT_1011cc838,1);
  if (cVar5 != '\0') {
    QString::left((int)&local_40);
    cVar5 = QString::endsWith(&local_40,&DAT_1011cc840,1);
    if ((cVar5 == '\0') || (iVar7 = FUN_1004e4f50(&local_40,1), iVar7 == 0)) {
      iVar7 = 0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d9cd0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004d9cd0:
    if (!bVar3) {
      return iVar7;
    }
  }
  uVar6 = QString::endsWith(param_2,&DAT_1011cc840,1);
  iVar7 = FUN_1004e4f50(param_2,uVar6);
  if (iVar7 != 0) {
    return iVar7;
  }
  plVar9 = operator_new(0x60);
  FUN_1004e5bf0(plVar9,param_2,param_1);
  *plVar9 = (long)&PTR_FUN_100bc3168;
  QMutex::QMutex((QMutex *)(plVar9 + 8),0);
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[9] = (long)(plVar9 + 10);
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  plVar2 = (long *)*param_5;
  *param_5 = (long)plVar9;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  LOCK();
  plVar2 = plVar9 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1004d9da6:
  iVar8 = (**(code **)(*(long *)*param_5 + 0x48))
                    ((long *)*param_5,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                     *(undefined4 *)(param_3 + 0x1c),param_4);
  iVar7 = 0;
  if (iVar8 != 0) {
    plVar2 = (long *)*param_5;
    *param_5 = 0;
    iVar7 = iVar8;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  return iVar7;
}

