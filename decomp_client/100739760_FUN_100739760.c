
void FUN_100739760(long *param_1)

{
  long lVar1;
  Node *pNVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  Node *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Node *local_38;
  undefined1 local_29;
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13e0);
  if (*(long *)(param_1[2] + 0x18) == lVar1) {
    return;
  }
  *(long *)(param_1[2] + 0x18) = lVar1;
  (**(code **)(*param_1 + 0x170))(param_1,lVar1);
  (**(code **)(*param_1 + 0x158))(&local_38,param_1);
  QString::toLatin1();
  QByteArray::QByteArray((QByteArray *)&local_40,(char *)(local_48 + *(long *)(local_48 + 0x10)),-1)
  ;
  iVar3 = *(int *)(local_38 + 0x20);
  iVar6 = 0;
  if (iVar3 != 0) {
    plVar4 = *(long **)(local_38 + 8);
    do {
      pNVar2 = (Node *)*plVar4;
      iVar6 = 0;
      if (pNVar2 != local_38) goto LAB_100739810;
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (iVar3 != 0);
  }
  goto LAB_100739849;
  while (pNVar2 = (Node *)QHashData::nextNode(pNVar2), pNVar2 != local_50) {
LAB_100739950:
    lVar1 = *(long *)(pNVar2 + 0x10);
    if ((*(int *)(lVar1 + 4) == *(int *)(local_58 + 4)) &&
       (iVar3 = _memcmp((void *)(lVar1 + *(long *)(lVar1 + 0x10)),
                        local_58 + *(long *)(local_58 + 0x10),(long)*(int *)(lVar1 + 4)), iVar3 == 0
       )) break;
  }
  goto LAB_100739989;
  while (pNVar2 = (Node *)QHashData::nextNode(pNVar2), pNVar2 != local_38) {
LAB_100739810:
    lVar1 = *(long *)(pNVar2 + 0x10);
    if ((*(int *)(lVar1 + 4) == *(int *)(local_40 + 4)) &&
       (iVar3 = _memcmp((void *)(lVar1 + *(long *)(lVar1 + 0x10)),
                        local_40 + *(long *)(local_40 + 0x10),(long)*(int *)(lVar1 + 4)), iVar3 == 0
       )) {
      iVar6 = *(int *)(pNVar2 + 0xc);
      break;
    }
  }
LAB_100739849:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739879;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100739879:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007398a9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1007398a9:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pNVar2 = local_38 + 0x10;
      *(int *)pNVar2 = *(int *)pNVar2 + -1;
      local_29 = *(int *)pNVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007398d8;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_38);
  }
LAB_1007398d8:
  QSortFilterProxyModel::setSortRole((int)param_1);
  (**(code **)(*param_1 + 0x158))(&local_50,param_1);
  QString::toLatin1();
  QByteArray::QByteArray((QByteArray *)&local_58,(char *)(local_60 + *(long *)(local_60 + 0x10)),-1)
  ;
  iVar3 = *(int *)(local_50 + 0x20);
  if (iVar3 != 0) {
    plVar4 = *(long **)(local_50 + 8);
    do {
      pNVar2 = (Node *)*plVar4;
      if (pNVar2 != local_50) goto LAB_100739950;
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (iVar3 != 0);
  }
LAB_100739989:
  QSortFilterProxyModel::setFilterRole((int)param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007399c4;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1007399c4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007399f4;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1007399f4:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pNVar2 = local_50 + 0x10;
      *(int *)pNVar2 = *(int *)pNVar2 + -1;
      local_29 = *(int *)pNVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739a23;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_50);
  }
LAB_100739a23:
  QSortFilterProxyModel::setDynamicSortFilter(SUB81(param_1,0));
  uVar5 = 0;
  if (iVar6 == -1) {
    uVar5 = 0xffffffff;
  }
  (**(code **)(*param_1 + 0x138))(param_1,uVar5,*(undefined4 *)(param_1[2] + 0x28));
  return;
}

