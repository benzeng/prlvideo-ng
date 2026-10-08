
void FUN_100737a40(long param_1,QString *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  plVar4 = (long *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(lVar5 + 8);
  iVar6 = *(int *)(lVar5 + 0xc);
  iVar7 = 0;
  if (iVar3 < iVar6) {
    lVar8 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar5 + 0x10 + (iVar3 + lVar8) * 8);
      FUN_10072dbf0(&local_50,*puVar1);
      FUN_10072dc20(&local_58,*puVar1);
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100737b04;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100737b04:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100737b34;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100737b34:
      cVar2 = operator==(&local_48,param_2);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = operator==(&local_40,param_2 + 1);
      }
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100737b93;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100737b93:
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100737bc3;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100737bc3:
      if (cVar2 != '\0') {
        iVar3 = *(int *)(*plVar4 + 8);
        iVar6 = *(int *)(*plVar4 + 0xc);
        break;
      }
      lVar8 = lVar8 + 1;
      lVar5 = *plVar4;
      iVar3 = *(int *)(lVar5 + 8);
      iVar6 = *(int *)(lVar5 + 0xc);
    } while (lVar8 < iVar6 - iVar3);
    iVar7 = (int)lVar8;
  }
  if (iVar7 < iVar6 - iVar3) {
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_60 = 0;
    local_68 = 0;
    QAbstractItemModel::beginRemoveRows(*(QModelIndex **)(param_1 + 0x10),(int)&local_70,iVar7);
    plVar4 = (long *)FUN_100738b80(plVar4,iVar7);
    FUN_1007392c0(param_1 + 0x20,param_2);
    QAbstractItemModel::endRemoveRows();
    FUN_100857850(*(undefined8 *)(param_1 + 0x10));
    if (*plVar4 != 0) {
      QObject::deleteLater();
    }
    if (plVar4[1] != 0) {
      QObject::deleteLater();
    }
  }
  return;
}

