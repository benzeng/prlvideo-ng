
void FUN_1007edc10(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  QString *pQVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022078f0);
  if (lVar4 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  CAbstractTask::canBeTerminated();
  CAbstractProgressOperation::setCancellable(SUB81(uVar2,0));
  if (param_2 < 2) {
    pQVar3 = *(QString **)(param_1 + 0x30);
    QMetaObject::tr((char *)&local_40,"",0x1e19bdf);
    FUN_1002a0af0(&local_48,lVar4);
    QString::arg(&local_38,&local_40,&local_48,0,0x20);
    CAbstractProgressOperation::setName(pQVar3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007edcea;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1007edcea:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007edd1a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1007edd1a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007edd4a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1007edd4a:
    CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    CAbstractProgressOperation::setDescription(*(QString **)(param_1 + 0x30));
    if (*(int *)local_50 == -1) goto LAB_1007edee6;
    pQVar5 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar1 = *(int *)local_50;
      UNLOCK();
joined_r0x0001007eded1:
      local_29 = iVar1 != 0;
      if ((bool)local_29) goto LAB_1007edee6;
    }
  }
  else {
    if (param_2 != 2) {
      FUN_1007ec4b0(param_1,0);
      return;
    }
    pQVar3 = *(QString **)(param_1 + 0x30);
    QMetaObject::tr((char *)&local_60,"",0x1e19bf1);
    FUN_1002a0af0(&local_68,lVar4);
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
    CAbstractProgressOperation::setName(pQVar3);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ede30;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1007ede30:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ede60;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1007ede60:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ede90;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1007ede90:
    CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
    pQVar5 = (QArrayData *)PTR_shared_null_1021e1288;
    CAbstractProgressOperation::setDescription(*(QString **)(param_1 + 0x30));
    if (*(int *)pQVar5 == -1) goto LAB_1007edee6;
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      iVar1 = *(int *)pQVar5;
      UNLOCK();
      goto joined_r0x0001007eded1;
    }
  }
  QArrayData::deallocate(pQVar5,2,8);
LAB_1007edee6:
  if (*(char *)(param_1 + 0x39) != '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_100867e50(*(undefined8 *)(param_1 + 0x10),1);
  }
  return;
}

