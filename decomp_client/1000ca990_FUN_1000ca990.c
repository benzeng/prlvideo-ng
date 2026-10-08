
QString * FUN_1000ca990(QString *param_1,long param_2,long param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *local_70;
  AnonymousUnion0 local_68;
  AnonymousUnion0 local_60;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = *(QArrayData **)(*(long *)(param_2 + 0xf0) + 0x58);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_10004ed40(param_2 + 0x10,&local_40,param_2 + 0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000caa0e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000caa0e:
  QMutex::lock();
  if (*(char *)(param_3 + 0x28) == '\0') {
    local_48 = *(QArrayData **)(*(long *)(param_2 + 0xf0) + 0x58);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  else {
    local_48 = *(QArrayData **)(param_2 + 0x28);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  FUN_100040630(param_1,*(undefined8 *)(param_2 + 0xf0),&local_48,param_3);
  QFileInfo::QFileInfo(local_50,param_1);
  QFileInfo::completeBaseName();
  pQVar2 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_60.field0,(QChar *)(param_3 + 0x10),
             (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
  pQVar3 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_68.field0,(QChar *)(param_3 + 0x18),
             (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
  FUN_1000f83b0(param_2 + 0x1a0,param_1,&local_58,param_3 + 8,&DAT_102310840,&local_60,&local_68);
  if (*(int *)local_68.field1 != -1) {
    if (*(int *)local_68.field1 != 0) {
      LOCK();
      *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
      local_31 = *(int *)local_68.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cab4e;
    }
    QArrayData::deallocate((QArrayData *)local_68.field1,2,8);
  }
LAB_1000cab4e:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cab7d;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000cab7d:
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cabb1;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
  }
LAB_1000cabb1:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cabe0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000cabe0:
  lVar1 = *(long *)(param_2 + 0x50);
  FUN_1000463e0(&local_70,&local_58,param_2 + 0x10,0);
  FUN_100100cf0(lVar1 + 0x38,param_3 + 8,&local_70,&local_58);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cac3d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000cac3d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cac71;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000cac71:
  QFileInfo::~QFileInfo(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cacaa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000cacaa:
  QMutex::unlock();
  return param_1;
}

