
undefined1 FUN_1006d8370(void)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined1 uVar3;
  QString local_50;
  QFileInfo local_48 [8];
  QString local_40;
  QFileInfo local_38 [8];
  QString local_30;
  QDir local_28 [8];
  undefined1 local_20;
  undefined7 uStack_1f;
  undefined1 local_11;
  
  FUN_1006d8290(&local_20);
  pQVar2 = (QArrayData *)CONCAT71(uStack_1f,local_20);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006d83b1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006d83b1:
  if (iVar1 == 0) {
    return 0;
  }
  FUN_1006d8290(&local_30);
  QDir::QDir(local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_20 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_20) goto LAB_1006d8401;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006d8401:
  QDir::absolutePath();
  QFileInfo::QFileInfo(local_38,&local_40);
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("/Applications/Parallels Desktop.app",0x23);
  QFileInfo::QFileInfo(local_48,&local_50);
  uVar3 = QFileInfo::operator==(local_38,local_48);
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_20 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_20) goto LAB_1006d8485;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006d8485:
  QFileInfo::~QFileInfo(local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_20 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_20) goto LAB_1006d84be;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006d84be:
  QDir::~QDir(local_28);
  return uVar3;
}

