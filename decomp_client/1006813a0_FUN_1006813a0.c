
void FUN_1006813a0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  Data *pDVar10;
  int *local_110;
  int *local_108;
  int *local_100;
  Data *local_f8;
  QArrayData *local_f0;
  Data *local_e8;
  CDownloadedKeyList local_e0 [160];
  QString local_40;
  undefined1 local_31;
  
  cVar3 = FUN_10061c760(param_2);
  bVar8 = SUB81(param_1,0);
  if (cVar3 != '\0') {
    CContentModel::setBusy(bVar8);
    uVar4 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar4) || ((0x818U >> (uVar4 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar4;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  if ((param_2 < 0) ||
     (lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102221b30), lVar6 == 0)) {
    CContentModel::setBusy(bVar8);
    return;
  }
  CDownloadedKeyList::CDownloadedKeyList(local_e0,(CDownloadedKeyList *)(lVar6 + 0xe0));
  CBaseNode::toString(SUB81(&local_40,0),SUB81(local_e0,0));
  QString::operator=((QString *)(param_1 + 0x140),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100681498;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100681498:
  CDownloadedKeyList::~CDownloadedKeyList(local_e0);
  FUN_100682d10(&local_e8,lVar6 + 0x180);
  iVar1 = *(int *)(local_e8 + 0xc);
  iVar2 = *(int *)(local_e8 + 8);
  if (*(int *)local_e8 != -1) {
    iVar5 = iVar1;
    iVar7 = iVar2;
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100681586;
      iVar5 = *(int *)(local_e8 + 0xc);
      iVar7 = *(int *)(local_e8 + 8);
    }
    if (iVar5 != iVar7) {
      lVar9 = (long)iVar7 * 8 + (long)iVar5 * -8;
      pDVar10 = local_e8 + (long)iVar5 * 8 + 8;
      do {
        if (*(long **)pDVar10 != (long *)0x0) {
          (**(code **)(**(long **)pDVar10 + 0x88))();
        }
        pDVar10 = pDVar10 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_e8);
  }
LAB_100681586:
  if (iVar1 != iVar2) {
    FUN_100682d10(&local_f8,lVar6 + 0x180);
    if (1 < *(uint *)local_f8) {
      FUN_100682e50(&local_f8,*(uint *)(local_f8 + 4));
    }
    CDownloadedKeyInfo::getKey();
    FUN_10067e730(param_1,&local_f0);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068174d;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_10068174d:
    if (*(int *)local_f8 == -1) {
      return;
    }
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_f8 + 0xc);
    if (iVar1 != *(int *)(local_f8 + 8)) {
      lVar6 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_f8 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar10 != (long *)0x0) {
          (**(code **)(**(long **)pDVar10 + 0x88))();
        }
        pDVar10 = pDVar10 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_f8);
    return;
  }
  lVar6 = lVar6 + 400;
  FUN_100682db0(&local_100,lVar6);
  iVar1 = local_100[3];
  iVar2 = local_100[2];
  if (*local_100 != -1) {
    if (*local_100 != 0) {
      LOCK();
      *local_100 = *local_100 + -1;
      local_31 = *local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006815de;
    }
    FUN_100682f30(&local_100,local_100);
  }
LAB_1006815de:
  if (iVar1 == iVar2) {
LAB_1006817c5:
    CContentModel::setBusy(bVar8);
  }
  else {
    lVar9 = 0;
    do {
      FUN_100682db0(&local_108,lVar6);
      iVar1 = local_108[3];
      iVar2 = local_108[2];
      if (*local_108 != -1) {
        if (*local_108 != 0) {
          LOCK();
          *local_108 = *local_108 + -1;
          local_31 = *local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100681645;
        }
        FUN_100682f30(&local_108,local_108);
      }
LAB_100681645:
      if ((long)iVar1 - (long)iVar2 <= lVar9) goto LAB_1006817c5;
      FUN_100682db0(&local_110,lVar6);
      cVar3 = CDownloadedKeyInfo::isActiveHere();
      if (*local_110 != -1) {
        if (*local_110 != 0) {
          LOCK();
          *local_110 = *local_110 + -1;
          local_31 = *local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006816aa;
        }
        FUN_100682f30(&local_110,local_110);
      }
LAB_1006816aa:
      lVar9 = lVar9 + 1;
    } while (cVar3 == '\0');
    FUN_100678a70(param_1);
  }
  return;
}

