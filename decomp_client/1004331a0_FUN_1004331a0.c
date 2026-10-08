
undefined1 FUN_1004331a0(QModelIndex *param_1,QModelIndex *param_2,bool *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  QString QVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar1 = *(int *)param_2;
  if ((long)iVar1 < 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  lVar3 = **(long **)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0xc) - *(int *)(lVar3 + 8) <= iVar1) {
    return 0;
  }
  if ((param_4 | 8) != 10) {
    return 0;
  }
  if (3 < uVar2) {
    return 0;
  }
  QVar4.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (lVar3 + 0x10 + ((long)*(int *)(lVar3 + 8) + (long)iVar1) * 8);
  switch(uVar2) {
  case 0:
    QVariant::toInt(param_3);
    CVmSharedFolder::setEnabled(SUB81(QVar4.field0_0x0,0));
    goto LAB_1004333fd;
  case 1:
    QVariant::toString();
    cVar6 = FUN_1004308e0(&local_40,*(undefined8 *)(param_1 + 0x10));
    if (cVar6 == '\0') {
      QVariant::toString();
      local_50 = (QArrayData *)QString::fromAscii_helper(".",1);
      bVar7 = QString::endsWith(&local_48,&local_50,1);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043334a;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10043334a:
      bVar7 = bVar7 ^ 1;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043337e;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
    else {
      bVar7 = 0;
    }
LAB_10043337e:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004333ae;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004333ae:
    if (bVar7 == 0) goto LAB_1004333fd;
    QVariant::toString();
    CVmSharedFolder::setName(QVar4);
    if (*(int *)local_58 == -1) goto LAB_1004333fd;
    local_60 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      iVar1 = *(int *)local_58;
      UNLOCK();
      goto joined_r0x0001004332bd;
    }
    break;
  case 2:
    QVariant::toString();
    CVmSharedFolder::setPath(QVar4);
    if (*(int *)local_60 == -1) goto LAB_1004333fd;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
joined_r0x0001004332bd:
      local_31 = iVar1 != 0;
      if ((bool)local_31) goto LAB_1004333fd;
    }
    break;
  case 3:
    QVariant::toBool();
    CVmSharedFolder::setReadOnly(SUB81(QVar4.field0_0x0,0));
    goto LAB_1004333fd;
  }
  QArrayData::deallocate(local_60,2,8);
LAB_1004333fd:
  puVar5 = PTR_shared_null_1021e1288;
  QAbstractItemModel::dataChanged(param_1,param_2,(QVector *)param_2);
  if (*(int *)puVar5 != -1) {
    if (*(int *)puVar5 != 0) {
      LOCK();
      *(int *)puVar5 = *(int *)puVar5 + -1;
      UNLOCK();
      if (*(int *)puVar5 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar5,4,8);
  }
  return 1;
}

