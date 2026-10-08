
undefined8 FUN_100299260(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  Data *pDVar9;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  QVariant local_80;
  QArrayData *local_70;
  Data *local_68;
  QVariant local_60;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  cVar4 = FUN_100d80630(1);
  if (cVar4 != '\0') {
    CAbstractTask::clearSubTaskList();
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  FUN_100118820(&local_40,uVar1,uVar5);
  QObject::property((char *)&local_60);
  QVariant::toString();
  if (*(int *)(local_50 + 4) == 0) {
    uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    FUN_10015a330(uVar5);
    CDispCommonPreferences::getLockedOperationsList();
    CDispLockedOperationsList::getLockedOperations();
  }
  else {
    uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c2b0(uVar5);
    CVmConfiguration::getVmSecurity();
    CVmSecurity::getLockedOperationsList();
    CVmLockedOperationsList::getLockedOperations();
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002993b9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002993b9:
  QVariant::~QVariant(&local_60);
  QObject::property((char *)&local_80);
  QVariant::toString();
  if (*(int *)(local_70 + 4) == 0) {
    uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    FUN_10015a330(uVar5);
    CDispCommonPreferences::getPasswordProtectedOperations();
    CDispPasswordProtectedOperations::getLockedOperations();
  }
  else {
    uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c2b0(uVar5);
    CVmConfiguration::getVmSecurity();
    CVmSecurity::getPasswordProtectedOperations();
    CVmPasswordProtectedOperations::getLockedOperations();
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002994b4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002994b4:
  QVariant::~QVariant(&local_80);
  FUN_10012b980(&local_a0,&local_48);
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a0 + 8) == *(int *)(local_a0 + 0xc)) {
    bVar6 = false;
  }
  else {
    bVar3 = false;
    do {
      iVar7 = *(int *)(local_40 + 8);
      bVar6 = bVar3;
      if (iVar7 != *(int *)(local_40 + 0xc)) {
        pDVar9 = local_40 + (long)iVar7 * 8 + 0x10;
        lVar8 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar7 * -8;
        do {
          bVar6 = true;
          if (**(int **)pDVar9 == **(int **)local_98) break;
          pDVar9 = pDVar9 + 8;
          lVar8 = lVar8 + -8;
          bVar6 = bVar3;
        } while (lVar8 != 0);
      }
      local_98 = local_98 + 8;
      bVar3 = bVar6;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002995f0;
    }
    iVar7 = *(int *)(local_a0 + 0xc);
    if (iVar7 != *(int *)(local_a0 + 8)) {
      lVar8 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar7 * -8;
      pDVar9 = local_a0 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_a0);
  }
LAB_1002995f0:
  cVar4 = FUN_1001756c0(0x24);
  if (cVar4 == '\0') {
    bVar3 = false;
  }
  else {
    FUN_10012b980(&local_c0,&local_68);
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c0 + 8) == *(int *)(local_c0 + 0xc)) {
      bVar3 = false;
    }
    else {
      bVar2 = false;
      do {
        iVar7 = *(int *)(local_40 + 8);
        bVar3 = bVar2;
        if (iVar7 != *(int *)(local_40 + 0xc)) {
          pDVar9 = local_40 + (long)iVar7 * 8 + 0x10;
          lVar8 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar7 * -8;
          do {
            bVar3 = true;
            if (**(int **)pDVar9 == **(int **)local_b8) break;
            pDVar9 = pDVar9 + 8;
            lVar8 = lVar8 + -8;
            bVar3 = bVar2;
          } while (lVar8 != 0);
        }
        local_b8 = local_b8 + 8;
        bVar2 = bVar3;
      } while (local_b8 != local_b0);
    }
    local_a8 = 1;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100299756;
      }
      iVar7 = *(int *)(local_c0 + 0xc);
      if (iVar7 != *(int *)(local_c0 + 8)) {
        lVar8 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar7 * -8;
        pDVar9 = local_c0 + (long)iVar7 * 8 + 8;
        do {
          if (*(void **)pDVar9 != (void *)0x0) {
            operator_delete(*(void **)pDVar9);
          }
          pDVar9 = pDVar9 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_c0);
    }
  }
LAB_100299756:
  if ((bVar3) || (bVar6)) {
    iVar7 = (int)param_1;
    if (!bVar6) {
      CAbstractTask::removeSubTask(iVar7);
      CAbstractTask::removeSubTask(iVar7);
    }
    if (!bVar3) {
      CAbstractTask::removeSubTask(iVar7);
    }
  }
  else {
    CAbstractTask::clearSubTaskList();
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029980f;
    }
    iVar7 = *(int *)(local_68 + 0xc);
    if (iVar7 != *(int *)(local_68 + 8)) {
      lVar8 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar7 * -8;
      pDVar9 = local_68 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_10029980f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029987f;
    }
    iVar7 = *(int *)(local_48 + 0xc);
    if (iVar7 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar7 * -8;
      pDVar9 = local_48 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_10029987f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    iVar7 = *(int *)(local_40 + 0xc);
    if (iVar7 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar7 * -8;
      pDVar9 = local_40 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_40);
  }
  return 0;
}

